/**
 * @file staticMember.cpp
 * @author your name (you@domain.com)
 * @brief 静态成员
 * 
 * 
 * 我们可以使用 static 关键字来把类成员定义为静态的。
 * 当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，
 * 静态成员都只有一个副本。
 * 
 * 
 * 
 * 
 * 
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
    static int objectCount;
    private:
        double length;
        double heigth;
    public:
        Box(double l =2.0, double h =2.0){
            cout<< "constructor called" << endl;
            heigth = h;
            length = l;
            objectCount++;
        };
        double Volume(){
            return heigth * length;
        };
        int compare(Box box){
            return this->Volume() < box.Volume(); //判断 是否大于
        };

        // --------
        // 得到this 的地址
        Box * get_address(){
            return this;
        };
        static int getObjectCount(){
            return objectCount;
        };

};

// 初始化 Box 的静态成员
int Box::objectCount = 0;

int main()
{
    Box box1(1, 2);
    Box box2(3, 5);


    cout << " = " << Box::getObjectCount()  <<endl;

    // cout << "Total objects: " << Box::objectCount << endl; 一直报错不知如何解决

    return 0;
}
