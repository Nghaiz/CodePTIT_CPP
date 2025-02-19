#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int getMaxArea(vector<int> v){
    int n = v.size(), i = 0, res = INT_MIN;
    stack<int> st;

    while (i < n){
        if (st.empty() || v[i] >= v[st.top()]) st.push(i++);

        else {
            int idx = st.top(); st.pop();

            if (st.empty()) res = max(res, v[idx] * i);
            else res = max(res, v[idx] * (i - st.top() - 1));
        }
    }
    while (!st.empty()){
        int idx = st.top(); st.pop();

        if (st.empty()) res = max(res, v[idx] * i);
        else res = max(res, v[idx] * (i - st.top() - 1));
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, m, ans = 0;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        vector<int> hist(m, 0);

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == 1) hist[j]++;

                else hist[j] = 0;
            }

            ans = max(ans, getMaxArea(hist));
        }
        cout << ans << "\n";
    }
    return 0;
}