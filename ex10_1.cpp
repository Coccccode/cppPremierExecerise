#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,0,42,31,42,312,33,42,123,42};
    int val = 42;
    auto result = std::count(v.cbegin(),v.cend(),val);
    std::cout << result;
}