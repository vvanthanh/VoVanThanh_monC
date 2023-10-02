#include <iostream>
using namespace std;

const int SIZE = 3;

bool isMagicSquare(int sq[][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += sq[0][i];
        sum += sq[i][0];
    }

    for (int i = 0; i < SIZE; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < SIZE; j++) {
            rowSum += sq[i][j];
            colSum += sq[j][i];
        }
        if (rowSum != sum || colSum != sum) {
            return false;
        }
    }

    int diagSum1 = 0;
    int diagSum2 = 0;
    for (int i = 0; i < SIZE; i++) {
        diagSum1 += sq[i][i];
        diagSum2 += sq[i][SIZE - i - 1];
    }
    return diagSum1 == sum && diagSum2 == sum;
}

int main() {
    int sq[SIZE][SIZE];

    cout << "Nhap cac phan tu cua ma tran " << SIZE << "x" << SIZE << ":\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> sq[i][j];
        }
    }

    if (isMagicSquare(sq)) {
        cout << "Day la mot Lo Shu Magic Square.\n";
    } else {
        cout << "Day khong phai la mot Lo Shu Magic Square.\n";
    }

    return 0;
}
