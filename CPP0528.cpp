#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct SinhVien {
    int stt;
    string msv, ten, lop, email, cty;

    bool friend operator < (SinhVien a, SinhVien b){
        return a.ten < b.ten;
    }
} sv;

void nhap(sv &x){
    cin.ignore();
    getline(cin, x.msv);
    getline(cin, x.ten);
    cin >> x.lop >> x.email >> x.cty;
}

void in(sv x){
    cout << x.stt << " " << x.msv << " " << x.ten << " " << x.lop << " " << x.email << " " << x.cty << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++){
        a[i].stt = i + 1;
        nhap(a[i]);
    }
    sort(a, a + n);
    cin >> q;
    while (q--){
        string s;
        cin >> s;
        for (int i = 0; i < n; i++){
            if (s == a[i].cty) in(a[i]);
        }
    }
    return 0;
}