//
//  baek2577.cpp
//  
//
//  Created by TAEGIKIM on 30/07/2017.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

void countnum(int);

int main()
{
    int a,c,b, num;
    //cin >> a >> b >> c;
    a = 150;
    b=266;
    c=427;
    num = a * b * c;
    countnum(num); // count the num and print
    return 0;
}

void countnum(int num)
{
    int size=0;
    int num1 = num;
    if(num1 > 10)
    {
        for(num1 ;num1 >= 10;)
            
        {
            num1 = num1/10;
            size++;
        }
    }
    
    int arr[10] ={0};
    while(size>=0)
    {
        switch(num % 10)
        {
            case 0:
                arr[0]++;
                break;
            case 1:
                arr[1]++;
                break;
            case 2:
                arr[2]++;
                break;
            case 3:
                arr[3]++;
                break;
            case 4:
                arr[4]++;
                break;
            case 5:
                arr[5]++;
                break;
            case 6:
                arr[6]++;
                break;
            case 7:
                arr[7]++;
                break;
            case 8:
                arr[8]++;
                break;
            case 9:
                arr[9]++;
                break;
                
        }
        num = num/10;
        size--;
    }
    
    for(int i=0; i<10; i++)
        cout << arr[i] << endl;
}
