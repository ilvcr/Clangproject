/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 12:19:51 PM CST
 @File Name: create_a_newstyle_linklist_18.cpp
 @Description:  颠覆传统列表的实现方法
************************************************************************/

//对双向循环列表按照先后循序进行
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*头结点的创建*/
//list_head结构(宿主结构体)的实现
struct list_head{
    struct list_head *next, *prev;
};


//对所有创建的双向循环链表表头节点进行初始化工作
#define  LIST_HEAD_INT(name)   { &(name), &(name) }
#define  LIST_HEAD(name) struct list_head name = LIST_HEAD_INIT(name)
/*使用LIST_HEAD(name)宏进行初始化,在该方法进行初始化的时候,无需定义头节点,
    只需给出宏中的参数,即给出需要进行初始化的头节点名*/

//第二种方法
#define  INIT_LIST_HEAD(ptr)   do{ (ptr)->next = (ptr); (ptr)->prev = (ptr); } while (0)
/*使用INIT_LIST_HEAD(ptr)宏进行初始化,使用这种方法时需要定义一个头节点*/


/*节点的添加*/
//通过__list_add()函数来实现链表头添加节点
//__list_add()函数的功能是在两个非空节点插入一个节点
static inline void __list_add(struct list_head *newl,
                              struct list_head *prev;
                              struct list_head *next)
{
        next->prev = newl;
        newl->next = next;
        newl->prev = prev;
        prev->next = newl;
}


//函数list_add()和list_add_tail()的实现
static inline void list_add(struct list_head *newl, struct list_head *head)
{
    __list_add(newl, head, head->next);
}

static inline void list_add_tail(struct list_head *newl, struct list_head *head)
{
    __list_add(newl, head->prev, head);
}

/*节点的删除*/
//删除节点的函数__list_del()
static inline void __list_del(struct list_head *prev, struct list_head *next)
{
    next->prev = prev;
    prev->next = next;
}

static inline void list_del(struct list_head *entry)
{
    //实现删除entry所指的节点, 同时将entry所指向的节点指针域“封死”
    __list_del(entry->prev, entry->next);
    entry->next = LIST_POISON1;
    entry->prev = LIST_POISON2;
}


//LIST_POISON1和LIST_POISON2的定义
#define  LIST_POISON1  ((void *) 0x00100100)
#define  LIST_POISON2  ((void *) 0x00200200)

