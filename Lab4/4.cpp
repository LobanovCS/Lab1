#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int N;
    std::cout << "������� N: ";
    std::cin >> N;

    if (N < 0 || N > 30) {
        std::cout << "N ������ ���� � ��������� �� 0 �� 30." << std::endl;
        return 1;
    }

    int result = fibonacci(N);
    std::cout << "N-� ����� ���������: " << result << std::endl;

    return 0;
}
