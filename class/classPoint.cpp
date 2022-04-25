/**
 * @file classPoint.cpp
 * @author your name (you@domain.com)
 * @brief 指向类的指针
 * @version 0.1
 * @date 2022-04-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;


class Box
{
    private:
        double length;
        double heigth;
    public:
        Box(double l =2.0, double h =2.0){
            cout<< "constructor called" << endl;
            heigth = h;
            length = l;
        };
        double Volume(){
            return heigth * length;
        };
        int compare(Box box){
            return this->Volume() < box.Volume(); //判断 是否大于
        };

};


int main()
{
    Box box1(1, 2);
    Box box2(3, 5);
    Box * ptrBox;

    ptrBox = &box1;



    cout << "ptrBox = " << ptrBox  <<endl;
    cout << " ptrBox 指针调用函数 使用 箭头 '->'  == " << ptrBox->Volume() <<endl;

}
