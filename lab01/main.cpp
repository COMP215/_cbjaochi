//
//  main.cpp
//  lab01
//
//  Created by Christian Joachim on 9/21/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

//
//  main.cpp
//  comp215test
//
//  Created by Christian Joachim on 9/5/16.
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

static const int NUM_ITERATIONS = 3; //number of times to run the code
static const int MAX_WORDS = 100;    //maximum words in my string array

char getRandomChar() //generates a random character from the alphabet
{
    return alphabet[rand() % alphabet.length()]; //0-37
}
//-----------------------------------------------
void printTime(ofstream& outfile)
{
    // current date/time based on current system
    time_t now = time(0);
    // convert now to string form
    char* dt = ctime(&now); cout << "The local date and time is: " << dt << endl;
    outfile << "The local date and time is: " << dt << endl;
    
}
//----------------------------------------------

//Prints the list of words from the words array to the screen and to the txt file
void printWordList(ofstream& outfile, int numberOfStrings, string wordList[])
{
    for (int i = 0; i < numberOfStrings; i++)
    {
        cout << "Word " << i + 1 << ") " << wordList[i] << endl;
        outfile << "Word " << i + 1 << ") " << wordList[i] << endl;
        
    }
    
}


void generateAndSortStrings(ofstream& outfile,int numberOfStrings, int stringLength)
{
    //int totalWords = numberOfStrings;
    //ofstream outfile;
    //outfile.open("sortstring.txt");
    
    string wordList[MAX_WORDS];  //creating an array of list
    
    for (int j = 0; j < numberOfStrings; j++)
    {
        string word = "";
        for (int i = 0; i < stringLength; i++)
        {
            word += getRandomChar();  // get random of loop so it makes like 100 characters
            
        }
        wordList[j] = word;
        
    }
    
    printTime(outfile);
    
    cout << endl;
    
    // print unsorted word list to the screen and text file
    cout << "Unsorted word list: " <<  endl;
    outfile << "Unsorted word list: " << endl;
    for (int i = 0; i < numberOfStrings; i++)
    {
        cout << "Word " << i + 1 << ") " << wordList[i] << endl;
        outfile << "Word " << i + 1 << ") " << wordList[i] << endl;
        
    }
    
    
    // sort wordList array
    sort(wordList, wordList + numberOfStrings);
    cout << endl;
    outfile << endl;
    
    
    // print unsorted word list to the screen and text file
    cout << "Sorted word list: " << endl;
    outfile << "Sorted word list: " << endl;
    
    for (int i = 0; i < numberOfStrings; i++)
    {
        cout << "Word " << i + 1 << ") " << wordList[i] << endl;
        outfile << "Word " << i + 1 << ") " << wordList[i] << endl;
        
    }
    
    cout << "=========================================" << endl;
    outfile << "========================================="<< endl;
    //outfile.close();
}

int main()
{
    ofstream outfile;
    outfile.open("sortstring.txt");
    srand (time(NULL));
    
    //string wordList[] = {};
    int numberOfStrings, stringLength;
    cout << "How many words would you like? ";
    cin >> numberOfStrings;
    cout << "What should the length of each word be? ";
    cin >> stringLength;
    cout << endl;
    
    cout << "-------------------------------------------" << endl;
    
    for ( int i = 0; i < NUM_ITERATIONS; i++)
    {
        generateAndSortStrings(outfile, numberOfStrings,stringLength);
        sleep(10);
        
    }
    
    //generateAndSortStrings(numberOfStrings,stringLength);
    
    cout << endl;
    outfile.close();
    return 0;
}

