#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

typedef struct NhanVien {
    int stt;
    string ten, sex, dob, dc, tax, date;

    friend istream& operator >> (istream &in, NhanVien &x){
        x.stt = cnt++;
        cin.ignore();
        getline(in, x.ten);
        in >> x.sex >> x.dob;
        cin.ignore();
        getline(in, x.dc);
        in >> x.tax >> x.date;
        return in;
    }
    friend ostream& operator << (ostream &out, NhanVien x){
        out << setw(5) << setfill('0') << x.stt << " ";
        out << x.ten << " " << x.sex << " ";
        string w;
        stringstream ss(x.dob);
        while (getline(ss, w, '/')){
            if (w.size() != 4){
                out << setw(2) << setfill('0') << w << "/";
            }
            else out << w << " ";
        }
        out << x.dc << " " << x.tax << " " << x.date << "\n";
        return out;
    }
} nv;

bool cmp(nv a, nv b){
    vector<string> v1, v2;
    string w;
    stringstream ss1(a.dob), ss2(b.dob);
    while (getline(ss1, w, '/')){
        v1.push_back(w);
    }
    while (getline(ss2, w, '/')){
        v2.push_back(w);
    }
    if (v1[2] != v2[2]) return v1[2] < v2[2];
    if (v1[0] != v2[0]) return v1[0] < v2[0];
    return v1[1] < v2[1];
}

void sapxep(nv a[], int n){
    sort(a, a + n, cmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nv ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}