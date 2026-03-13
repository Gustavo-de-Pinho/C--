#include <array>
#include <cstdlib>
#include <iostream>

int main()
{
    std::array<int, 10> v;
    std::srand(2); // Seed
    for (auto i = 0; i < v.size(); ++i) {
        v[i] = std::rand() % 100;
    }
    for (auto x: v){
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}