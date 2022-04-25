/**
 * @file thisClass.cpp
 * @author your name (you@domain.com)
 * @brief 
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

        // --------
        // 得到this 的地址
        Box * get_address(){
            return this;
        }

};


int main()
{
    Box box1(1, 2);
    Box box2(3, 5);


    cout << "box1.Volume() = " << box1.Volume()  <<endl;
    cout << " ==" << box1.compare(box2)  <<endl;


    // =========

    Box * p = box1.get_address();
    cout << "p = " << p  <<endl;
    return 0;
}
