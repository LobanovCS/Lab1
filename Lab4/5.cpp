#include <iostream>

void hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        std::cout << "1 " << from << " " << to << std::endl;
        return;
    }

    hanoi(n - 1, from, aux, to);
    std::cout << n << " " << from << " " << to << std::endl;
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    std::cin >> n;

    hanoi(n, 1, 3, 2);

    return 0;
}