/**
 * @file structPoint.cpp
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

struct Books
{
    char title[50];
    int book_id;
};


void printBooks(struct Books * book){
    // 地址 直接 访问到结构体的 元素 使用 ->
    // 为了使用指向该结构的指针访问结构的成员
    cout << "printBooks ==" << book->title << endl;
    // cout << "printBooks ==" << book->title << endl;
}


int main()
{
    Books book1;
    strcpy(book1.title, "kingnan guo");

    printBooks(&book1);
    return 0;
}

