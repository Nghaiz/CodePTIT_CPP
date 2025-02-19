#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

typedef struct SinhVien{
    int stt;
    string ten, lop, dob;
    double gpa;

    friend istream& operator >> (istream &in, SinhVien &x){
        x.stt = cnt++;
        cin.ignore();
        getline(in, x.ten);
        in >> x.lop >> x.dob >> x.gpa;
        return in;
    }

    friend ostream& operator << (ostream &out, SinhVien x){
        out << "B20DCCN";
        out << setw(3) << setfill('0') << x.stt << " ";
        out << x.ten << " " << x.lop << " ";
        string w;
        stringstream ss(x.dob);
        while (getline(ss, w, '/')){
            if (w.size() != 4) {
                out << setw(2) << setfill('0') << w << "/";
            }
            else out << w << " ";
        }
        out << fixed << setprecision(2) << x.gpa << "\n";
        return out;
    }
} sv;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sv ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}