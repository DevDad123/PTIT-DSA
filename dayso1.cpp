#include <iostream>
#include <vector>
using namespace std;

void generateTriangle(vector<int>& row) {
    int n = row.size();
    
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << row[i];
        if(i != n - 1){
            cout << " ";
        }
    }
    cout << "]";
    cout << endl;
    
    if (n == 1) return;
    
    vector<int> nextRow(n - 1);
    for (int i = 0; i < n - 1; i++) {
        nextRow[i] = row[i] + row[i + 1];
    }
    
    generateTriangle(nextRow);
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
        
        generateTriangle(A);
        
        if (T) {
            cout << endl;
        }
    }
    return 0;
}
