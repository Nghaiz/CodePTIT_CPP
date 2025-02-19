#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct sinhVien {
    string msv, ten, lop, mail;
} sv;

void nhap(sv &x){
    cin >> x.msv;
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.lop >> x.mail;
}

void in (sv x){
    cout << x.msv << " " << x.ten << " " << x.lop << " " << x.mail << "\n";
}

bool cmp(sv a, sv b){
    if (a.lop != b.lop) return a.lop < b.lop;
    return a.msv < b.msv;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++){
        nhap(a[i]);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        in(a[i]);
    }
    return 0;
}