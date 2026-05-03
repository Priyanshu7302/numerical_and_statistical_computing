#include <iostream>
#include <iomanip>
using namespace std;

#define N 3  // Number of variables (can be changed)

// Function to perform Gaussian Elimination
void gaussElimination(double a[N][N+1]) {
    // Forward Elimination
    for (int i = 0; i < N; i++) {
        // Make the diagonal element 1 (pivot normalization)
        double pivot = a[i][i];
        if (pivot == 0) {
            cout << "Mathematical Error: Division by zero." << endl;
            return;
        }

        for (int j = 0; j <= N; j++) {
            a[i][j] /= pivot;
        }

        // Make other elements in current column 0
        for (int k = 0; k < N; k++) {
            if (k != i) {
                double factor = a[k][i];
                for (int j = 0; j <= N; j++) {
                    a[k][j] -= factor * a[i][j];
                }
            }
        }
    }

    // Display solution
    cout << "\nSolution:\n";
    for (int i = 0; i < N; i++) {
        cout << "x" << i + 1 << " = " << fixed << setprecision(4) << a[i][N] << endl;
    }
}

int main() {
    double a[N][N+1];

    cout << "Enter coefficients of augmented matrix (" << N << "x" << N+1 << "):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N; j++) {
            cin >> a[i][j];
        }
    }

    gaussElimination(a);

    return 0;
}