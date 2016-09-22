//
//  linklist.cpp
//  lab03v2
//
//  Created by Christian Joachim on 9/22/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include "linklist.hpp"
//
//  linklist.cpp
//  linkedlist2
//
//  Created by Christian Joachim on 9/22/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include "linklist.hpp"
#include <iostream>
using namespace std;

LinkList::LinkList()
{
    head = NULL;
    tail = NULL;
    
    
}

LinkList::LinkList(int input)
{
    head = new node(input);
    tail   = head;
    
    
    
}

LinkList::~LinkList()
{
    // cout << "DEBUG: LIst before delete: ";
    // print_list();
    for (node* current = head; current != NULL; current = head)
    {
        head = current->get_next_ptr();
        delete current;
        //cout << "DEBUG: LIst after delete: ";
        //print_list();
    }
    
    
}

void LinkList::add_node(int new_data)
{
    tail->set_next_ptr(new node(new_data));
    tail = tail->get_next_ptr();
    
}

void LinkList::print_list()
{
    
    for (node* current = head; current != NULL; current = current->get_next_ptr())
    {
        
        cout << current->get_data() << " --> ";
    }
    cout << "NULL" << endl;
    
}


