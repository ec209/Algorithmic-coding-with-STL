//
//  baek1008.cpp
//  
//
//  Created by TAEGIKIM on 27/07/2017.
//
//


//
//  baek1008.cpp
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
    double a,b, result; //자릿수가 4를 넘어가므로 float이 아닌 double로 해야 turnacation prob이 일어나지 않고 정답을 출력한다
    cin >> a >> b;
    result = a/b;
    printf("%.9lf\n", result);
}

/*
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float a,b, result;
    cin >> a >> b;
    result = a/b;
    printf("%f", result);
}
*/
