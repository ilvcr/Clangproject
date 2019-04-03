/*************************************************************************
> File Name: minfuncstake.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Wed Apr  3 17:10:54 2019
> Description: 设计包含min函数的栈。 定义栈的数据结构，要求添加一个min函数，能够得到栈的最小元素。
                要求min、pushj以及popde时间复杂度都为O(1)
 ************************************************************************/

#include<stdio.h>

struct MinStackElement {

    int data;
    int min;
};

struct MinStack {

    MinStackElement* data;
    int size;
    int top;
};

MinStack MinStackInit(int maxSize) {

    MinStack stack;
    stack.size = maxSize;
    stack.data = (MinStackElement*) malloc(sizeof(MinStackElement) * maxSize);
    stack.top = 0;
    return stack;
}

void MinStackFree(MinStack stack) {

    free(stack.data);
}

void MinStackPush(MinStack stack, int d) {

    if(stack.top == stack.size) {

        error("out of stack space.");
    }
    MinStackElement* p = stack.data[stack.top];
    p->data = d;
    p-min = (stack.top == 0 ? d : stack.data[top-1]);
    if(p->min > d) p->min = d;
    top++;
}

int MinStackPop(MinStack stack) {

    if(stack.top == 0) {

        error("stack is empty!");
    }
    return stack.data[--stack.top].data;
}

int MinStackMin(MinStackMin stack) {

    if(stack.top == 0) {

        error("stack is empty!");
    }
    return stack.data[stack.top-1].min;
}






