/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 08 May 2018 11:24:59 AM CST
 @File Name: creat_a_single_linklist_14.cpp
 @Description:  创建一个单链表

 创建一个链表的步骤:
 1->创建链表头  2->创建结头  3->将链表头指向链表的第一个节点
 4->继续创建节点，同时将节点加入到链表中适当的位置
************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define   N  3

struct Stu{
    struct Stu* next;
    char   name[10];
    int    score;
};

struct Stu_head{
    struct Stu* head;
};

struct Stu_head* head_creat()  //创建一个头结点函数head_creat()
{
    struct Stu_head* single_link;
    if((single_link = (struct Stu_head *)malloc(sizeof(struct Stu_head)))==NULL)
    {
        printf("分配空间失败!");
        exit(0);
    }
    if(single_link != NULL)
    {
        single_link->head = NULL;
    }

    return single_link;

}

struct Stu* node_creat()  //创建节点函数
{
    struct Stu* node;
    if((node = (struct Stu*)malloc(sizeof(struct Stu)))==NULL)
    {
        printf("分配空间失败!");
        exit(0);
    }
    
    if(node != NULL)
    {
        node->next = NULL;
        printf("请输入学生的姓名、成绩:\n");
        scanf("%s%d",&node->name, &node->score);
    }

    return node;
}

int node_append(struct Stu_head* single_link)
{
    struct Stu* node = NULL;
    struct Stu* cursor = NULL;

    node = node_creat();

    if(single_link->head == NULL)
    {
        single_link->head = node;
    }
    else
    {
        cursor = single_link->head;
        while(cursor != NULL && cursor->next != NULL)
        {
            cursor = cursor->next;
        }
        cursor->next = node;
    }
    return 0;
}

int node_print(struct Stu_head* single_link)
{
    struct Stu* iter = single_link->head;

    while(iter != NULL)
    {
        printf("%s的成绩为:%d\n", &iter->name, iter->score);
        iter = iter->next;
    }
    return 0;
}

int node_destory(struct Stu* node)
{
    if(node != NULL)
    {
        node->next = NULL;
        free(node);
    }
    return 0;
}

int single_link_destory(struct Stu_head* single_link)
{
    struct Stu* iter = single_link->head;
    struct Stu* next = NULL;

    while(iter != NULL)
    {
        next = iter->next;
        node_destory(iter);
        iter = next;
    }

    single_link->head = NULL;
    free(single_link);

    return 0;
}

int main(int argc, char **argv)
{
    int i;
    struct Stu_head* single_head = head_creat();
    for(i=0;i<N;i++)
    {
        node_append(single_head);
    }
    node_print(single_head);

    single_link_destory(single_head);

    return 0;
}
