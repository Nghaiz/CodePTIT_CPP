#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s, w;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);

        while (ss >> w){
            v.push_back(w);
        } 
        reverse(begin(v), end(v));
        for (string x : v){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}