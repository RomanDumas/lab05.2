#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main() {
    double x_p, x_k, dx, eps, Pi, s=0;
    Pi = 4.0 * atan(1.0);
    int n = 0;
    cout << "x_p must be higher 1" << endl;
    cout << "x_p = ";cin >> x_p;
    cout << "x_k = ";cin >> x_k;
    cout << "dx = ";cin >> dx;
    cout << "eps = ";cin >> eps;
    cout << "----------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "  |"
        << setw(14) << "atan x" << "  |"
        << setw(9) << "S" << "   |"
        << setw(6) << "n" << "|"
        << endl;
    cout << "----------------------------------------------" << endl;

    double x = x_p;
    if (x > 1) {
        while (x <= x_k) {
            S(x, eps, n, s);
            double res = (Pi / 2) + s;
            cout << "|" << setw(7) << setprecision(2) << x << "|"
                << setw(15) << setprecision(5) << atan(res) << " |"
                << setw(12) << setprecision(5) << s << "|"
                << setw(5) << n << " |"
                << endl;
            x += dx;
        }
    }
    else
        cout << "ERROR" << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}

void S(const double x, const double eps, int& n, double& s) {
    n = 0;
    double a = -1.0 / x;
    s = a;

    do {
        n++;
        A(x, n, a);
        s += a;
    } while (abs(a) > eps);
}
void A(const double x, const int n, double& a) {
    double R = -((2 * (n * 1.0) - 1.0)) / ((pow(x, 2) * (2 * (n * 1.0) + 1.0)));
    a *= R;
    
}