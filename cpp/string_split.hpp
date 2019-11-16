// .hpp 

#include <string>
#include <sstream>
#include <vector>

template<
    class CharT,
    class Traits,
    class Allocator
>
std::vector<std::basic_string<CharT, Traits, Allocator>> str_split(std::basic_string<CharT, Traits, Allocator> const& s, CharT delimeter)
{
    std::vector<std::basic_string<CharT, Traits, Allocator>> v;
    std::basic_stringstream<CharT, Traits, Allocator> ss(s);
    std::basic_string<CharT, Traits, Allocator> item;
    while (std::getline(ss, item, delimeter))
        v.push_back(item);
    return v;
}