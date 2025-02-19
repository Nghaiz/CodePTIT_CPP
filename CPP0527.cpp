#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct time {
    int gio, phut, giay;
} ti;

bool cmp (ti a, ti b){
    if (a.gio != b.gio) return a.gio < b.gio;
    if (a.phut != b.phut) return a.phut < b.phut;
    return a.giay < b.giay;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    ti a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << "\n";
    }
    return 0;
}   