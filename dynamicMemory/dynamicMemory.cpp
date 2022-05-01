/**
 * @file dynamicMemory.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;

void pvalue(){
    double * pvalue = NULL;
    pvalue = new double;
    * pvalue = 6262.55;
    cout << "pvalue " << pvalue << endl;
    cout << "pvalue " << * pvalue << endl;
    delete pvalue;
}

void dynamicMemory(void) {
    char * pvalue = NULL;
    pvalue = new char[20];
    cout << "pvalue " << pvalue << endl;
    delete[] pvalue;
}

// 二维数组
void array(){
    int m = 4;
    int n = 3;
    int ** array;
    array = new int *[m];
    for (int i = 0; i < m; i++)
    {
        array[i] = new int [n];
    }


    for (int i = 0; i < m; i++)
    {
        delete [] array[i];

    }
    delete [] array;
    

    
}


class Box
{
    private:
        
    public:
        Box(){
            cout << "调用构造函数！" <<endl; 
        };
        ~Box(){
            cout << "调用析构函数！" <<endl; 
        };
};
        

void boxArr(){
    Box * myBoxArray;
    myBoxArray = new Box[4];
    delete [] myBoxArray; //删除数组的时候会调用 析构函数
}


// 链表
struct node
{
    int data;
    int num;
    struct node * next;
};

void linkedList(){
    struct node * header, * p, * q;
    header = NULL;   
    p = NULL;
    // -------
    q = new node;
    q->next = NULL;
    q->num = 1;
    int a = -1;
    cout << "enter number : ";
    cin >> a;
    q->data = a;
    header = q;
    while (a != 0)
    {
        p = q;
        q = new node;
        q->next = NULL;
        p->next = q;
        q->num = p->num + 1;
        cout<<"请输入第"<<q->num<<"个数字:";
        cin >> a;
        q->data = a;
    }
    q = header;
    p = NULL;

    while (q->data != 0)
    {
        printf("num =%d data = %d \n", q->num, q->data);
        q = q->next;
    }
    
    q = header;
    p = q;
    while (q->next != NULL)
    {
        p = q->next;
        delete [] q;
        q = p;
    }
    

    

}



int main()
{
    pvalue();
    dynamicMemory();
    boxArr();
    linkedList();

    return 0;
}
