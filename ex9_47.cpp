#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::string numbers("0123456789");
    std::string str("a1b2c3d7R4E6");
    std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    for(std::string:: size_type pos = 0;(pos = str.find_first_of(numbers,pos)) != std::string::npos;pos++)
    {
        std::cout << str[pos] << std::endl;
        
    }
    for (std::string::size_type pos = 0;
         (pos = str.find_first_of(alphabet, pos)) != std::string::npos; ++pos)
    {
        std::cout << str[pos] << " ";
    }    
}