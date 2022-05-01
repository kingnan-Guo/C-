/**
 * @file exceptionHandling.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include <exception>
using namespace std;
// exception::what()用于获取字符串标识异常。此函数返回一个空终止的字符序列，该序列可用于标识异常。以下是相同的语法：
struct myException : public exception
{
    const char * what() const throw(){
        return "C++ E";
    }
};


int main()
{
    // throw "sss";
    try
    {
        throw myException();
    }
    catch (myException& e){
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';

    }
    

    
    return 0;
}



