/**
 * @file functionReload.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;


/**
 * @brief 
 * 在同一个作用域内，可以声明几个功能类似的同名函数，
 * 但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同
 * 
 */
class printData
{
    public:
        void print(int i){
            cout<< "int :" << i  << endl;
        }
        void print(double f){
            cout<< "浮点 double :" << f  << endl;
        }
        void print(char c[]){
            cout<< "char :" << c << endl;
        }
};




int main()
{

    printData pd;
    pd.print(5);
    pd.print(5.8);
    char c[] = "miao";
    pd.print(c);
    return 0;
}
