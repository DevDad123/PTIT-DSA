#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMinSum(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    long long num1 = 0, num2 = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + arr[i];
        } else {
            num2 = num2 * 10 + arr[i];
        }
    }
    cout << num1 + num2 << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        findMinSum(A);
    }
    return 0;
}
