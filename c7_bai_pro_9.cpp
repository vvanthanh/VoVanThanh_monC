#include <iostream>
using namespace std;

const int SO_NV = 7;

int main() {
    long maSo[SO_NV] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int gioLamViec[SO_NV];
    double luongGio[SO_NV];
    double luongThang[SO_NV];

    for (int i = 0; i < SO_NV; i++) {
        cout << "Nhap gio lam viec cua nhan vien #" << maSo[i] << ": ";
        cin >> gioLamViec[i];

        while (gioLamViec[i] < 0) {
            cout << "Gio lam viec khong the am. Nhap gio lam viec cua nhan vien #" << maSo[i] << ": ";
            cin >> gioLamViec[i];
        }

        cout << "Nhap luong theo gio cua nhan vien #" << maSo[i] << ": ";
        cin >> luongGio[i];

        while (luongGio[i] < 15.0) {
            cout << "Luong theo gio khong the it hon 15.00. Nhap luong theo gio cua nhan vien #" << maSo[i] << ": ";
            cin >> luongGio[i];
        }

        luongThang[i] = gioLamViec[i] * luongGio[i];
    }

    cout << "\nMa nhan vien \t Luong gop" << endl;
    for (int i = 0; i < SO_NV; i++) {
        cout << maSo[i] << "\t\t $" << luongThang[i] << endl;
    }

    return 0;
}
