#include <iostream>
#include <vector>
using namespace std;

void findCommonElements(const vector<int>& A, const vector<int>& B, const vector<int>& C) {
    int i = 0, j = 0, k = 0;
    bool found = false;

    while (i < A.size() && j < B.size() && k < C.size()) {
        if (A[i] == B[j] && B[j] == C[k]) {
            cout << A[i] << " ";  
            i++; j++; k++;        
            found = true;
        }
        else if (A[i] < B[j]) {
            i++;
        }
        else if (B[j] < C[k]) {
            j++;
        }
        else {
            k++;
        }
    }

    if (!found) {
        cout << "NO";
    }
    cout << endl;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> A(n), B(m), C(k);

        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < m; i++) cin >> B[i];
        for (int i = 0; i < k; i++) cin >> C[i];

        findCommonElements(A, B, C);
    }
    
    return 0;
}
