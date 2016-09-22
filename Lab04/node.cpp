//
//  node.cpp
//  Lab03
//
//  Created by Christian Joachim on 9/21/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include "node.hpp"

node::node()
{
    data = "";
    next = NULL;
    
}

node::node(string new_data)
{
    data = new_data;
    next = NULL;
}

void node::set_data(string new_data)
{
    data = new_data;
    next = NULL;
}
void node::set_next_ptr(node* new_node)
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

string node::get_data()
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
