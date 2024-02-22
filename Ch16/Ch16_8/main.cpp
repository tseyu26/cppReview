#include <iostream>
#include <string_view>
#include <vector>

int main()
{
    using namespace std::literals;
    std::vector words{ "peter"sv, "likes"sv, "frozen"sv, "yogurt"sv }; // std::vector<std::string_view>

    for (auto word : words) // We normally pass string_view by value, so we'll use auto here
        std::cout << word << ' ';

    std::cout << '\n';

    return 0;
}