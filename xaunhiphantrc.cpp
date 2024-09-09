#include <iostream>
using namespace std;

void sinh(string s) {
    int n = s.length();
    int i;

    for (i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            s[i] = '0';
            break;
        }
    }

    if (i < 0) {
        cout << string(n, '1') << endl;
    } else {
        for (int j = i + 1; j < n; j++) {
            s[j] = '1';
        }
        cout << s << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sinh(s);
    }
}
