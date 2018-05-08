/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 08 May 2018 02:26:36 PM CST
 @File Name: creat_a_single_linklist_15.cpp
 @Description:  实现插入节点和删除节点的操作
************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define   N   3

struct Stu{
    struct Stu* next;
    char        name[10];
    int         score;
};

struct Stu_head{
    struct Stu* head;
};

struct Stu_head* head_create()
{
    struct Stu_head* single_link;
    if((single_link = (struct Stu_head *)malloc(sizeof(struct Stu_head)))==NULL)
    {
        printf("分配空间失败！");
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
        printf("分配空间失败！");
        exit(0);
    }
    if(node != NULL)
    {
        node->next = NULL;
        printf("请输入学生的姓名、成绩 :\n");
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
    }

    return 0;
}

struct Stu* node_search(struct Stu_head* single_link, char *name)
{
    struct Stu* pos = NULL;
    pos = single_link->head;
    while(pos!=NULL)
    {
        if(strcmp(pos->name, name) == 0)
            return pos;
        else
            pos = pos->next;
    }

    if(pos==NULL)
    {
        printf("没有查找到该数据！");
        exit(0);
    }
    return NULL;
}

int node_insert(struct Stu* pos)
{
    struct Stu *new_node;

    printf("插入信息: ");
    new_node = node_create();

    new_node->next = pos->next;
    pos->next = new_node;

    return 0;
}

int node_print(struct Stu_head* single_link)
{
    struct Stu* iter = single_link->head;

    while(iter != NULL)
    {
        printf("%s的成绩为: %d\n", &iter->name, iter->score);
        iter = iter->next;
    }

    return 0;
}

int delete_node(struct Stu_head* single_link, struct Stu* node)
{
    struct Stu* node_prev, *tmp;
    tmp = single_link->head;
    if(tmp == node)
        single_link->head = tmp->next;
    else
    {
        while(tmp != node)
        {
            node_prev = tmp;
            tmp = tmp->next;
        }
        node_prev->next = tmp->next;
    }

    tmp->next = NULL;
    free(tmp);

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
    char name[10];
    struct Stu* search_node;
    struct Stu_head* single_head = head_create();
    for(i=0;i<N;i++)
    {
        node_append(single_head);
    }

    node_print(single_head);

    printf("请输入你要查找的节点中的人名: ");
    scanf("%s", name);
    search_node = node_search(single_head, name);

    node_insert(search_node);

    printf("\n插入后的节点\n");
    node_print(single_head);

    delete_node(single_head, search_node);

    printf("\n删除节点后\n");
    node_print(single_head);

    single_link_destory(single_head);
    
    return 0;
}
