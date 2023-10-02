#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_TYPES = 5;
    string names[NUM_TYPES] = {"mild", "medi", "sweet", "hot", "zest"};
    int sales[NUM_TYPES];
    int total = 0;
    int highest = 0;
    int lowest = INT_MAX;
    string highestS, lowestS;

    for (int i = 0; i < NUM_TYPES; i++) {
        do {
            cout << "Nhap so luong hu " << names[i] << " da ban: ";
            cin >> sales[i];
            if (sales[i] < 0) {
                cout << "Khong chap nhan gia tri am. Vui long nhap lai.\n";
            }
        } while (sales[i] < 0);

        total += sales[i];

        if (sales[i] > highest) {
            highest = sales[i];
            highestS = names[i];
        }
        if (sales[i] < lowest) {
            lowest = sales[i];
            lowestS = names[i];
        }
    }

    cout << "\nBao cao doanh so ban salsa:\n";
    for (int i = 0; i < NUM_TYPES; i++) {
        cout << names[i] << ": " << sales[i] << " hu" << endl;
    }
    cout << "Tong doanh so ban: " << total << " hu" << endl;
    cout << "Salsa ban nhieu nhat: " << highestS << " (" << highest << " hu)" << endl;
    cout << "Salsa ban it nhat: " << lowestS << " (" << lowest << " hu)" << endl;

    return 0;
}
