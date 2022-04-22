/**
 * @file sendPointToFunction.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX = 3;

void getSeconds(unsigned long * dat){
    * dat = time(NULL); // 获取当前时间戳

}


int * getRandom(){
    static int r[10];
    // int r[10]; //使用 int r[10] 不带static 会报错
    srand((unsigned)time(NULL) );
    for (int i = 0; i < 10; i++)
    {
        r[i] = rand();
    }
    
    return r;
}

int main()
{
    unsigned long sec = 10;
    cout << &sec << endl;
    getSeconds(& sec);

    cout << sec << endl;
    

    // --------
    int * p;
    p = getRandom();
    cout << p << endl;


   for ( int i = 0; i < 10; i++ )
   {
       cout << *(p + i) << endl;
   }
    return 0;
}