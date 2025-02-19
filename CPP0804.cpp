#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream in;
    in.open("VANBAN.in");
    set<string> se;
    string tmp;
    while (in >> tmp){
        transform(begin(tmp), end(tmp), begin(tmp), ::tolower);
        se.insert(tmp);
    }
    for (string x : se) cout << x << "\n";
    return 0;
}