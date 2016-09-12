//
//  main.cpp
//  lab_02
//
//  Created by Christian Joachim on 9/10/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//
/*
 Input: A number from user input that sets the number of characters in your string of randomly generated words.
 
 Generate a random string of words.
 Split the string into individual words that are stored in an array.
 Print the array of words before sorting.
 Sort the array of words.
 Print the array of words after sorting.
 
 Output: Random strings sorted in alphbetical order from the given character amount.
 
 Program Description:
 This program algL1 is a program that generates ranom strings using a random generator. Once the string are
 generated they are written to a text file and then sorted by alphabetical order.
 
 */

//declarations
#include <iostream>
using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <stdio.h>

// Constants with correct notation

static const string kAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  // alphabet used in random generator
static const long kMaxWords   = 10000;                                  // maximum amount of words
static const int  KIterations = 3;                                      // number of times to run the code

//----------------------------------------------------------------------------------

// Function Prototypes

void GenerateAString(int total_words, int word_length);                   // Prototype for string generator
void  ReadFileANDSort(int words_generated, int length_OfWordsGenerated); // Prototype for read a file
                                                                        // and sort
//-----------------------------------------------------------------------------------------------------

// Function definitions

char GetARadomChar() // This function randomly generates letters and numbers from the string kAlphabet.
{
    return kAlphabet[rand() % kAlphabet.length()];       // range of 27 charactes.
}

//------------------------------------------------------------------------------------------------------

void GenerateAString(int total_words, int word_length)   // This function generates stings from the number
                                                         // of strings and chracters given by the user input.
{
    ofstream outfile("outfile02.txt");                  // creates the stream outfile02 (text file)
                                                        // for data to be outputed.
    
    for (int j = 0; j < total_words; j++)               // loop for the number of words.
    {
        string word = "";
        for (int i = 0; i < word_length; i++)           // loop for the amount of character in a word.
        {
            word = word + GetARadomChar();              // Building the randomly generated string.
            
        }
        cout<< word << endl;
        
        outfile <<word<<endl;                           // outputing the words to a file.
        
    }
    cout << endl;
    outfile.close();
    
}

//-----------------------------------------------------------------------------------------------------
                                                    // This function reads in my outfile and
                                                   // sorts the strings in lexiconical order
void ReadFileANDSort(int words_generated, int length_OfWordsGenerated )

{   string word_list[kMaxWords];                  // word_list and array of words generated to be sorted.
    ifstream infile;
    infile.open("outfile02.txt");                // reading in outfile
    for (short i = 0; i< words_generated; i++)
    {
        infile >> word_list[i];
    }
    
    sort(word_list, word_list + words_generated);  // sorting all the generated words in lexiconical order
    
    for (short i = 0; i < words_generated; i++)    // loop to print out the sorted word_list
    {
        cout << "Sorted Word " << i + 1 << ") ";
        cout << word_list[i] << endl;
        //outfile << "Word " << i + 1 << ") " << wordList[i] << endl;
        
    }
    cout << endl;
    cout << "done" <<endl;
    cout << endl;
    
}
//-----------------------------------------------------------------------------------------------------

int main()
{
    int total_words, word_length;               // user input variables
    
    cout << "how many strings would you like:";                //-------------
    cin >> total_words;                                        //             |
    cout << "what would you like your string length to be?";   // user input  |
    cin >> word_length;                                        //             |
    cout << "Unsorted list: " << endl;                         //-------------
    srand (time(NULL));                                        //seed for random genreator
     for ( int i = 0; i < KIterations; i++)
    {
    GenerateAString ( total_words,word_length); // function calls
    ReadFileANDSort (total_words,word_length);
    //cout<< endl;
    
    sleep(10);                                                // sleeps for 10 secconds between
                                                             // program runs(can change to 5min)
    
    }

    return 0;
}
