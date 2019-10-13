//
//  baek1924.cpp
//  
//
//  Created by TAEGIKIM on 27/07/2017.
//
//

#include <stdio.h>
#include <iostream>
//= 0 Sunday

using namespace std;
int day_of_week(int y, int m, int d)

{
    
    static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
    
    y-=m < 3;
    
    return (y +y/4-y/100+y/400+t[m-1]+d) %7;
    
}




int main()

{
    
    int y,m,d;
    
    char *day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
        
        
        
        
        //printf(" Enter date [yyyy mm dd]: ");
    y = 2007; //m = 1; d = 3;
    cin >> m >> d;
        //scanf("%d %d", &m, &d);
              
    printf("%s\n", day[day_of_week(y,m,d)]);
              
}
