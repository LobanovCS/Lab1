#include <iostream>

bool canGetToN(int current, int N) {

    if (current == N) {
        return true;
    }

    if (current > N) {
        return false;
    }

    return canGetToN(current + 3, N) || canGetToN(current + 5, N);
}

int main() {
    int N;
    std::cin >> N;

    if (canGetToN(1, N)) {
        std::cout << "ћожно получить число " << N << " с использованием операций +3 и +5." << std::endl;
    }
    else {
        std::cout << "Ќельз€ получить число " << N << " с использованием операций +3 и +5." << std::endl;
    }

    return 0;
}