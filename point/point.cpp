/**
 * @file point.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

const int MAX = 3;


int main()
{
    int var = 20;
    int * p;
    p = &var;
    cout << p << endl;
    cout << * p << endl;


    int arr[MAX] = {10, 11, 29};
    int * ptr;
    ptr = arr;
    for (int i = 0; i < MAX; i++)
    {
        cout << ptr << endl;
        cout << * (ptr + i) << endl;
    }



    // -----------------------------

    int arr1[MAX] = {10, 11, 29};
    int * ptr1;
    ptr1 = arr1;
    while (ptr1 <= &arr1[MAX - 1])
    {
        /* code */
        cout << * ptr1 << endl;
        ptr1 ++;
    }
    
    // -------------------------


    // char  name[3] = {'kin', 'cc', 'guo'};
    char  name[3] = {"kin", "nan", "guo"};
    // {"king", "nan", "guo"};
    for (int a = 0; a < 3; a++)
    {
        cout << name[a] << endl;
    }
    
    

    return 0;
}


