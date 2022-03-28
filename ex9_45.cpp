#include <iostream>
#include <string>
#include <vector>

std::string addPrefixSuffix(std::string &str,std::string &prefix,std::string &suffix)
{
    str.insert(str.begin(),prefix.begin(),prefix.end());
    str.insert(str.end(),suffix.begin(),suffix.end());
    return str;
}
int main()
{
    std::string str = "LEE";
    std::string pre = "Mrs. ";
    std::string suf = " III";
    str = addPrefixSuffix(str,pre,suf);
    std::cout << str;
    return 0;
}