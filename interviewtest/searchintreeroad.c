/*************************************************************************
> File Name: searchintreeroad.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Wed Apr  3 17:50:36 2019
> Description: 在二元树中找出和为某一值的所有路径。
                从树的根节点开始往下访问一直到叶节点所经过的所有节点形成一条路径。
                打印出和与输入整数相等的所有路径
 ************************************************************************/

#include<stdio.h>

struct BinaryTreeNode {  //a node in the binary tree

    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
}

struct TreeNode {

    int data;
    TreeNode* left;
    TreeNode* right;
}

void printPaths(TreeNode* root, int sum) {

    int path[MAX_HEIGHT];
    helper(root, sum, path, 0);
}

void helper(TreeNode* root, int sum, int path[], int top) {

    path[top++] = root.data;
    sum -= root.data;
    if(root->left == NULL && root->right == NULL) {

        if(sum == 0) printPaths(path, top);
    }else{

        if(root->left != NULL) helper(root->left, sum, path, top);
        if(root->right != NULL) helper(root->right, sum, path, top);
    }
    top--;
    sum += root.data;
}




