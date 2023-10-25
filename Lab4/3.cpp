#include <iostream>



int main() {
    const int MAX_N = 10;
    int N;
    char labyrinth[MAX_N][MAX_N];
    int row, col;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> labyrinth[i][j];
        }
    }

    std::cin >> row >> col;

    int countEmptyCells(int r, int c) {
        if (r < 0 || r >= N || c < 0 || c >= N || labyrinth[r][c] == '*') {
            return 0;
        }

        labyrinth[r][c] = '*';

        int count = 1;
        count += countEmptyCells(r - 1, c);
        count += countEmptyCells(r + 1, c);
        count += countEmptyCells(r, c - 1);
        count += countEmptyCells(r, c + 1);

        return count;
    }

    int roomSize = countEmptyCells(row, col);
    std::cout << roomSize << std::endl;

    return 0;
}
