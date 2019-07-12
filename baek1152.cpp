//
//  baek1152.cpp
//  
//
//  Created by TAEGIKIM on 13/07/2017.
//
//

#include <stdio.h>
#include <iostream>
#include <cstring>
//#include <string>

using namespace std;

int main()
{
    //string str;
    char str[1000002];
    //fgets(str,1000002,stdin);
    gets(str);

    //cin >> str;
    int size=0;
    //size = str.size();
    size = strlen(str);
    int count=0;
    for(int i=0;i<=size;i++)
    {
        if(str[i] == ' ')
            count++;
        /*if(str[0] == ' ') // 맨앞 블랭크
            count--;
            if(str[size] == ' ') // 맨뒤 블랭크
                count--;
            
        else // 맨앞 char의 경우
            if(str[size] == ' ') // 맨뒤 블랭크
                count--;*/
    }
    if(str[0] == ' ') // 맨앞 블랭크
        count--;
    
    if(str[size-1] == ' ') // 맨뒤 블랭크
        count--;
    cout << count+1;
    
}

// ' 'x' 'y' 'z' '

// 1> 맨앞 띄어쓰기
// 2> 중간 띄어쓰기 2번이상 --> 조건에서 한번만 한다고 가정했으므로 필요 없음
// 3> 마지막 띄어쓰기

/*
if(str[0] == ' ') // 가장처음이 띄어쓰기 인 경우
continue;
else if(str[i] == ' ')
if(str[i+1] == ' ')
continue;
else
count++;
//else if(str[size] == ' ')
//continue;
*/
