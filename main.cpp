//
//  main.cpp
//  lab07
//
//  Created by Christian Joachim on 11/1/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include <iostream>
#include <array>
using namespace std;

void Merge_Sort(int array[])
{
    cout << "elements of List are " << endl;
     cout << "[";
    for (short i = 0; i < 10; i++){
        cout << array[i] << ",";
    }
    cout << "]";
    cout << endl <<endl;
        
}

void Bubble_Sort(int array[])
{
    int current,next,swap;
    current = array[0];
    next = array[1];
    int array2[10];
    for (short i = 0; i < 9; i++)
    {
        for (short i = 0; i < 10; i++)
        {
            
            if (current >= next)
            {
                swap = current;
                current = next;
                array2[i] = current;
            }
        }
    }
    cout << "elements of List are " << endl;
    cout << "[";
    for (short i = 0; i < 10; i++){
        cout << array2[i] << ",";
    }
    cout << "]";
    cout << endl <<endl;
}


int main(int argc, const char * argv[]) {
    
    int List_1[10] = {32,17,6,8,7,14,30,90,22,3};
    int List_2[10] = {5,12,55,11,0,45,6,7,5,90};
    //Merge_Sort(List_1);
    //Merge_Sort(List_2);
    Bubble_Sort(List_2);
    
       return 0;
}
