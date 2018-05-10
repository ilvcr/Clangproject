/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 08 May 2018 10:25:43 PM CST
 @File Name: creat_a_doubly_linklist_17.cpp
 @Description:  对双向链表中的任何一个点, 可以通过前后指针域对整个链表进行遍历
************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define  N  5

struct Stu{
    struct Stu* next, *prev;
    char        name[10];
    int         score;
};

struct Stu_head{
    struct Stu* head;
};

struct Stu_head* head_create()
{
    struct Stu_head* single_link;
    if((single_link = (struct Stu_head*)malloc(sizeof(struct Stu_head)))==NULL)
    {
        printf("分配内存失败!");
        exit(0);
    }

    if(single_link != NULL)
    {
        single_link->head = NULL;
    }

    return single_link;
}

struct Stu* node_create()
{
    struct Stu* node;
    if((node = (struct Stu*)malloc(sizeof(struct Stu)))==NULL)
    {
        printf("分配内存失败!");
        exit(0);
    }

    if(node != NULL)
    {
        node->next = NULL;
        node->prev = NULL;
        printf("请输入学生的姓名、成绩: \n");
        scanf("%s%d", &node->name, &node->score);
    }

    return node;
}

int node_append(struct Stu_head* single_link)
{
    struct Stu* node = NULL;
    struct Stu* cursor = NULL;

    node = node_create();

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
        node->prev = cursor;
    }

    return 0;
}

struct Stu* node_search(struct Stu_head* single_link, char *name)
{
    struct Stu* pos = NULL;
    pos = single_link->head;
    while(pos!=NULL)
    {
        if(strcmp(pos->name, name)==0)
            return pos;
        else
            pos = pos->next;
    }

    if(pos==NULL)
    {
        printf("找不到该数据！");
        exit(0);
    }

    return NULL;
}

int node_print(struct Stu* cursor, int mark)
{
    struct Stu* iter = cursor;

    while(iter != NULL)
    {
        if(0 == mark)
            iter = iter->next;
        else
            iter = iter->prev;
        if(NULL!=iter)
            printf("%s的成绩为: %d\n", &iter->name, iter->score);
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

int main(int argc, char ** argv)
{
    int i;
    char name[10];
    struct Stu *search_node;

    struct Stu_head* single_head = head_create();

    for(i=0;i<N;i++)
        node_append(single_head);

    printf("请输入所要查找的节点的人名：");
    scanf("%s", name);

    search_node = node_search(single_head, name);

    printf("\n查找节点后的节点信息:\n");
    node_print(search_node, 0);

    printf("\n查找节点前的节点信息:\n");
    node_print(search_node, 1);

    single_link_destory(single_head);

    return 0;
}


