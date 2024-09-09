#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;

int maxDifference(vector<int>& A, int K) {
    int N = A.size();
    sort(A.begin(), A.end());
    
    int totalSum = accumulate(A.begin(), A.end(), 0);
    
    int sumSmallestK = accumulate(A.begin(), A.begin() + K, 0);
    
    int sumLargestK = accumulate(A.end() - K, A.end(), 0);
    
    int maxDiff = max(abs(totalSum - 2 * sumSmallestK), abs(totalSum - 2 * sumLargestK));
    
    return maxDiff;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        cout << maxDifference(A, K) << endl;
    }
    
    return 0;
}
