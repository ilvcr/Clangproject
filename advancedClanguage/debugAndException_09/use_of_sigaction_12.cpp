/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 12:49:59 PM CST
 @File Name: use_of_sigaction_12.cpp
 @Description:  通过捕捉函数实现信号来捕捉和查找段错误
************************************************************************/

#include<memory.h>
#include<stdlib.h>
#include<stdio.h>
#include<signal.h>

static void sigsegv_handler(int signum, siginfo_t* info, void* ptr)
{
    ucontext_t* ucontext = (ucontext_t*)ptr;  //把捕捉函数的第三个参数强制转化为ucontext_t类型的指针
    
    printf("info.si_signo = %d\n", signum);
    printf("info.si_errno = %d\n", info->si_errno);
    printf("info.si_code = %d\n", info->si_code);

    printf("发送异常的地址为: 0x%3x\n", ucontext_t->uc_mcontext.gregs[14]);

    exit(-1);
}

void catch_sig()
{
    struct sigaction action;
    memset(&action, 0, sizeof(action));
    action.sa_sigaction = sigsegv_handler;
    action.sa_flags = SA_SIGINFO;
    if(sigaction(SIGSEGV, &action, NULL) != 0)
    {
        perror("sigaction");
    }

    return 0;
}

void cause_segv()
{
    int* a;
    *a = 123;

    return 0;
}

int main(int argc, char **argv)
{
    catch_sig();
    cause_segv();

    return 0;
}


