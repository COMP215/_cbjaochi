//
//  main.cpp
//  binarysearchtree
//
//  Created by Christian Joachim on 9/20/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include <iostream>
#include "binarysearchtree.hpp"
#include "node.hpp"
#include "linkedlist.hpp"
#include <fstream>

int main(int argc, const char * argv[]) {
    
    BinarySearchTree* people_names = new BinarySearchTree();
    
      std::ifstream infile;
      infile.open("foowords.txt");
      while (!infile.eof()){
          std::string names_;
          getline(infile,names_);
          people_names->Insert(names_);
       
     }
   
//      std::string name = "fertility";
//         if (people_names->Search(name)) std::cout << name << " found " << std::endl;
//    else std::cout << name << " not found" << std::endl;
////
//
//    
//    people_names->DeleteTree(people_names->root_);
//===================================================================================
    
    LinkList* list1 = new LinkList();
    //----------------------------------------
    //open from file
    std::ifstream infile2;
    infile2.open("foowords.txt");
    std::string names_;
    while (!infile.eof()){
        getline(infile2, names_);
        list1->Insert(names_);
        
    }
 
    
    delete list1;

    return 0;
}