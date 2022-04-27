/**
 * @file operatorReload.cpp
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

class Box{

    public:
        double length;
        double height;
        double width;
        void setInfo(double len, double hei, double wid){
            length = len;
            height = hei;
            width = wid;
        }
        // 只能传一个参数 不能和 friend 同时使用
        // Box operator+(const Box& b){
        //     Box box;
        //     box.length = this->length + b.length;
        //     cout<< "this->len :" << this->length << endl;
        //     cout<< "b.height :" << b.length << endl;
        //     cout<< "length :" << length << endl;
        //     return box;
        // };
        Box operator- (const Box& c){
            Box box;
            box.height = this->length -2;
            cout<< "c.length :" << c.length << endl;
            cout<< "this->length :" << this->length << endl;
            
            return box;
        };
        friend Box operator+(const Box& a, const Box& b){
            Box box;
            box.length = a.length + b.length;
            // cout<< "this->length  :" << this->length  << endl; 这里传递两个参数 但是不能使用 this
            cout<< "a.length  :" << a.length  << endl;
            cout<< "b.length :" << b.length << endl;
            return box;
        };
        bool operator < (const Box& f){
            // box.height = f > 2;
            cout<< "c.length :" << f.length << endl;
            cout<< "this->length :" << this->length << endl;
            // cout<< "f.height  > 2 :" << (f.height  > 2 ) << endl;
            return f.height  < 2;
        };
};

int main()
{
    Box box1;
    Box box2;
    Box box3;
    box1.setInfo(1, 2, 4);
    box2.setInfo(3, 5, 6);
    box2.setInfo(4, 5, 6);
    box3 = box2 + box1; // box2 为 this  box1 为operator的 参数值 
    cout<< "box3 :" << box3.length << endl;

    // ================
    box3 = box1 - box2; 
    cout<< "box3 - :" << box3.height << endl;
    // ================
    // box3 = box1 < box2;
    cout<< "bool ==  :" << (box1 < box2) << endl;
    return 0;
}

