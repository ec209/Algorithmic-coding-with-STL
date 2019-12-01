//
//  baek10828.cpp
//
//
//  Created by TAEGIKIM on 24/07/2017.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>


using namespace std;

class MyStack
{
public:
    MyStack()
    {
        //array[10000];
    }
    ~MyStack() {}
    void push(int a)
    {
        array[topz] = a;
        topz++;
        
    }
    
    void pop()
    {
        if(topz<=0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << array[topz-1] << endl;
            topz--;
        }
        
    }
    
    void size()
    {
        cout << topz << endl;
    }
    
    void empty()
    {
        if(topz<=0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    
    void top()
    {
        if(topz<=0)
            cout << -1 << endl;
        else
            cout << array[topz-1] << endl;
    }
private:
    int array[10000];
    int topz = 0;
};


int main()
{
    /*ifstream in;
    in.open("input_10828.txt"); //file input
    
    if(in.fail())//error checks
    {
        cerr << "Input file opening failed.\n";
        exit(1);
    }*/
    MyStack stack;
    int TestNum;
    cin >> TestNum;
    for(int i=0;i<TestNum; i++)
    {
        char casez[BUFSIZ];
        cin >> casez;
        if(strcmp(casez,"push") == 0) // strcmp(casez,"push")라고 쓰면 내용물 자체를 검사, 반면 ==은 주소를 검사하므로, 둘의 내용이 달라질 수 있다
        {
            int num;
            cin >> num;
            stack.push(num);
        }
        else if(strcmp(casez,"pop") == 0)
        {
            stack.pop();
        }
        else if(strcmp(casez,"size") == 0)
        {
            stack.size();
            
        }
        else if(strcmp(casez,"empty") == 0)
        {
            stack.empty();
        }
        else if(strcmp(casez,"top") == 0)
        {
            stack.top();
            
        }
    }
    return 0;
}

/*switch(casez) // switch문은 string을 받아들일 수 없으므로 if else 문으로 수정
 {
 case 'push':
 int num;
 cin >> num;
 stack.push(num);
 break;
 case 'pop':
 stack.pop();
 break;
 case 'size':
 stack.size();
 break;
 
 case 'empty':
 stack.empty();
 break;
 
 case 'top':
 stack.top();
 break;
 }*/
