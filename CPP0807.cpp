#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream in;
    in.open("DATA.in");

    int tmp, n, m;
    in >> n >> m;
    set<int> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.insert(tmp);
    }
    set<int> b;
    for (int i = 0; i < m; i++) {
        in >> tmp;
        b.insert(tmp);
    }
    for (int x : a){
        if (b.count(x)) cout << x << " ";
    }
    return 0;
}