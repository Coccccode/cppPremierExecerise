#include "head.h"
int main()
{
    vector<string> s = {"abc","ss","qdqwdwcdqa","qdw23ddxqws","wdqq","qq","ef2wqeqsddqwqd"};\
    int count = count_if(s.begin(),s.end(),[](const string &a){
        return a.size() > 6;
    });
    cout << count;
    return 0;
}