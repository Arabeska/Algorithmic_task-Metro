#include <iostream>
#include <algorithm>

using namespace std::literals;

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a < 0 || b < 0 || c < 0 || d < 0) {
        std::cout << -1 << std::endl;
        return 0;
    }

    int var1min = c + a * std::max(0, c - 1);
    int var2min = d + b * std::max(0, d - 1);

    int var1max = c + a * (c + 1);
    int var2max = d + b * (d + 1);

    int min_o = (var1min > var2min) ? var1min : var2min;
    int max_o = (var1max < var2max) ? var1max : var2max;

    if (min_o > max_o) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << min_o << " " << max_o << std::endl;
    }
    return 0;
}
