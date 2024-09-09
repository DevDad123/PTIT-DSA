#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printCombinations(const vector<int>& A, int n, int k) {
    vector<int> combination(k); 
    for (int i = 0; i < k; ++i) {
        combination[i] = i;
    }
    
    while (true) {
        for (int i = 0; i < k; ++i) {
            cout << A[combination[i]] << " ";
        }
        cout << endl;
        int i = k - 1;
        while (i >= 0 && combination[i] == n - k + i) {
            --i;
        }
        if (i < 0) {
            break;
        }
        ++combination[i];
        for (int j = i + 1; j < k; ++j) {
            combination[j] = combination[j - 1] + 1;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    
    printCombinations(A, A.size(), k);
    
    return 0;
}
