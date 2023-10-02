#include <iostream>
using namespace std;

// Hàm để hiển thị các số lớn hơn n trong mảng
void displayNumbers(int arr[], int size, int n) {
    cout << "Cac so lon hon " << n << " trong mang la: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int S = 10;
    int a[S] = {12, 5, 27, 8, 15, 9, 30, 18, 7, 22};
    int n;

    cout << "Nhap mot so nguyen n: ";
    cin >> n;

    displayNumbers(a, S, n);

    return 0;
}
