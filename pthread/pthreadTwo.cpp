/**
 * @file pthreadTwo.cpp
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
    // srand((unsigned)time(NULL));
    // int a = rand()%10;
    // sleep(a);
    // const num = * args;
    // 强制类型转换 
    int index = *( (int *) args );
    cout << "index =  " <<  index  << endl;
    // cout << "hello "  << endl;
    // return args;
    // return 0;
    pthread_exit(NULL);
};

int main()
{
    // int c = 1;
    // say(&c);
    // 定义线程的 id 变量 多个变量使用数组
    pthread_t tids[NUM_THREADS];
    int indexArr[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++)
    {
        cout << "creat pthread "<< i << endl;
        sleep(1);
        indexArr[i] = i;//保存 i 的值
        // 传入的时候必须强制转换成void * 类型; 即 无类型指针
        int rc = pthread_create(&tids[i], NULL, say, (void *) &(indexArr[i]) );
        if (rc)
        {
            cout << "ERROR 无法创建线程 "<< rc << endl;
            exit(-1);
        }
        
    }
    pthread_exit(NULL);
    return 0;
}

