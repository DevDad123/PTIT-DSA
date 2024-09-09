#include <iostream>
#include <queue>
#include <vector>
using namespace std;

long long minCostToConnectRopes(vector<int>& a) {
    priority_queue<int, vector<int>, greater<int> > minHeap(a.begin(), a.end()); 
    long long res = 0; 

    while (minHeap.size() > 1) {
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();
        
        int cost = first + second; 
        res += cost; 
        minHeap.push(cost); 
    }

    return res;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        cout << minCostToConnectRopes(a) << endl; 
    }
    return 0;
}
