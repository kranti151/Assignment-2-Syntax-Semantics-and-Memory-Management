
#include <iostream>
#include <functional>

std::function<int(int)> makeMultiplier(int n) {
    return [n](int x) { return x * n; }; // capture by value (copy of n)
}

int main() {
    auto times3 = makeMultiplier(3);
    std::cout << times3(10) << std::endl; // 30
    return 0;
}
