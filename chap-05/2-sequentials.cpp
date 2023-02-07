#include <array>
#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, Fruit_Count> fruit_names;
    fruit_names[Apricot]   = "apricot";
    fruit_names[Cherry]    = "cherry";
    fruit_names[Mango]     = "mango";
    fruit_names[Raspberry] = "raspberry";
}

void try_lists()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int> l3;
    std::list<int> l4;

    l1.assign({ 1, 2, 3 });
    l2.assign({ 4, 5, 6 });
    l3.assign({ 7, 8, 9 });
    l4.assign({ 10, 11, 12 });

    l1.merge(l2);
    l1.sort();
    l3.merge(l4);
    l3.sort();
    auto it = l1.begin();
    std::advance(it, l1.size() / 2);
    l1.splice(it, l3);
}

void try_stacks()
{
    std::stack<int, std::vector<int>> stack;
    stack.emplace(0);
    stack.emplace(1);
    stack.emplace(2);

    for (auto elem : stack)
    {
        std::cout << elem << std::endl;
    }
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}