/*************************************************************************
> File Name: treesearch.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Thu Apr  4 21:19:12 2019
> Description: 递归和非递归两种方法实现二叉树前序遍历
 ************************************************************************/

#include<stdio.h>


//递归
void preorderRecursive(TreeNode* node) {
    if(node == NULL) return;
    visit(node);
    preorderRecursive(node->left);
    preorderRecursive(node->right);
}

//非递归
void preorderNonrecursive(TreeNode* node) {

    stack<TreeNode*> s;
    s.push(node);
    while(!s.empty()) {
        TreeNode* n = s.pop();
        visit(n);
        if(n->right != NULL) s.push(n->right);
        if(n->left != NULL) s.push(n->left);
    }
}

//中序遍历
void inorderNonrecursive(TreeNode* node) {

    stack<TreeNode*> s;
    TreeNode* current = node;
    while(!s.empty() || current != NULL) {
        if(current != NULL) {
            s.push(current);
            current = current->left;
        }else {
            current = s.pop();
            visit(current);
            current = current->right;
        }
    }
}


//后序遍历
void postorderNonrecursive(TreeNode* node) {

    stack<TreeNode*> sTraverse, sVisit;
    sTraverse.push(node);

    while(!sTraverse.empty()) {
        TreeNode* p = sTraverse.pop();
        sVisit.push(p);
        if(p->left != NULL) sTraverse.push(p->left);
        if(p->right != NULL) sTraverse.push(p->right);
    }

    while(!sVisit.empty()) {
        visit(sVisit.pop);
    }
}


        





