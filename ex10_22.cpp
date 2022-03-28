#include "head.h"
bool compare(const string &s,string::size_type  sz)
{
    return s.size() > sz;
}
int main()
{
    vector<string> s = {"abc","ss","qdqwdwcdqa","qdw23ddxqws","wdqq","qq","ef2wqeqsddqwqd"};
    auto compare2 = bind(compare,std::placeholders::_1,6);
    int count = count_if(s.begin(),s.end(),compare2);
    cout << count;
    return 0;
}