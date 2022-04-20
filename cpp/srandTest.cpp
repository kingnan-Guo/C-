/**
 * @file srandTest.cpp
 * @author your name (you@domain.com)
 * @brief 随机数
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
    int count, sr;
    // 设置 种子
    sr = (unsigned)time (NULL);// ???为什么要这样写 ？？
    // sr = 22;
    cout << "sr = " << sr << endl;
    srand(sr ); 

    count = rand();
    cout << "srand count = " << count << endl;
    return 0;
}
