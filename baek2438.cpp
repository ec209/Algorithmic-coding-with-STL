//
//  baek2438.cpp
//  
//
//  Created by TAEGIKIM on 29/07/2017.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    //num = 3;
    for(int i=1; i<=num; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}
