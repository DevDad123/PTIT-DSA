#include<iostream>
#include<algorithm>  
using namespace std;

bool ok = true;

void sinh(int n, int a[]){
    int i = n - 1;
    while(i >= 1 && a[i] <= a[i + 1]){
        --i;
    }
    if(i == 0){
        ok = false;
    } else {
        int j = n;
        while(a[i] <= a[j]) --j;
        swap(a[i],a[j]);
        reverse(a + i + 1 , a + n + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n + 1];  
        for(int i = 1; i <= n; i++) {
            a[i] = n - i + 1;
        }
        
        ok = true;
        while(ok) {

            for(int i = 1; i <= n; i++) {
                cout << a[i];
            }
            cout << " ";
            sinh(n, a);
        }
        cout << endl;  
    }
    return 0;
}
