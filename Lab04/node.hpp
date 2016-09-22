//
//  node.hpp
//  Lab03
//
//  Created by Christian Joachim on 9/21/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef node_hpp
#define node_hpp
#include <iostream>
using namespace std;

class node
{
    
public:
    
    node();
    node(string new_data);
    ~node();
    void set_data(string new_data);
    void set_next_ptr(node* new_node);
    string get_data();
    node* get_next_ptr();
    node* next;
    string data;
    
    
    
private:
    
    
    
    
};




#include <stdio.h>

#endif /* node_hpp */
