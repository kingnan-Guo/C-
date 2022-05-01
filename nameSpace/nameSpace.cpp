/**
 * @file nameSpace.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include<iostream>
using namespace std;

// 第一个命名空间
namespace first_space
{
    void func(){
        cout << "inside first_space" << endl;
    }
} // namespace first_space

namespace second_space
{
    void func(){
        cout << "inside second_space" << endl;
    }
} // namespace first_space

namespace third_space
{
    void func(){
        cout << "inside third_space" << endl;
    }
} // namespace first_space

// 您可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。这个指令会告诉编译器，后续的代码将使用指定的命名空间中的名称。
using namespace third_space;

namespace namespace_name1
{
    namespace namespace_name2{
        void func(){
            cout << "namespace_name1 namespace_name2" << endl;
        }
    }
} // namespace name

int main()
{
    // 调用第一个命名空间的函数
    first_space::func();


    second_space::func();

    func();


    namespace_name1::namespace_name2::func();
    return 0;
}


