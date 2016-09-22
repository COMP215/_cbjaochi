//
//  binarysearchtree.hpp
//  binarysearchtree
//
//  Created by Christian Joachim on 9/20/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef binarysearchtree_hpp
#define binarysearchtree_hpp

#include <string>

class Node {
public:
    std::string data_;
    Node* left_;
    Node* right_;
    
public:
    Node(std::string);
};


class BinarySearchTree {
    
    
public:
    Node* root_;
    BinarySearchTree();
    ~BinarySearchTree();
    void DeleteTree(Node* current);
    bool Insert(std::string);
    bool Search(std::string);
    void PrintTree(Node*);
    
};


#endif /* binarysearchtree_hpp */
