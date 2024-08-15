#include<iostream>
#include<algorithm>
#include<vector>
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
        int b[n];
        ok = true;
        string bd = "";
        for(int i = 1 ; i <= n ; i++){
            a[i] = i;
        }
        for(int i = 1 ; i <= n ; i++){
            cin >> b[i];
            bd += to_string(b[i]);
        }
        vector<string> ve;
        int cnt = 1;
        while(ok){
            string tmp = "";
            for(int i = 1 ; i <= n ; i++){
                tmp += to_string(a[i]);
            }
            if(tmp == bd){ // Kiểm tra xem số đấy bằng số ban đầu count ++
                cout << cnt;
            }
            else { // nếu số đấy ko bằng thì tăng biến đếm
                cnt++;
            }
            sinh(n,a);
        }
        cout << endl;
    }
    return 0;
}