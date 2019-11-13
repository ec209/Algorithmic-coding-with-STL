//
//  baek4673.cpp
//  
//
//  Created by TAEGIKIM on 13/07/2017.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

void SelfNum();
int arr[10035] = {0,};

int main()
{
    
    
}

void SelfNum()
{
    if(
}

/*
 int num = 10000;
 int temp = 0;
 for(int i=1; i<=10000; i++)
 {
 if(i<10)
 {
 
 }
 else if(i>=10 && i<99)
 {
 
 }
 else if(i>=100 && i<999)
 {
 
 }
 else if(i>=1000 && i<9999)
 }
 */

/*
int *dn(int n)
{
    int array[10000] = {0};
    //static int array = int[n];
    //array = {0};
    for(int j=1;j<=10000;j++)
    {
        int k=0;
        if(j>=1 & j<10)
        {
            k = 2*j;
            array[k] = 1;
        }
        if(j>=10 & j<100)
        {
            k = j;
            k = k+j%10;
            j = j/10;
            k = k+j%10;
            array[k] = 1;
        }
        if(j>=100 & j<1000)
        {
            k = j;
            k = k+j%10;
            j = j/10;
            k = k+j%10;
            j = j/10;
            k = k+j%10;
            array[k] = 1;
        }
        if(j>=1000 & j<10000)
        {
            k = j;
            k = k+j%10;
            j = j/10;
            k = k+j%10;
            j = j/10;
            k = k+j%10;
            j = j/10;
            k = k+j%10;
            if(k<=10000)
            {
                array[k] = 1;
            }
        }
    }
    return array;
}

int main()
{
    int *arr;
    arr = dn(10000);
    for(int i=1; i<=10000;i++)
    {
        if(arr[i] == 0)
            printf("%d \n", i);
    }
    return 0;
}
*/

