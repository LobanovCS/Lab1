#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    int result = gcd(num1, num2);

    std::cout << "Наибольший общий делитель: " << result << std::endl;

    return 0;
}
