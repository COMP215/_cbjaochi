//
//  linklist.hpp
//  linkedlist2
//
//  Created by Christian Joachim on 9/22/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef linklist_hpp
#define linklist_hpp
#include "node.hpp"
#include <stdio.h>
using namespace std;

class LinkList
{
    
    
public:
    LinkList();
    LinkList(int input);
    ~LinkList();
    void add_node(int new_data);
    void print_list();
    
    
    
    
    
private:
    node* head;
    node* tail;
    
    
};


#endif /* linklist_hpp */
