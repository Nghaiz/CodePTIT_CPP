#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct SinhVien {
    string msv, ten, lop;
    double m1, m2, m3;

    bool friend operator < (SinhVien a, SinhVien b){
        return a.ten < b.ten;
    }
} sv;

void nhap(sv &x){
    cin.ignore();
    getline(cin, x.msv);
    getline(cin, x.ten);
    cin >> x.lop >> x.m1 >> x.m2 >> x.m3;
}

void sap_xep(sv a[], int n){
    sort(a, a + n);
}

void in_ds(sv a[], int n){
    for (int i = 0; i < n; i++){
        cout << fixed << setprecision(1) << i + 1 << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << a[i].m1 << " " << a[i].m2 << " " << a[i].m3 << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    sv *ds = new sv[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}