#include<iostream>
using namespace std;

int main() {
    float temp[3][7], sum, avg;

    
    for (int c = 0; c < 3; c++) {
        cout << "Enter Temperature data for City " << c + 1 << ":\n";
        for (int m = 0; m < 7; m++) {
            cout << "  Day " << m + 1 << ": ";
            cin >> temp[c][m];
        }
    }


    cout << "\nTEMPERATURE DATA (in mm)\n";
    cout << "=================================================================================\n";
    cout << "City\\Days\tDay1\tDay2\tDay3\tDay4\tDay5\tDay6\tDay7\tAverage\n";
    cout << "---------------------------------------------------------------------------------\n";

    for (int c = 0; c < 3; c++) {
        sum = 0;
        cout << "City " << c + 1 << "\t\t";
        for (int m = 0; m < 7; m++) {
            cout << temp[c][m] << "\t";
            sum += temp[c][m];
        }
        avg = sum / 4;
        cout << avg << "\n";
    }

    cout << "=================================================================================\n";
    return 0;
}

