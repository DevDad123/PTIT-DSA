#include<iostream>
using namespace std;

const int MOD = 1000000007;

long long modExp(long long a, long long b, int mod) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return result;
}

int main() {
    while (true) {
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        cout << modExp(a, b, MOD) << endl;
    }
    return 0;
}
