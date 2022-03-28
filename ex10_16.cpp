
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void elimdumps(vector<string> &vs)
{
    sort(vs.begin(),vs.end());
    auto end_unique = unique(vs.begin(),vs.end());
    vs.erase(end_unique,vs.end());
}
void biggies(vector<string> &vs,size_t sz)
{
    elimdumps(vs);
    stable_sort(vs.begin(),vs.end(),[](const string &lhs,const string rhs){
        return lhs.size() < rhs.size();
    });
    auto wc = std::find_if(vs.begin(), vs.end(),
                           [sz](string const& s) { return s.size() >= sz; });
     std::for_each(wc, vs.end(), [](const string& s) { std::cout << s << " "; });

}
int main()
{
    std::vector<std::string> v{"1234", "1234", "1234", "hi~",
                               "alan", "alan", "cp"};
    std::cout << "ex10.16: ";
    biggies(v, 3);
    std::cout << std::endl;

    return 0;
}