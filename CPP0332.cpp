#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s, w, email = "";
    getline(cin, s);

    vector<string> v;
    stringstream ss(s);
    while (ss >> w){
        transform(begin(w), end(w), begin(w), ::tolower);
        v.push_back(w);
    }
    int n = v.size();
    email += v[n - 1];
    for (int i = 0; i < n - 1; i++){
        email += v[i][0];
    }
    email += "@ptit.edu.vn";
    cout << email;
    return 0;
}