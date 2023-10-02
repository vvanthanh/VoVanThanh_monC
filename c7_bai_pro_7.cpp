#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    string filename;
    cout << "Nhap ten tap tin: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile) {
        cout << "Khong the mo duoc tap tin." << endl;
        return 1;
    }

    vector<double> numbers;
    double number;
    double lowest, highest, total = 0;
    
    while (inputFile >> number) {
        numbers.push_back(number);
        total += number;

        if (numbers.size() == 1) {
            lowest = highest = number;
        } else {
            if (number < lowest) {
                lowest = number;
            }
            if (number > highest) {
                highest = number;
            }
        }
    }

    inputFile.close();

    if (numbers.empty()) {
        cout << "Tap tin rong." << endl;
    } else {
        double average = total / numbers.size();
        cout << "So nho nhat: " << lowest << endl;
        cout << "So lon nhat: " << highest << endl;
        cout << "Tong: " << total << endl;
        cout << "Trung binh: " << average << endl;
    }

    return 0;
}
