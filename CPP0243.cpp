#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void sortByOrder(vector<int>& a1, vector<int>& a2) {
    unordered_map<int, int> mp;

    for (int x : a1) mp[x]++;

    vector<int> v;
    for (int x : a2) {
        while (mp[x] > 0) {
            v.push_back(x);
            mp[x]--;
        }
    }

    vector<int> remaining;
    for (pair<int, int> x : mp) {
        while (x.second > 0) {
            remaining.push_back(x.first);
            x.second--;
        }
    }
    sort(remaining.begin(), remaining.end());

    v.insert(v.end(), remaining.begin(), remaining.end());

    a1 = v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a1(n), a2(m);

        for (int i = 0; i < n; i++) cin >> a1[i];
        for (int i = 0; i < m; i++) cin >> a2[i];

        sortByOrder(a1, a2);

        for (int x : a1) cout << x << " ";
        cout << "\n";
    }
    return 0;
}