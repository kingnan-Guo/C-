/**
 * @file copyConstructer.cpp
 * @author your name (you@domain.com)
 * @brief 拷构造函数
 * @version 0.1
 * @date 2022-04-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include<iostream>
using namespace std;


/**
 * @brief 
 * 拷贝构造函数是一种特殊的构造函数，
 * 它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象。
 * 拷贝构造函数通常用于
 *    通过使用另一个同类型的对象来初始化新创建的对象。
 *    复制对象把它作为参数传递给函数。
 *    复制对象，并从函数返回这个对象。
 * 
 * 如果在类中没有定义拷贝构造函数，
 * 编译器会自行定义一个。如果类带有指针变量，
 * 并有动态内存分配，则它必须有一个拷贝构造函数。
 * 拷贝构造函数的最常见形式如下：
 * 
 * 
 */
class Line
{
    private:
        int * ptr;
    public:
        int getLength(void);
        Line(int len);//构造函数
        ~Line();// 析构函数
        Line(const Line &obj);//拷贝构造函数
};

Line::Line(int len){
    cout<< " 构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    // * ptr = len;
}

Line::Line(const Line &obj){
    cout<< "调用拷贝构造函数 并为指针ptr 分配内存" << endl;
    ptr = new int;
    * ptr = * obj.ptr; //拷贝值
    cout<< "obj =" << &obj << endl;
}


Line::~Line(void){
    cout << "释放内存" << endl;
    delete ptr;
}

int Line::getLength(void){
    return * ptr;
}

void display(Line obj){
    cout << "line getLength ="<< obj.getLength() << endl;
}

int main()
{
    Line line(10);
    display(line);

    cout<< "============" << endl;
    Line line2 = line;

    display(line2);
    return 0;
}
