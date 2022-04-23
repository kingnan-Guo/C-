/**
 * @file struct.cpp
 * @author your name (you@domain.com)
 * @brief 结构体
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

void printBooks(struct Books book){
    cout << "printBooks ==" << book.title << endl;
}

int main()
{
    Books book1;
    strcpy(book1.title, "kingnan guo");
    cout << "book1 ==" << book1.title << endl;


    printBooks(book1);
    return 0;

}

