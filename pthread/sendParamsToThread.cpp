/**
 * @file sendParamsToThread.cpp
 * @author your name (you@domain.com)
 * @brief 向线程传递参数
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

struct threadData
{
    int threadId;
    char * messages;
};

void * printFun(void * threadarg){
    struct threadData * myStructData;
    // 强制改变类型到 struct
    myStructData = (struct threadData *) threadarg;
    cout << "threadId "<< myStructData->threadId << endl;
    cout << "messages "<< myStructData->messages  << endl;
    pthread_exit(NULL);
}


int main()
{
    // int c = 1;
    // say(&c);
    // 定义线程的 id 变量 多个变量使用数组
    pthread_t threads[NUM_THREADS];
    struct threadData td[NUM_THREADS];
    int rc;
    int i;

    for (i = 0; i < NUM_THREADS; i++)
    {
        cout << "main() : creating thread " << i << endl;
        td[i].threadId = i;
        td[i].messages = (char *) "test message";
        int rc = pthread_create(&threads[i], NULL, printFun, (void *) &(td[i]) );
        if (rc)
        {
            cout << "ERROR 无法创建线程 "<< rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
    return 0;
}

