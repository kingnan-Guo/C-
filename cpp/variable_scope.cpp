/**
 * @file variable_scope.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <iostream>
using namespace std;
// int i;
int i = 20, a = 30;



#define LENGTH 10;
#define NEWLINE '\n'
int main()
{
    int i, a;
    i = 10;
    a = i * 2;
    cout << a << endl;
    cout << "Hello\tWorld\n\n";
    string greeting = "hellow kingnan";
    cout << greeting;
    cout << NEWLINE;
    cout << LENGTH;
    cout << NEWLINE;

    const int width = 3;
    cout << width;
    cout << NEWLINE;
    short int c;
    short unsigned int j;
    j = 50000;
    c = j;
    cout << c << " " << j; //无符号短整数 50,000 的位模式被解释为有符号短整数 -15,536。
    
    return 0;
}
