#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream in;
    in.open("DATA.in");
    map<int, int> mp;

    int tmp;
    while (in >> tmp){
        mp[tmp]++;
    }
    for (pair<int, int> x : mp) cout << x.first << " " << x.second << "\n";
    return 0;
}