#include "head.h"
int main()
{
    list<int> num = {1,2,3,4,5,6,7,8,9};
    list<int> copy_1,copy_2,copy_3;
    copy(num.cbegin(),num.cend(),front_inserter(copy_1));
    copy(num.cbegin(),num.cend(),back_inserter(copy_2));
    copy(num.cbegin(),num.cend(),inserter(copy_3,copy_3.begin()));
    //print
    for_each(num.begin(),num.end(),[](const int &num)
    {
        cout << num << " ";
    });
    cout << endl;

    //print(copy_1);
    for_each(copy_1.begin(),copy_1.end(),[](const int &num)
    {
        cout << num << " ";
    });
    cout << endl;
    //print(copy_2);
    for_each(copy_2.begin(),copy_2.end(),[](const int &num)
    {
        cout << num << " ";
    });
    cout << endl;
    //print(copy_3);
    for_each(copy_3.begin(),copy_3.end(),[](const int &num)
    {
        cout << num << " ";
    });
    //cout << copy_1 <<endl << copy_2 << endl <<copy_3 ;
    return 0;
}