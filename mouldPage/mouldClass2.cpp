/**
 * @file mouldClass2.cpp
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
class OP
{

    public:
        T peocess(T v){
            return v * v;
        };
};



int main()
{
    OP<int> intOp;
    OP<double> doubleOp;
    cout << "intOp = " << intOp.peocess(3) <<endl;
    cout << "doubleOp = " << doubleOp.peocess(3.3) <<endl;
    
    return 0;
}
