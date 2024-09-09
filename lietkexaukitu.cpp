#include<iostream>
using namespace std;

char n; 
int k, x[1000];

void Try(int i) {
    for(char j = 'A' ; j <= n ; j++){
        if(j >= x[i - 1]){
            x[i] = j;
            if(i == k){
                for(int l = 1 ; l <= k ; l++){
                    cout << char(x[l]);
                }
                cout << endl;
            }
            else Try(i + 1);
        }
    }
}

int main() {
    cin >> n >> k;
    Try(1);
    return 0;
}
