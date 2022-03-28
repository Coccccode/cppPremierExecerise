#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> v = {"aaa","A","aa","aa","q","d","aa"};
    std::string val = "aa";
    auto result = std::count(v.cbegin(),v.cend(),val);
    std::cout << result;
}