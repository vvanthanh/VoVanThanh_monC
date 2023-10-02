#include <iostream>
#include <fstream>
using namespace std;

const int MTHS = 3;
const int DAYS = 30;

void readWthrData(char wthrData[][DAYS], ifstream& input) {
    for (int m = 0; m < MTHS; m++) {
        for (int d = 0; d < DAYS; d++) {
            input >> wthrData[m][d];
        }
    }
}

void countWthrDays(char wthrData[], int& r, int& c, int& s) {
    r = 0;
    c = 0;
    s = 0;
    for (int d = 0; d < DAYS; d++) {
        if (wthrData[d] == 'R') {
            r++;
        } else if (wthrData[d] == 'C') {
            c++;
        } else if (wthrData[d] == 'S') {
            s++;
        }
    }
}

int main() {
    char wthrData[MTHS][DAYS];
    ifstream input("RainOrShine.txt");

    if (!input) {
        cout << "Khong the mo duoc tap tin RainOrShine.txt.\n";
        return 1;
    }

    readWthrData(wthrData, input);
    input.close();

    int rTotal = 0;
    int cTotal = 0;
    int sTotal = 0;
    int mostRainyMth = 0;
    int mostRainyDys = 0;

    for (int m = 0; m < MTHS; m++) {
        int r, c, s;
        countWthrDays(wthrData[m], r, c, s);

        cout << "Thong ke thang " << (m + 6) << ":\n";
        cout << "So ngay mua: " << r << endl;
        cout << "So ngay may: " << c << endl;
        cout << "So ngay nang: " << s << endl;
        cout << endl;

        rTotal += r;
        cTotal += c;
        sTotal += s;

        if (r > mostRainyDys) {
            mostRainyDys = r;
            mostRainyMth = m;
        }
    }

    cout << "Thong ke cho ca ba thang:\n";
    cout << "Tong so ngay mua: " << rTotal << endl;
    cout << "Tong so ngay may: " << cTotal << endl;
    cout << "Tong so ngay nang: " << sTotal << endl;
    cout << "Thang co nhieu ngay mua nhat: Thang " << (mostRainyMth + 6) << endl;

    return 0;
}
