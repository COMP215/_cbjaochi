//
//  linkedlist.hpp
//  Lab03
//
//  Created by Christian Joachim on 9/21/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef linkedlist_hpp
#define linkedlist_hpp

#include <stdio.h>
#include <iostream>
#include "node.hpp"

using namespace std;

class LinkList
{
    
    
public:
    LinkList();
    LinkList(string input);
    ~LinkList();
    bool Insert(string new_data);
    bool Search(string new_data);
    void print_list();
    
    
    
    
    
private:
    node* head;
    node* tail;
    
    
};








#endif /* linkedlist_hpp */
