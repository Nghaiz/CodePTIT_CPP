#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct congTy{
    string ma, ten;
    int slg;

    friend istream& operator >> (istream &in, congTy &x){
        in >> x.ma;
        cin.ignore();
        getline(in, x.ten);
        in >> x.slg;
        return in;
    }
    friend ostream& operator << (ostream &out, congTy x){
        out << x.ma << " " << x.ten << " " << x.slg << "\n";
        return out;
    }
} cty;

bool cmp(cty a, cty b){
    if (a.slg != b.slg) return a.slg > b.slg;
    return a.ma < b.ma;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q, a, b;
    cin >> n;
    cty ds[n];
    for (int i = 0; i < n; i++){
        cin >> ds[i];
    }
    sort(ds, ds + n, cmp);
    
    cin >> q;
    while (q--){
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        for (cty x : ds){
            if (x.slg >= a && x.slg <= b) cout << x;
        }
    }
    return 0;
}