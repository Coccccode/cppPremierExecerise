#include "head.h"
bool check_size(const string &s,string::size_type sz)
{
    return s.size() < sz;
}
int main()
{
    string str = "edwihodj3r43984oohrf3009";
    vector<int> lo = {1,3,5,6,3,23,1,13,2312,3,4,312,1,2,1,3,4,45,67,7,99,0};
    auto it = find_if(lo.begin(),lo.end(),bind(check_size,str,std::placeholders::_1));
    cout << *it;
    return 0;
}