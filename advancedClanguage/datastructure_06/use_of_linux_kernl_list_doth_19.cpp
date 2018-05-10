/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 01:02:18 PM CST
 @File Name: use_of_linux_kernl_list_doth_19.cpp
 @Description:  利用Linux内核中的list.h在应用层中创建链表
************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"list.h"

/*
1->
    定义了一个宿主结构体stu,并在宿主结构体中定义一个struct list_head类型的list变量
2->
    定义了一个头节点并对其进行初始化
3->
    对定义的一个宿主结构体进行初始化
4->
    对申请的宿主结构体变量初始化并将其添加到以stu_list为头节点的链表中
*/
typedef struct _stu{
        char name[20];
        int num;
        struct list_head list;
}stu;

int main(int argc, char **argv)
{
    stu *pstu;
    stu *tmp_stu;
    struct list_head stu_list;
    struct list_head *pos;
    int i = 0;

    INIT_LIST_HEAD(&stu_list);

    pstu = malloc(sizeof(stu)*5);

    for(i=0;i<5;i++)
    {
        sprintf(pstu[i].name, "Stu%d", i+1);
        pstu[i].num = i+1;
        list_add(&(pstu[i].list), &stu_list);
    }

    list_for_each(pos, &stu_list)
    {
        tmp_stu = list_entry(pos, stu, list);
        printf("student num: %d\tstudent name: %s\n", tmp_stu->num, tmp_stu->name);
    }

    free(pstu);
    return 0;
}
