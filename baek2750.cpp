//
//  baek2750.cpp
//
//
//  Created by TAEGIKIM on 29/07/2017.
//
//

#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

void sort(int, int*);
void print(int, int[]);

int main()
{
    ifstream in;
    in.open("input_2750.txt"); //file input
    
    if(in.fail())//error checks
    {
        cerr << "Input file opening failed.\n";
        exit(1);
    }

    
    
    int num;
    in >> num;
    int *arr = new int[num];// dynamic
    for(int i=0; i<num; i++)
    {
        in >> arr[i];
    }
    sort(num, arr);
    print(num, arr);
    
    return 0;
}

void sort(int num, int* arr)
{
    for(int j=1; j<num; j++)
    {
        int key = arr[j];
        int l = j;
        while(l>0 && (key < arr[l-1]))
        {
            int tmp = arr[l-1]; //여기서 헷갈려서 몇번 오답 나옴
            arr[l-1] = arr[l];
            arr[l] = tmp;
            l--;
        }
    }
}

void print(int num, int arr[])
{
    for(int k=0; k<num; k++)
    {
        cout << arr[k] << endl;
    }
}
