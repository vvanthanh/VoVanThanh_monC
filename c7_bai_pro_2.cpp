#include <iostream>
using namespace std;

int main() {
    const int NUM_MONTHS = 12;
    double rainfall[NUM_MONTHS];
    
    // Nhập lượng mưa cho từng tháng
    for (int i = 0; i < NUM_MONTHS; i++) {
        do {
            cout << "Nhap luong mua cho thang " << (i + 1) << " (khong duoc am): ";
            cin >> rainfall[i];
            if (rainfall[i] < 0) {
                cout << "Luong mua khong duoc am. Vui long nhap lai.\n";
            }
        } while (rainfall[i] < 0);
    }

    // Tính tổng lượng mưa trong năm
    double totalRainfall = 0.0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        totalRainfall += rainfall[i];
    }

    // Tính lượng mưa trung bình hàng tháng
    double averageRainfall = totalRainfall / NUM_MONTHS;

    // Tìm tháng có lượng mưa cao nhất và thấp nhất
    double maxRain = rainfall[0];
    double minRain = rainfall[0];
    int maxMonth = 0;
    int minMonth = 0;

    for (int i = 1; i < NUM_MONTHS; i++) {
        if (rainfall[i] > maxRain) {
            maxRain = rainfall[i];
            maxMonth = i;
        }
        if (rainfall[i] < minRain) {
            minRain = rainfall[i];
            minMonth = i;
        }
    }

    // Hiển thị kết quả
    cout << "Tong luong mua trong nam la: " << totalRainfall << " in." << endl;
    cout << "Luong mua trung binh thang la: " << averageRainfall << " in." << endl;
    cout << "Luong mua cao nhat la thang " << (maxMonth + 1) << " voi " << maxRain << " in" << endl;
    cout << "Luong mua thap nhat la thang " << (minMonth + 1) << " voi " << minRain << " in" << endl;

    return 0;
}
