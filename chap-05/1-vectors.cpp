#include <algorithm>
#include <iostream>
#include <string_view>
#include <utility>
#include <vector>

int main()
{
    // std::vector vect(4, 0);
    // for (auto elem : vect)
    // {
    //     std::cout << elem << std::endl;
    // }

    int         array[] = { 0, 1, 2, 3, 4, 5 };
    std::vector vect2(array, array + 6);
    for (auto elem : vect2)
    {
        std::cout << elem << std::endl;
    }

    std::cout << "reverse:" << std::endl;
    std::vector<int> full(array, array + 6);
    for (size_t left = 0, right = full.size() - 1; left < right; ++left, --right)
    {
        std::swap(full[left], full[right]);
    }

    for (auto elem : full)
    {
        std::cout << elem << std::endl;
    }

    std::cout << "duplicate:" << std::endl;
    for (auto it = full.begin(); it != full.end(); it += 2)
    {
        it = full.insert(it, *it);
    }

    for (auto elem : full)
    {
        std::cout << elem << std::endl;
    }

    return 0;
}