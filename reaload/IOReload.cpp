/**
 * @file IOReload.cpp
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
        // Box operator << (const Box& a, const Box& b){
            
        // };
        friend ostream &operator << (ostream &output, const Box& D){
            output << " D.length = " << D.length << " = D.height =  " << D.height 
        };
        friend istream &operator >> (istream &input, const Box& b){
            input >> b.length >> b.height
        };

};

int main()
{
    Box box1(1, 2, 3); 
    
    Box box2(4, 5, 6); 
    Box box3;
    // ================
    // box3 = box1 - box2; 
    // cout<< "box3 - :" << box3.height << endl;
    cout << "Enyer value" << endl;
    cin >> box3;
    cout << "fitst" << box1 << endl;
    cout << "sencond" << box2 << endl;
    cout << "Third" << box3 << endl;

    return 0;
}


