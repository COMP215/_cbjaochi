//
//  main.cpp
//  ALG 215 final
//
//  Created by Christian Joachim on 12/10/16.
//  Copyright © 2016 Christian Joachim. All rights reserved.
//

#include <iostream>
using namespace std;

// Returns the length of the longest palindromic subsequence in seq
int Longest_PS(char *Sequence)
{
    //initialization
    int i;
    int j;
    int sub_sequence_len;
    int Seq_len = strlen(Sequence);
    //cout << "Seq_len = " << Seq_len << endl;
   

    
    // the row index of the matrix is the starting letter of the sequence and the
    // column index of the matrix is the ending letter of the sequence
    int matrix[Seq_len][Seq_len];
    
    // initialize matrix
    for (i = 0; i < Seq_len; i++) {
        for (j = 0; j < Seq_len; j++) {
            matrix[i][j] = 0;
        }
    }
    
    //base case: each individual letter in the sequence is a pallindrome of 1
    for (i = 0; i < Seq_len; i++)
        matrix[i][i] = 1;
    
    // number of palindromes for subsequences of length 2 or more
    for (sub_sequence_len = 2; sub_sequence_len <= Seq_len; sub_sequence_len++)
    {
        for (i = 0; i <= Seq_len-sub_sequence_len; i++)
        {
            j = i + sub_sequence_len - 1;
                           if (Sequence[i] == Sequence[j])
                matrix[i][j] = matrix[i+1][j-1] + 2; //starting letter == ending letter
            else
                matrix[i][j] = max(matrix[i][j-1], matrix[i+1][j]); //starting letter != ending letter
        }
    }
    
    return matrix[0][Seq_len-1];
}
int main()
{
    char seq[] = "";
    cout << "Please enter your sequence ";
    cin >> seq;
    int input = strlen(seq);
    cout << "The longest Pallendromic Sequence is " << Longest_PS(seq) << endl;
    getchar();
    return 0;
}
