#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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
    
    transform(v[n - 1].begin(), v[n - 1].end(), v[n - 1].begin(), ::toupper);

    for (int i = 0; i < n - 1; i++){
        cout << v[i];
        if (i != n - 2) cout << " ";
    }
    cout << ", " << v[n - 1];
    return 0;
}