#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    float x[n], y[n][n];

    cout << "Enter values of x:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter values of y:\n";
    for (int i = 0; i < n; i++) {
        cin >> y[i][0];
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    float value;
    cout << "Enter the value to interpolate: ";
    cin >> value;

    float h = x[1] - x[0];
    float p = (value - x[0]) / h;

    float result = y[0][0];
    float term = 1;

    for (int i = 1; i < n; i++) {
        term = term * (p - i + 1) / i;
        result += term * y[0][i];
    }

    cout << "Interpolated value = " << result << endl;

    return 0;
}