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
        map<char, int> mp;
        int tmp = 0;
        for (char x : s){
            mp[x]++;
            if (mp[x] > tmp) tmp = mp[x];
        }

        int ans = tmp - (s.size() - tmp);   //so luong ki tu xuat hien nhieu nhat, voi so luong cac ki tu con lai trong xau
        if (ans < 2) cout << "1\n";    // < 2 la bai toan con nho nhat, vdu xau "aa", se co tmp = 2 va ans = 2 -> phai be hon 2 moi thoa man bai toan
        else cout << "0\n";
    }
    return 0;
}