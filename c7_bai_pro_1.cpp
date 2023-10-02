#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Kích thước của mảng
    int values[SIZE]; // Mảng chứa các giá trị
    int largest, smallest; // Biến chứa giá trị lớn nhất và nhỏ nhất

    // Nhập giá trị từ người dùng vào mảng
    cout << "Nhap 10 gia tri:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Gia tri #" << (i + 1) << ": ";
        cin >> values[i];
    }

    // Gán giá trị đầu tiên là giá trị lớn nhất và nhỏ nhất ban đầu
    largest = smallest = values[0];

    // Tìm giá trị lớn nhất và nhỏ nhất trong mảng
    for (int i = 1; i < SIZE; i++) {
        if (values[i] > largest) {
            largest = values[i];
        } else if (values[i] < smallest) {
            smallest = values[i];
        }
    }

    // Hiển thị giá trị lớn nhất và nhỏ nhất
    cout << "Gia tri lon nhat: " << largest << endl;
    cout << "Gia tri nho nhat: " << smallest << endl;

    return 0;
}
