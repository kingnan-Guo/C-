/**
 * @file pthread.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include<pthread.h>
#include<time.h>
#include<csignal>
#include<unistd.h>

using namespace std;
#define NUM_THREADS 5
void * say(void * args){
    // int arr[10];
    srand((unsigned)time(NULL));
    int a = rand()%10;
    sleep(a);
    // const num = * args;
    // 强制类型转换 
    int index = *( (int *) args );
    cout << "index =  " <<  index  << " sleep ="<< a << endl;
    // cout << "hello "  << endl;
    // return args;
    return 0;
};

int main()
{
    // int c = 1;
    // say(&c);
    // 定义线程的 id 变量 多个变量使用数组
    pthread_t tids[NUM_THREADS];
    char arr[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++)
    {
        // arr[i] = *(new int(i));
        sleep(1);
        int ret = pthread_create(&tids[i], NULL, say, (new int(i)));
    }
    pthread_exit(NULL);
    return 0;
}

