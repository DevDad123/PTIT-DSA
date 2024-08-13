#include<iostream>
using namespace std;
bool ok = true;
void sinh(int n , int k , int a[]){
    int i = k;
    while(i > 0 && a[i] == n - k + i) i--;
    if(i <= 0){
        ok = false;
        return; 
    }
    else {
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 1 ; i <= k ; i++){
            a[i] = i;
        }
        ok = true;
        while(ok){
            for(int i = 1 ; i <= k ; i++){
                cout << a[i];
            }
            cout << " ";
            sinh(n,k,a);
        }
        cout << endl;
    }
}