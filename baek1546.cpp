//
//  baek1546.cpp
//  
//
//  Created by TAEGIKIM on 28/07/2017.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

int maxx(int, int[]);

void mmean(int, int, int[]);

int main()
{
    int testnum, num[1000]={0,}, max;
    cin >> testnum;
    for(int i=0;i<testnum;i++)
    {
        cin >> num[i];
    }
    max = maxx(testnum, num);
    mmean(testnum, max, num);
}

int maxx(int testnum, int num[])
{
    int max=0;
    for(int j=0;j<testnum;j++)
    {
        if(num[j]>max)
            max = num[j];
    }
    return max;
};

void mmean(int testnum, int max, int num[])
{
    double mean=0.0; // 여기 고치고 맞음 
    for(int k=0;k<testnum;k++)
    {
        mean += ((double)num[k]/(double)max*100.0);
    }
    printf("%.2lf", mean/(double)testnum);
};


/*
 for(i=1;i<=testnum;i++)
{
    cin >> num;
    max = num;
    cin >> num;
    if(num>max)
        max = num;
        
        }
*/
