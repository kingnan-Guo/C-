/**
 * @file class.cpp
 * @author your name (you@domain.com)
 * @brief 类 & 对象
 * @version 0.1
 * @date 2022-04-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
class className
{
    // private:
    //     /* data */
    public:
        double length;
        int number;
        // 声明函数
        double get(void);
        void set(double len, int num);
        void setNumber(int num){
            number = num;
        }

};


// 定义get 函数
double className:: get(void){
    return length * number;
}


void className::set(double len, int num){
    length = len;
    number = num;
}

// className::className(/* args */)
// {
// }

// className::~className()
// {
// }


int main(int argc, char const *argv[])
{
    // 声明 
    className box1;

    box1.length = 10;
    box1.number = 2;
    cout << "box1 = " << box1.get() <<endl;
 
    // ----------
    className box2;
    box2.set(60, 7);
    cout << "box2 = " << box2.get() <<endl;
    /* code */
    return 0;
}
