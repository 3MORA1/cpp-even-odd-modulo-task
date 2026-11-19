#include <iostream>
using namespace std;

int main() {
    unsigned long long n, m, x;
    cin >> n >> m >> x;
    if (m % 2 == 0) { //even
        if ((m + x) % n == 0)
            cout << n << endl;
        else cout << (m + x) % n << endl;
    }
    else { //odd
        m++;
        if ((m + x) % n == 0)
            cout << n << endl;
        else cout << (m + x) % n << endl;
    }
}
