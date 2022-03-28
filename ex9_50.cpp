#include <iostream>
#include <string>
#include <vector>

int sum_for_int(const std::vector<std::string> &v)
{
    int sum = 0;
    for (auto const& s : v) sum += std::stoi(s);
    return sum;
}

float sum_for_float(const std::vector<std::string> &v)
{
    float sum = 0.0;
    for (auto const& s : v) sum += std::stof(s);
    return sum;
}

int main()
{
    std::vector<std::string> v = {"1", "2", "3", "4.5"};
    std::cout << sum_for_int(v) << std::endl;
    std::cout << sum_for_float(v) << std::endl;

    return 0;
}