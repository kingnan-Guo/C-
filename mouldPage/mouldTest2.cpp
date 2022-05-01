/**
 * @file mouldTest2.cpp
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

template <typename T> 
void Swap(T & a, T  & b){
    T t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 2;
    int b = 3;
    cout << "a = " << a << " b= " << b <<endl;
    Swap(a, b);
    cout << "a = " << a << " b= " << b <<endl; 
    
    return 0;
}
