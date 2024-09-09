#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canBeSorted(vector<int> &A) {
    int n = A.size();
    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());

    // Kiểm tra nếu mảng đầu vào đã được sắp xếp
    if (A == sortedA) {
        return true;
    }

    // Xử lý các phép đảo ngược để sắp xếp mảng
    vector<int> original = A;
    int mid = n / 2;
    
    // Đảo ngược từng mảng con chứa phần tử giữa
    for (int length = 1; length <= n; ++length) {
        if (length % 2 == 1) {  // Chỉ xem xét các mảng con có số phần tử lẻ
            for (int start = 0; start <= n - length; ++start) {
                int end = start + length - 1;
                int midIdx = (start + end) / 2;
                if (midIdx == mid) {
                    reverse(A.begin() + start, A.begin() + end + 1);
                }
            }
        }
    }

    return A == sortedA;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        
        if (canBeSorted(A)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
