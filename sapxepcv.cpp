#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int i, int j, int f[]) {
    return f[i] < f[j];
}

int greedy(int s[], int f[], int n) {
    int cnt = 1; 
    int current = f[0]; 

    for (int i = 1; i < n; i++) {
        if (s[i] >= current) {
            cnt++; 
            current = f[i]; 
        }
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s[n], f[n], index[n];

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> f[i];
        }

        for (int i = 0; i < n; i++) {
            index[i] = i;
        }
        sort(index, index + n, [&](int i, int j) { return f[i] < f[j]; });

        int sortedS[n], sortedF[n];
        for (int i = 0; i < n; i++) {
            sortedS[i] = s[index[i]];
            sortedF[i] = f[index[i]];
        }

        cout << greedy(sortedS, sortedF, n) << endl;
    }
    return 0;
}
