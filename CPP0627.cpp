#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

typedef struct giangVien{
    int stt;
    string ten, nganh;

    friend istream& operator >> (istream &in, giangVien &x){
        x.stt = cnt++;
        getline(in, x.ten);
        getline(in, x.nganh);
        string w, res = "";
        stringstream tmp(x.nganh);
        while (tmp >> w){
            res += toupper(w[0]);
        }
        x.nganh = res;
        return in;
    }
    friend ostream& operator << (ostream &out, giangVien x){
        out << "GV";
        out << setw(2) << setfill('0') << x.stt << " ";
        out << x.ten << " " << x.nganh;
        return out;
    }
} gv;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q;
    cin >> n;
    cin.ignore();
    gv a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> q;
    cin.ignore();
    while (q--){
        string s, tmp;
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        transform(begin(s), end(s), begin(s), ::tolower);
        for (gv x : a){
            tmp = x.ten;
            transform(begin(tmp), end(tmp), begin(tmp), ::tolower);
            if (tmp.find(s) != string::npos){
                cout << x << "\n";
            }
        }
    }
    return 0;
}