#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int n, k;
string a[30];  // mảng lưu tên
int m[30];     
vector<string> res;

void back_tracking(int i, int count) {
    if (count == k) { // nếu có đủ 2 từ 
        string tmp;
        for (int p = 0; p < n; p++) {
            if (m[p] == 1) { 
                if (!tmp.empty()) {
                    tmp += " "; // nếu không phải là ô trống thì tạo thêm
                }
                tmp += a[p];
            }
        }
        res.push_back(tmp);
        return;
    }
    if (i == n) return;

    m[i] = 1;
    back_tracking(i + 1, count + 1);

    m[i] = 0;
    back_tracking(i + 1, count);
}

int main() {
    cin >> n >> k;
    set<string> unique_names;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        unique_names.insert(name);
    }
    vector<string> sorted_names(unique_names.begin(), unique_names.end());
    sort(sorted_names.begin(), sorted_names.end());
    n = sorted_names.size();
    for (int i = 0; i < n; i++) {
        a[i] = sorted_names[i];
    }
    fill(m, m + n, 0);
    res.clear();
    back_tracking(0, 0);

    sort(res.begin(), res.end());
    for(int i = 0 ; i < res.size() ; i++){
        cout << res[i] << endl;
    }

    return 0;
}