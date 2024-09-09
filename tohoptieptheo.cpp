#include <iostream>
using namespace std;

bool ok = true;

void sinh(int n, int k, int a[]) {
    int i = k;
    while (i > 0 && a[i] == n - k + i) i--;
    if (i <= 0) {
        ok = false;
        return;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int b[k + 1];
        for (int i = 1; i <= k; i++) {
            cin >> b[i];
        }

        int original[k + 1];
        for (int i = 1; i <= k; i++) {
            original[i] = b[i];
        }

        ok = true;
        sinh(n, k, b);

        if (!ok) {
            cout << k << endl;
        } else {
            int cnt = 0;
            for (int i = 1; i <= k; i++) {
                bool is_new = true;
                for (int j = 1; j <= k; j++) {
                    if (original[i] == b[j]) {
                        is_new = false;
                        break;
                    }
                }
                if (is_new) cnt++;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
