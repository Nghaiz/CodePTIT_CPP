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
        int q;
        cin >> q;
        cin.ignore();
        string s, w;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        while (ss >> w){
            w[0] = toupper(w[0]);
            for (int i = 1; i < w.size(); i++){
                w[i] = tolower(w[i]);
            }
            v.push_back(w); 
        }
        int n = v.size();
        if (q == 1){
            cout << v[n - 1] <<" ";
            for (int i = 0; i < n - 1; i++){
                cout << v[i] << " ";
            }
        }
        else {
            for (int i = 1; i < n; i++){
                cout << v[i] << " ";
            }
            cout << v[0];
        }
        cout << "\n";
    }
    return 0;
}