//
//  node.hpp
//  linkedlist2
//
//  Created by Christian Joachim on 9/22/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef node_hpp
#define node_hpp

#include <stdio.h>
class node
{
    
public:
    
    node();
    node(int new_data);
    ~node();
    void set_data(int new_data);
    void set_next_ptr(node* new_node);
    int get_data();
    node* get_next_ptr();
    node* next;
    
    
    
    
private:
    int data;
    
    
    
};



#endif /* node_hpp */
