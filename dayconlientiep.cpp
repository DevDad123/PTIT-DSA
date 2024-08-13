#include<iostream>
using namespace std;

void sinh(int n, int k, int a[]) {
    int i = k;
    while (i > 0 && a[i] == n - k + i) i--;
    if (i <= 0) {
        for (int j = 1; j <= k; j++) {
            a[j] = j;
        }
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}
/* n = 5 , k = 3 
  1 4 5
i 1 2 3
kiểm tra số cuối nếu i < 0 và a[i] = n - k + i ở đây a[i] = 5 và n - k + i = 5 => 5 = 5 nên chuyển tiếp lên số đằng trc
đến số 1 ta thấy a[i] = 1 != n - k + i thì ta tăng số 1 lên 1 đơn vị là 2 sau đó tăng những vị trí sau nó 1 đơn vị
=> ta có dãy tiếp là 2 3 4 
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
        }
        sinh(n, k, a);
        for (int i = 1; i <= k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
