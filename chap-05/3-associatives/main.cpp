#include "keys.h"

#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    // std::set<ComparableDog> dogs;

    // ComparableDog medor { "medor", "labrador" };
    // dogs.emplace(medor);
    // ComparableDog mika { "mika", "corgi" };
    // dogs.emplace(mika);
    // ComparableDog medor2 = medor;
    // dogs.emplace(medor2);
    // cout << dogs.size() << endl;

    std::unordered_set<HashableDog> dogs;
    HashableDog                     medor { "medor", "labrador" };
    dogs.emplace(medor);
}