/*************************************************************************
> File Name: searchtree2twowayslinklist.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Wed Apr  3 16:45:34 2019
> Description: 把二元查找树转变为排序的双向列表
 ************************************************************************/

#include<stdio.h>

//定义二元查找树节点的数据结构
struct BSTreeNode {
    
    int m_nValue; // value of node
    BSTreeNode* m_pLeft; //left child of node
    BSTreeNode* m_pRight; //right child of node
};
BSTreeNode* treeToLinkedList(BSTreeNode*);
void helper(BSTreeNode*, BSTreeNode*, BSTreeNode);

int main(){


    return 0;
}

BSTreeNode* treeToLinkedList(BSTreeNode* root) {
    
    BSTreeNode* head;
    BSTreeNode* tail;
    helper(head, tail, root);
    return head;
}

void helper(BSTreeNode* &head, BSTreeNode* &tail, BSTreeNode* root) {

    BSTreeNode* lt;
    BSTreeNode* rh;

    if(root == NULL) {

        head = NULL;
        tail = NULL;
        return;
    }

    helper(head, lt, root->m_pLeft);
    helper(rh, tail, root->m_pRight);

    if(lt != NULL) {

        lt->m_pRight = root;
        root->m_pLeft = lt;
    }else {
        
        head = root;
    }
    
    if(rh != NULL) {

        root->m_pRight = rh;
        rh->m_pLeft = root;
    }else {

        tail = root;
    }
}





