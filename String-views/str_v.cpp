#include <iostream>
#include <string>
#include <string_view>

std::string getName()
{
    std::string s{"Alex"};
    return s;
}

int main()
{
    // std::string_view name{getName()};
    std::cout << std::string_view{getName()} << '\n'; // undefined behavior

    return 0;
}