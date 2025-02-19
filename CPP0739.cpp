#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){    
        string s;
        cin >> s;

        int dem = 1;
        stack<int> st;
        st.push(1);

        for (char x : s){
            ++dem;
            if (x == 'I'){
                while (!st.empty()){
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(dem);
        }
        while (!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
    return 0;
}