#include <iostream>
using namespace std;

const int NUM_M = 3;
const int NUM_D = 5;

// Hàm để nhập thông tin về lượng thức ăn của từng con khỉ
void input(double fD[][NUM_D]) {
    for (int m = 0; m < NUM_M; m++) {
        cout << "Nhap luong thuc an cho khi #" << (m + 1) << " trong " << NUM_D << " ngay:\n";
        for (int d = 0; d < NUM_D; d++) {
            do {
                cout << "Ngay " << (d + 1) << ": ";
                cin >> fD[m][d];
                if (fD[m][d] < 0) {
                    cout << "Khong chap nhan gia tri am. Hay nhap lai.\n";
                }
            } while (fD[m][d] < 0);
        }
    }
}

// Hàm để tính và hiển thị báo cáo
void report(double fD[][NUM_D]) {
    double totalF = 0.0;
    double minF = fD[0][0];
    double maxF = fD[0][0];

    // Tính tổng lượng thức ăn của toàn bộ gia đình khỉ
    for (int m = 0; m < NUM_M; m++) {
        for (int d = 0; d < NUM_D; d++) {
            totalF += fD[m][d];

            // Tìm lượng thức ăn ít nhất và nhiều nhất
            if (fD[m][d] < minF) {
                minF = fD[m][d];
            }
            if (fD[m][d] > maxF) {
                maxF = fD[m][d];
            }
        }
    }

    // Tính trung bình lượng thức ăn hàng ngày của gia đình khỉ
    double avgF = totalF / (NUM_M * NUM_D);

    // Hiển thị báo cáo
    cout << "Bao cao ve luong thuc an cho gia dinh khi:\n";
    cout << "Luong thuc an trung binh moi ngay cho ca gia dinh khi: " << avgF << " pounds.\n";
    cout << "Luong thuc an it nhat moi ngay: " << minF << " pounds.\n";
    cout << "Luong thuc an nhieu nhat moi ngay: " << maxF << " pounds.\n";
}

int main() {
    double fD[NUM_M][NUM_D];

    input(fD);
    report(fD);

    return 0;
}
