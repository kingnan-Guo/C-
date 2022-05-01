/**
 * @file define.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;
#define DEBUG
#define MIN(a, b) (a<b ? a:b)
#define MKSTR( x ) #x
#define CONCAT( x, y )  x ## y



int main()
{
    int i, j;
    i =100;
    j = 1000;
    cout << "min " << MIN(i, j) << endl;




    #ifdef DEBUG
        cout << "trace inside main fun" << endl;
    #endif

    #if 1
        cout << MKSTR(HELLO C++) << endl;
    #endif

    // #ifdef DEBUG
    //     cerr <<"Trace: Coming out of main function" << endl;
    // #endif



    // #ifdef SOMETHING
    //     namespace space1{}
    // #endif

    int xy = 100;

    cout << CONCAT(x, y) << endl;


    cout << __LINE__ << endl;
    cout << __FILE__ << endl;
    cout << __DATE__ << endl;
    cout << __TIME__ << endl;
    return 0;
}

