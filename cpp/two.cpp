#include <iostream>
using namespace std;
// int i;
extern int i;
extern int a;

int main()
{
    int i, a;
    i = 10;
    a = i * 2;
    cout << a << endl;
    return 0;
}


