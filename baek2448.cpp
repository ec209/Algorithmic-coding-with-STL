//
//  baek2448.cpp
//  
//
//  Created by TAEGIKIM on 28/07/2017.
//
//

/*
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

template<typename OutIt>
void sierpinski(int n, OutIt result)
{
    if( n == 0 )
    {
        *result++ = "*";
    }
    else
    {
        list<string> prev;
        sierpinski(n-1, back_inserter(prev));
        
        string sp(1 << (n-1), ' ');
        result = transform(prev.begin(), prev.end(),
                           result,
                           [sp](const string& x) { return sp + x + sp; });
        transform(prev.begin(), prev.end(),
                  result,
                  [sp](const string& x) { return x + " " + x; });
    }
}

int main()
{
    sierpinski(5, ostream_iterator<string>(cout, "\n"));
    return 0;
}
*/

#include <stdio.h>

#define SIZE (1 << 5)
int main()
{
    int x, y, i;
    for (y = SIZE - 1; y >= 0; y--, putchar('\n')) {
        for (i = 0; i < y; i++) putchar(' ');
        for (x = 0; x + y < SIZE; x++)
            printf((x & y) ? "  " : "* ");
    }
    return 0;
}
