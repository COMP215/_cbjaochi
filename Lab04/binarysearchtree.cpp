//
//  binarysearchtree.cpp
//  binarysearchtree
//
//  Created by Christian Joachim on 9/20/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include "binarysearchtree.hpp"
#include <string>
#include <iostream>
using namespace std;

Node::Node(string data) {
    data_ = data;
    left_ = NULL;
    right_ = NULL;
}

BinarySearchTree::BinarySearchTree() {
    root_ = NULL;
}
 BinarySearchTree::~BinarySearchTree()
{
    DeleteTree(root_);
}

void BinarySearchTree::DeleteTree(Node* current)
{
    if ( current == NULL)
    {
        return;
    }

    DeleteTree(current->left_);
    DeleteTree(current->right_);
    delete current;
}
bool BinarySearchTree::Insert(string data) {
    if (root_ == NULL) {
        // Empty tree, make a root
        root_ = new Node(data);
        return true;
    } else {
        // Non-empty tree, find correct position for data
        Node* curr = root_;
        while (curr != NULL) {
            if (data == curr->data_) {
                // Data already in tree, fail to insert
                return false;
            } else if (data < curr->data_) {
                // Lexicographically lesser, find location to the left
                if (curr->left_ == NULL) {
                    curr->left_ = new Node(data);
                    return true;
                } else {
                    curr = curr->left_;
                }
            } else {
                // Lexicographically greater, find location to the right
                if (curr->right_ == NULL) {
                    curr->right_ = new Node(data);
                    return true;
                } else {
                    curr = curr->right_;
                }
            }
        }
    }
    return false;
}
bool BinarySearchTree::Search(string data)
    {
        Node* current = root_;
        while (current != NULL)
        {
            if (data < current->data_) current = current->left_;
            else if (data > current->data_) current = current->right_;
            else return true;
        }
        return false;
    }


void BinarySearchTree::PrintTree(Node* current) {
    if ( current == NULL) return;
    PrintTree(current->left_);
    cout << current->data_ << " ";
    PrintTree(current->right_);
//    // print preorder: node, left, right
    //cout << " PREORDER: ";
//    cout << current->data_ << " ";
//    PrintTree(current->left_);
//    PrintTree(current->right_);
    
    // print posorder: left, right, node
//    cout << " POSTORDER: ";
//    PrintTree(current->left_);
//    PrintTree(current->right_);
//    cout << current->data_ << " ";

}


