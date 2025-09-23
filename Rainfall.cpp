#include<iostream>
using namespace std;

int main() {
    float rainfall[3][4], sum, avg;

    
    for (int c = 0; c < 3; c++) {
        cout << "Enter Temperature data for City (in mm) " << c + 1 << ":\n";
        for (int m = 0; m < 4; m++) {
            cout << "  Month " << m + 1 << ": ";
            cin >> rainfall[c][m];
        }
    }

    cout << "\nRAINFALL DATA (in mm)\n";
    cout << "===============================================================================\n";
    cout << "City\\Month\tMonth1\tMonth2\tMonth3\tMonth4\n";
    cout << "------------------------------------------------------------------------------\n";

    for (int c = 0; c < 3; c++) {
        sum = 0;
        cout << "City " << c + 1 << "\t\t";
        for (int m= 0; m< 4; m++) {
            cout << rainfall[c][m] << "\t";
            sum += rainfall[c][m];
        }
        avg = sum / 4;
        cout << avg << "\t\n";
    }

    cout << "==============================================================================\n";
    return 0;
}
