/**
 * @file freadFun.cpp
 * @author your name (you@domain.com)
 * @brief 友元 函数
 * 类的友元函数是定义在类外部，
 * 但有权访问类的所有私有（private）成员和保护（protected）成员。
 * 尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
 * @version 0.1
 * @date 2022-04-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;


class Box
{
    private:
        int width;
    public:
        friend void printWidth(Box box);
        void setWith(int wid);
};

// 类的成员函数
void Box::setWith(int wid){
    width = wid;
}


// printWidth 不是任何类的成员函数
void printWidth(Box box){
    cout << "width " << box.width << endl;
}



int main()
{
    Box box;
    box.setWith(11);
    printWidth(box);
    return 0;
}
