#include <iostream>
using namespace std;
int main()
{
    auto f = [](int a,int b)
    {
        return a + b;
    };
    cout << f(1,2);
    int i = 1;
    auto f2 = [i](int a)
    {
        return a + i;
    };
     cout << f2(2);
}
