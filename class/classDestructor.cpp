/**
 * @file classDestructor.cpp
 * @author your name (you@domain.com)
 * @brief 析构函数
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/**
 * @brief 
 * 析构函数（destructor）是成员函数的一种，它的名字与类名相同，
 * 但前面要加~，没有参数和返回值。
 * 
 * 
 * 一个类有且仅有一个析构函数。如果定义类时没写析构函数，则编译器生成默认析构函数。
 * 如果定义了析构函数，则编译器不生成默认析构函数。
 * 
 * 
 * 析构函数在对象消亡时即自动被调用。可以定义析构函数在对象消亡前做善后工作。
 * 例如，对象如果在生存期间用 new 运算符动态分配了内存，
 * 则在各处写 delete 语句以确保程序的每条执行路径都能释放这片内存是比较麻烦的事情。
 * 有了析构函数，只要在析构函数中调用 delete 语句，
 * 就能确保对象运行中用 new 运算符分配的空间在对象消亡时被释放
 * 
 * @return int 
 */


#include<iostream>
using namespace std;

class Line
{
    public:
        void setLength(int len);
        int * getLength(void);
        void setStrings(char str[3]);
        Line(); //构造函数 (要与类同名)
        ~Line(); //析构函数 (要与类同名)
        int * pt;

    private:
        int length;
        int * p;
        char strings[3];
};

void Line::setLength(int len)
{
    // p = &length; //
    // p = new double;
    // p = &length;
    * p = len;
    length = len;
    // pt = &len;

    
    pt =(new int( len));// https://zhuanlan.zhihu.com/p/148299737?from_voters_page=true
};
// void Line::setStrings(char str[3])
// {
//     strings[3] = str[3];
// };



int * Line::getLength(void)
{
    return p;
};

// 构造函数
Line::Line()
{
    p = new int;
    // pt = new int;
    cout << "Object is being created" << endl;
}



// 析构函数 
/**
 * @brief Destroy the Line:: Line object
 *  https://wenku.baidu.com/view/19907bda07a1b0717fd5360cba1aa81144318ff0.html
 */
Line::~Line()
{
    // delete strings;//在析构函数中，使用 delete 时 仅仅调用对象数组中第一个对象的 析构函数
    // delete length; // delete 后要接 表达式必须是指向完整对象类型的指针 所以会报错
    delete[] p;// 在析构函数中，delete[] 会逐个调用析构函数
    // delete p;
    delete[] pt; //现在是 这行会导致  Abort trap: 6  报错


    cout << "~Line 析构函数在对象消亡时即自动被调用  "  <<endl;
}




int main()
{
    Line line1;
    // char str1[3] = "ab";
    // line1.setStrings(str1);
    int var = 20;

    
    line1.setLength(var);
    cout << "line1.getLength() : " << line1.getLength() <<endl;

    cout << "* line1.getLength(): " << * line1.getLength() <<endl;

    cout << "pt: " << line1.pt <<endl;
    cout << "* pt: " << * line1.pt <<endl;
    return 0;
}


// ptr = new int; //在堆中开辟一块int大小的内存空间，并令指针ptr指向它
// 堆中的内存空间在整个程序运行期间一直可用，直到用delete释放它。

// cin.getline(字符数组名,字符个数,结束标志)