//
//  BinaryTree.h
//  BinaryTree
//
//  Created by Christian Joachim on 9/19/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h
using namespace std;


class TreeNode
{
    
    
public:
    TreeNode* right;
    TreeNode* left;
    int data;
    TreeNode();
    TreeNode(int data);
    ~TreeNode();
};



class BinaryTree
{
    
public:
    TreeNode* root;
    BinaryTree();
    BinaryTree(int data);
    ~BinaryTree();
    void add(int data);
    void print_inorder(TreeNode* current);
    
    
    
    
};









#endif /* BinaryTree_h */
