/**
 * @file typedefStruct.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>
using namespace std;

typedef struct bookStruct
{
    char title[50];
    int book_id;
} bookVariable;


int main()
{
    bookVariable book1 = {
        "kingnan", 1
    };
    bookVariable * bookPoint1, * bookPoint2;
    bookPoint1 = &book1;
    cout << "book1 ==" << book1.title << endl;
    cout << "bookPoint1 ==" << bookPoint1->book_id << endl;
    cout << "bookVariable ==" << book2 << endl;
    // -------------------


    // 现在 还未搞懂 bookVariable * 与 (bookVariable *) 的区别
    // (bookVariable *) bookPoint1s;
    // // cout << "bookVariable =bookPoint1=" << bookPoint1 << endl;
    // cout << "bookVariable=" << bookPoint1s << endl;
    return 0;
}

