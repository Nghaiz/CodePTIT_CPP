#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream in1, in2;
    in1.open("DATA1.in"); in2.open("DATA2.in");

    set<string> se1, hop;
    unordered_set<string> se2;
    string s;
    while (in1 >> s){
        transform(begin(s), end(s), begin(s), ::tolower);
        hop.insert(s);
        se1.insert(s);
    }
    while (in2 >> s){
        transform(begin(s), end(s), begin(s), ::tolower);
        hop.insert(s);
        se2.insert(s);
    }
    for (string x : hop) cout << x << " ";
    cout << "\n";
    for (string x : se1){
        if (se2.count(x)) cout << x << " ";
    }
    return 0;
}   