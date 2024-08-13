#include<iostream>
#include<algorithm>
using namespace std;
bool ok = true;
void sinh(int n , int a[]){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){ //xét toàn mảng tìm a[i] sao cho a[i] < a[i + 1]
        --i;
    }
    if(i == 0){
        ok = false;
    }
    else {
        int j = n;
        while(a[i] > a[j]) --j; // tìm số lớn hơn i nhỏ nhất trong khoảng từ i + 1 cho đến n
            swap(a[i],a[j]);
            reverse(a + i + 1 , a + n + 1); // lật ngược các số từ i + 1 cho đến n
        }
 }
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        ok = true;
        for(int i = 1 ; i <= n ; i++){
            a[i] = i;
        }
        while(ok){
            for(int i = 1 ; i <= n ; i++){
                cout << a[i];
            }
            cout << " ";
            sinh(n,a);
        }
        cout << endl;
    }
    return 0;
}