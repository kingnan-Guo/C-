/**
 * @file moudClass.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
 

using namespace std;

template <class T> class Stack
{
    private:
        vector<T> elemets;
    public:
        void push(T const&); //入栈
        void pop(); //出栈
        T top() const; //  返回栈顶 元素
        bool empty() const{
            return elemets.empty();
        }
};

template <class T> void Stack<T>::push(T const& elem){
    elemets.push_back(elem);
}

template <class T> void Stack<T>::pop(){
    if (elemets.empty())
    {
        throw out_of_range("Stack<>::pop() : empty stack");
    }
    elemets.pop_back();
}

template <class T> T Stack<T>::top() const{
    if (elemets.empty())
    {
        throw out_of_range("Stack<>::top() : empty stack");
    }
    return elemets.back();
}


int main()
{
    try
    {
        Stack<int> intStack; //int 类型的栈
        Stack<string> stringStack;// string 类型的栈

        intStack.push(7);
        cout << intStack.top() << endl;

        // 操作 string 类型的 栈
        stringStack.push("hello ");
        cout << stringStack.top() << endl;


        stringStack.pop();
        stringStack.pop();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    
    return 0;
}

