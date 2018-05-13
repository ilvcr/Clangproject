/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 12:30:49 PM CST
 @File Name: use_of_sigaction_11.cpp
 @Description:  Linux环境下参数struct sigaction的实现
************************************************************************/

/*
捕捉函数sigaction的定义形式:

int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);
*/

/*
在 sigaction.h 的头文件中实现, 所在路径为: usr/include/bits
*/

struct sigaction{
        #ifdef __USE_POSIX199309
            union{
                    __sighandler_t sa_handler;
                    void (*sa_sigaction) (int, siginfo_t *, void *);
                }
                __sigaction_handler;
                
                #define sa_handler __sigaction_handler.sa_handler
                #define sa_sigaction __sigaction_handler.sa_sigaction

        #else
                __sighandler_t sa_handler;
        #endif
                __sigset_t sa_mask;


                int sa_flags;

                void (*sa_restorer) (void);

};


typedef struct siginfo{
            int si_signo;
            int si_errno;
            int si_code;
            union{
                int _pad[__SI_PAD_SIZE];

                struct{
                        __pid_t si_pid;
                        __uid_t si_uid;
                    }_kill;

                struct{
                        int si_tid;
                        int si_overrun;
                        sigval_t si_sigval;
                    }_timer;

                struct{
                        int si_tid;
                        int si_overrun;
                        sigval_t si_sigval;
                    }_timer;

                struct{
                        __pid_t si_pid;
                        _uid_t si_uid;
                        sigval_t si_sigval;
                    }_rt;

                struct{
                        __pid_t si_pid;
                        __uid_t si_uid;
                        int si_status;
                        __clock_t si_utime;
                        __clock_t si_stime;
                    }_sigchld;

                struct{
                        void *si_addr;
                    }_sigfault;

                struct{
                        long int si_band;
                        int si_fd;
                    }_sifields;

}siginfo_t;


