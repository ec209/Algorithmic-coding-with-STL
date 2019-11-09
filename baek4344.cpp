//
//  baek4344.cpp
//  
//
//  Created by TAEGIKIM on 28/07/2017.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

double Mean(int, int[]);

void percent(double, int, int[]);

int main()
{
    int numTestCase;
    cin >> numTestCase;
    
    for(int i=0; i<numTestCase; i++)
    {
        int TestCase=0, students[1000] = {0,};
        double mean = 0.0;
        cin >> TestCase;
        for(int j=0; j<TestCase; j++)
        {
            cin >> students[j];
        }
        mean = Mean(TestCase, students);
        percent(mean, TestCase, students);
    }
}

double Mean(int TestCase, int students[])
{
    double sum = 0.0;
    for(int k=0; k<TestCase; k++)
        sum += students[k];
    return sum/(double)TestCase;
};

void percent(double mean, int TestCase, int students[])
{
    int count = 0;
    for(int j=0; j<TestCase; j++)
    {
        if((double)students[j]>=mean)
            count++;
        
    }
    printf("%.3lf%c\n", (double)count/(double)TestCase,'%');
};
