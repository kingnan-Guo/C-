/**
 * @file fileSteam.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];
    // 用写入的模式打开文件
    fstream outFile;
    outFile.open("file.dat", ios::out | ios::in | ios::trunc);
    cout << "enter :" << endl;
    cin.getline(data, 10);
    outFile << data << endl;

    cout << "enter 2:" << endl;
    cin>>data;
    cin.ignore();
    outFile << data << endl;
    outFile.close();


    // 读文件
    ifstream inFile;
    inFile.open("file.dat");
    cout << "read :" << endl;
    inFile >> data;
    cout << "data =" << data << endl;
    inFile >> data;
    cout << "data 2=" << data << endl;

    inFile.close();

    return 0;
}

