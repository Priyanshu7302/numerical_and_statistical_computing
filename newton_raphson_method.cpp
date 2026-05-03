#include <iostream>
using namespace std;

// for n=5 iterations
// for function f(x) = x^3 - x - 2 = 0
double f(double x) {
    return x*x*x - x - 2;
}

// Derivative f'(x)
double df(double x) {
    return 3*x*x - 1;
}

int main() {
    double x0,x1;
    int n=5;
    cout << "Enter initial guess: ";
    cin >> x0;
    
    for (int i=0;i<n;i++){
        if (df(x0) == 0) {
            cout << "Method fails (derivative is zero)";
            return 0;
        }
        x1 = x0 - (f(x0) / df(x0));
        x0 = x1;
    }
    cout << "Root after " << n <<" iterations : " << x0;
    
    return 0;
}