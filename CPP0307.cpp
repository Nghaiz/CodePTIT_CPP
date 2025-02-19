#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s1, s2, w;
        getline(cin, s1);
        getline(cin, s2);
        set<string> se1;
        unordered_set<string> se2;

        stringstream ss1(s1), ss2(s2);
        while(ss1 >> w){
            se1.insert(w);
        }
        while(ss2 >> w){
            se2.insert(w);
        }
        for (string x : se1){
            if (!se2.count(x)) cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}