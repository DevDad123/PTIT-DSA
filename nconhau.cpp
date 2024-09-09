#include<iostream>
using namespace std;

int n, T, count_solutions;
bool A[20], Xuoi[40], Nguoc[40];
int X[20];

void Result() {
    count_solutions++;
}

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(A[j] && Xuoi[i - j + n] && Nguoc[i + j - 1]) {
            X[i] = j; 
            A[j] = false;
            Xuoi[i - j + n] = false;
            Nguoc[i + j - 1] = false;
            
            if(i == n) 
                Result();
            else 
                Try(i + 1);
            
            A[j] = true;
            Xuoi[i - j + n] = true;
            Nguoc[i + j - 1] = true;
        }
    }
}

int main() {
    cin >> T;
    while(T--) {
        cin >> n;
        count_solutions = 0;
        
        for(int i = 1; i <= n; i++) 
            A[i] = true;
        for(int i = 1; i <= 2 * n - 1; i++) {
            Xuoi[i] = true;
            Nguoc[i] = true;
        }
        Try(1);
        cout << count_solutions << endl;
    }
    
    return 0;
}
