//
//  mushroom.hpp
//  exam1v2
//
//  Created by Christian Joachim on 10/24/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#ifndef mushroom_hpp
#define mushroom_hpp
#include <string>
using namespace std;



class Mushroom{
    
private:
    
    string Mush_name;    //name of mushroom (non scientific)
    string Mush_type;    //name of mushroom (scientific)
    int    Mush_weight; //ounces
    int    Mush_value;  //dollars
    
public:
    Mushroom();
    
    Mushroom(string Mush_type, string Mush_name, int Mush_weight, int Mush_value);
    
    
    //array for the trip
    //int Mushroom_trip[] = 0;
    
    
    
    
    
    
    
    
};

#endif /* mushroom_hpp */
