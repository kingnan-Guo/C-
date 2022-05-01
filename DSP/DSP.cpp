/**
 * @file DSP.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<csignal>
#include<unistd.h>

using namespace std;

void signalHandler(int signum){
    cout << "Interrupt signal (" << signum << ") received" << endl;
    // 清理并关闭
    // 终止程序 
    exit(signum);
}

int main()
{
    int i = 1;
    /**
     * @brief Construct a new signal object
     * SIGINT 程序终止(interrupt)信号。
     * signal(registered signal, signal handler)
     * 这个函数接收两个参数：第一个参数是一个整数，代表了信号的编号；第二个参数是一个指向信号处理函数的指针。
     * 
     * 
     * 让我们编写一个简单的 C++ 程序，使用 signal() 函数捕获 SIGINT 信号。不管您想在程序中捕获什么信号，您都必须使用 signal 函数来注册信号，并将其与信号处理程序相关联
     */
    signal(SIGINT, signalHandler);
    while (i++)
    {
        cout << "go to sleep" << endl;
        if(i == 3){
            /**
             * @brief Construct a new raise object
             * raise() 函数
             * 可以使用函数 raise() 生成信号，  
             * 该函数带有一个整数信号编号作为参数，语法如下
             * 
             * int raise (signal sig);
             * 
             * 在这里，sig 是要发送的信号的编号，这些信号包括：SIGINT、SIGABRT、SIGFPE、SIGILL、SIGSEGV、SIGTERM、SIGHUP。以下是我们使用 raise() 函数内部生成信号的实例：
             */
            raise(SIGINT);
        }
        sleep(1);
    }
    
    return 0;
}

