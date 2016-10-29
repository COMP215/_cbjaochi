//
//  graph.hpp
//  lab05
//
//  Created by Christian Joachim on 10/3/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef ECGRAPH_H
#define ECGRAPH_H

#include <tuple>
#include <vector>
#include <string>

// it's named this so I could use it with a linked list or binary search tree without conflict -- Emma
class Node3 {
public:
    Node3(std::string);
    
    std::string data_;
    float path_cost_;
};

class Graph {
public:
    Graph();
    bool AddVertex(std::string);
    bool AddEdge(float, std::string, std::string);
    bool IsBipartite();
    Graph Dijkstra();
    
private:
    Node3* FindNode(std::string);
    
    std::vector<Node3*> list_nodes_;
    std::vector<std::tuple<float, Node3*, Node3*>> edge_list_;
};

#endif // ECGRAPH_H