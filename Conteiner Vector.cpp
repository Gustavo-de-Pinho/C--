#include <vector>
#include <cstdlib>
#include <iostream>

int main()
{
    std::vector<int> v;
    std::srand(2); // Seed
    for (auto i = 0; i < 10; ++i) {
        v.push_back(std::rand() % 100);
    }
    for (auto x: v){
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}