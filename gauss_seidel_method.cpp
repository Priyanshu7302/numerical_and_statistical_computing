#include <iostream>
using namespace std;

int main() {
    // for the system of equations:
    // 27x + 6y - z = 85
    // 6x + 15y + 2z = 72
    // x + y + 54z = 110
    int a1=27, b1=6, c1=-1, d1=85;
    int a2=6, b2=15, c2=2, d2=72;
    int a3=1, b3=1, c3=54, d3=110;
    int n=5;
    
    double x=0,y=0,z=0;
    
    // for n=5 ierations
    for (int i=0;i<n;i++){
        x=(d1 - b1*y - c1*z)/a1;
        y=(d2 - a2*x - c2*z)/b2;
        z=(d3 - a3*x - b3*z)/c3;
    }
    
    cout << "Solution after " << n << " iterations:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z;
    
    return 0;
}