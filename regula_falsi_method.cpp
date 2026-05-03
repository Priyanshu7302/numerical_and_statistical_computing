#include <iostream>
using namespace std;

// for n=5 iterations
// for function f(x) = x^3 - x - 2 = 0
double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a,b,c;
    int n=5;
    cout << "Enter interval (a,b):" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    
    if (f(a)*f(b)>=0){
        cout << "Invalid interval!" << endl;
    }
    else{
        for (int i=0;i<n;i++){
            c = (a*f(b) - b*f(a)) / (f(b)-f(a));
            if (f(c)==0){
                break;
            }
            else if (f(c)*f(a)<0){
                b=c;
            }
            else{
                a=c;
            }
        }
        cout << "Root after " << n <<" iterations : " << c;
    }
      
    return 0;
}