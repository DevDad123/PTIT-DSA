#include<iostream>
using namespace std;

void twintower(int n, char A, char B, char C) {
    if (n == 1) {
        cout << A << " -> " << C << endl;
        return;
    }
    twintower(n - 1, A, C, B);

    cout << A << " -> " << C << endl;

    twintower(n - 1, B, A, C);
}

int main() {
    int n;
    cin >> n;

    twintower(n, 'A', 'B', 'C');
    return 0;
}
