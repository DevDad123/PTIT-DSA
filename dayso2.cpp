#include <iostream>
#include <vector>
using namespace std;

void generateTriangle(vector<int>& row, vector<vector<int>>& result) {
    int n = row.size();
    
    result.push_back(row);
    
    if (n == 1) return;
    
    vector<int> nextRow(n - 1);
    for (int i = 0; i < n - 1; i++) {
        nextRow[i] = row[i] + row[i + 1];
    }
    
    generateTriangle(nextRow, result);
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
        
        vector<vector<int>> result;
        generateTriangle(A, result);
        
        for (int i = result.size() - 1; i >= 0; i--) {
            cout << "[";
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j];
                if (j != result[i].size() - 1) {
                    cout << " ";
                }
            }
            cout << "] ";
        }
        cout << endl;
        
        if (T) {
            cout << endl; 
        }
    }
    return 0;
}
