// lab 1
//  main.cpp
//  comp 215
//
//  Created by Christian Joachim on 8/30/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//
#include <fstream>
#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <time.h>
//#include <std.h>
#include <stdio.h>


static const string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 const int MAX_WORDS = 10000;
//static const int NUM_ITERATIONS = 3; //number of times to run the code

void generateAString(int how_many, int lenofstr);
void  ReadFileANDSort(int numberofWords, int stringLength);



char getARadomChar() //chars
{
    return alphabet[rand() % alphabet.length()];
}


void generateAString(int how_many, int lenofstr)
{
    ofstream outfile("outfile.txt");
    //string wordList[MAX_WORDS];
    //int how_many, lenofstr;
    //cout << "how many strings would you like:";
   // cin >> how_many;
    //cout << "what would you like your string length to be?";
    //cin >> lenofstr;
    
    for (int j = 0; j < how_many; j++)
    {
        string word = "";
        for (int i = 0; i < lenofstr; i++)
        {
            word = word + getARadomChar();  // get rid of loop so it makes like 100 characters
            //sort(word,word + how_many);
            
        }
        //wordList[j] = word;
        //cout << "Unsorted word list: " <<  endl;
        cout<< word << endl;
        
        outfile <<word<<endl;
        //outfile << "Sorted words are: " << endl;
        //sort(wordList, wordList + how_many);
        //for (int i = 0; i < how_many; i++)
        //{
        //cout << wordList[j] << endl;
        //}
    }
    cout << endl;
    /*
    sort(wordList, wordList + how_many);
    // print sorted word list to text file
    for (int i = 0; i < how_many; i++)
    {
        cout << "Word " << i + 1 << ") " << wordList[i] << endl;
        outfile << "Word " << i + 1 << ") " << wordList[i] << endl;
        
    }

    outfile.close();
   // return how_many;
    */
    outfile.close();
        
}

void ReadFileANDSort(int numberofWords, int stringLength )
{   string wordList[MAX_WORDS];
    ifstream infile;
    infile.open("outfile.txt");
    for (short i = 0; i< numberofWords; i++)
    {
        infile >> wordList[i];
    }
    
    sort(wordList, wordList + numberofWords);
    
    for (short i = 0; i < numberofWords; i++)
    {
        cout << "Sorted Word " << i + 1 << ") ";
        cout << wordList[i] << endl;
        //outfile << "Word " << i + 1 << ") " << wordList[i] << endl;
        
    }
    cout << endl;
    cout << "done" <<endl;
    cout << endl;
    
    
    
    
    
    
}




int main()
{
    int how_many, lenofstr;
    cout << "how many strings would you like:";
    cin >> how_many;
    cout << "what would you like your string length to be?";
    cin >> lenofstr;
    cout << "Unsorted list: " << endl;
    srand (time(NULL));
   // for ( int i = 0; i < NUM_ITERATIONS; i++)
    //{
        generateAString ( how_many,lenofstr);
        ReadFileANDSort (how_many,lenofstr);
        //cout<< endl;
        
        //sleep(10);
        
    //}
    
    //return 0;
}
    

