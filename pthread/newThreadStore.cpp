/**
 * @file newThreadStore.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include<iostream>
#include <thread>
// std::thread thread_object
// #include<time.h>
// #include<csignal>
// #include<unistd.h>

using namespace std;



void foo(int Z){
    for (int i = 0; i < Z; i++)
    {
        cout << "线程使用函数指针作为可调用参数\n";
    }
    
}


class thread_obj
{

    public:
        void operator()(int x){
            for (int i = 0; i < x; i++)
            {
                cout << "线程使用函数对象作为可调用参数\n"; 
            }
            
        };
};




int main()
{

    
    std::thread th1(foo, 3);
    thread th2(thread_obj(), 3);

    // 自定义Lambda 表达式
    auto f = [](int x) {
        for (int i = 0; i < x; i++)
        {
            cout << "线程使用 lambda 表达式作为可调用参数\n";
        }
        
    }

    thread th3(f, 3);
    // 等待线程完成
    // 等待线程th1 完成
    th1.join();


    // 等待线程 t2 完成
    th2.join();
 
    // 等待线程 t3 完成
    th3.join();

    return 0;
}


