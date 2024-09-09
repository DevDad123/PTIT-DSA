#include<iostream>
#include<vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<long long> A(N);
        vector<long long> B(N - 1);

        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        for(int i = 0; i < N - 1; i++){
            cin >> B[i];
        }

        int pos = N; // Initialize to N, assuming the last element differs
        for(int i = 0; i < N - 1; i++){
            if(A[i] != B[i]){
                pos = i + 1;
                break;
            }
        }

        cout << pos << endl;
    }
    return 0;
}
