#include <bits/stdc++.h>
using namespace std;

int checkDiff(string ori, string tmp){
    int n = ori.size(), cnt = 0;

    for (int i = 0; i < n; i++){
        if (ori[i] != tmp[i]) cnt++;
        
        if (cnt > 2) return 0;
    }
    return cnt == 2;
}

string solve(string s){
    string ori = s;
    while(prev_permutation(begin(s), end(s))){
        if (checkDiff(ori, s)) return s;
    }
    return "-1";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
    return 0;
}