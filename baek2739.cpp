//
//  baek2739.cpp
//
//
//  Created by TAEGIKIM on 27/07/2017.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int num=2;
    //cin >> num;
    for(int i=1;i<=9;i++)
    {
        printf("%d%s%d%s%d\n", num, " * ", i, " = ", num*i);
    }
}
