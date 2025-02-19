#include <bits/stdc++.h>

using namespace std;

int minSwaps(vector<int>& arr, int n) {
    vector<pair<int, int>> pos(n);
    for (int i = 0; i < n; i++) {
        pos[i] = {arr[i], i};
    }
    
    sort(pos.begin(), pos.end());

    vector<bool> visited(n, false);
    int dem = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] || pos[i].second == i) {
            continue;
        }
        int cycleLength = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = pos[j].second; 
            cycleLength++;
        }
        if (cycleLength > 1) {
            dem += (cycleLength - 1);
        }
    }
    return dem;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << minSwaps(a, n) << "\n";
    }
    return 0;
}
