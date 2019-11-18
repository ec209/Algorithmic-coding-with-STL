//
//  baek8958.cpp
//
//
//  Created by TAEGIKIM on 30/07/2017.
//
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int qualify(string);

int main()
{
    ifstream in;
    in.open("input_8958.txt"); //file input
    
    if(in.fail())//error checks
    {
        cerr << "Input file opening failed.\n";
        exit(1);
    }
    int numTest;
    in >> numTest;
    for(int i=0; i<numTest; i++)
    {
        string ox;
        ox.empty();
        in >> ox;
        cout << qualify(ox) << endl;
    }
    return 0;
}

int qualify(string ox)
{
    int score=0;
    int tend=0;
    for(int i=0; i<ox.length();i++)
    {
        
        if(ox[i] == 'O')
        {
            tend++;
        }
        else if(ox[i] == 'X')
        {
            tend = 0;
        }
        score = score + tend;
    }
    return score;
    score = 0;
}
