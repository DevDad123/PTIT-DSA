#include<iostream>
using namespace std;
bool ok = false;
void sinh(int n , char a[]){
    int i = n - 1;
    while( i >= 0 && a[i] == 'B'){
        --i;
    }
    if(i < 0){
        ok = true;
        return;
    }
    else {
        a[i] = 'B';
        for(int j = i + 1 ; j < n ; j++){
            a[j] = 'A';
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char a[n];
        for(int i = 0 ; i < n ; i++){
            a[i] = 'A';
        }
        ok = false;
        while(!ok){
            for(int i = 0 ; i < n ; i++){
                cout << a[i];
            }
            sinh(n,a);
            cout << " ";
        }
        cout << endl;
    }
}