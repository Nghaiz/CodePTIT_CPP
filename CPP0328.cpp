#include <bits/stdc++.h>
using namespace std;

int divide(string s, int k){
    int n = s.size(), res = 0;
    for (int i = 0; i < n; i++){
        int tmp = 0;
        for (int j = i; j < n; j++){
            tmp = (tmp * 10 + (s[j] - '0')) % k;

            if (tmp == 0) ++res;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        cout << divide(s, 8) - divide(s, 24) << "\n";
    }
    return 0;
}