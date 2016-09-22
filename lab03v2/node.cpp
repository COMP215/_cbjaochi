//
//  node.cpp
//  linkedlist2
//
//  Created by Christian Joachim on 9/22/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include "node.hpp"
node::node()
{
    data = 0;
    next = NULL;
    //tail = NULL;
}

node::node(int new_data)
{
    data = new_data;
    next = NULL;
    //tail = NULL;
}

void node::set_data(int new_data)
{
    data = new_data;
    next = NULL;
}
void node::set_next_ptr(node *new_node)
{
    if ( new_node == NULL)
    {
        next = NULL;
    }
    else
    {
        next = new_node;
    }
    
    
}

int node::get_data()
{
    return  data;
}
node::~node()
{
    
}
node* node::get_next_ptr()
{
    return next;
}
