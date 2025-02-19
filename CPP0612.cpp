#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

typedef struct SinhVien {
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

        string w, name = "";
        stringstream ss1(x.ten), ss2(x.dob);
        while (ss1 >> w){
            name += toupper(w[0]);
            for (int i = 1; i < w.size(); i++){
                name += tolower(w[i]);
            }
            name += " ";
        } 
        out << name << x.lop << " ";

        while (getline(ss2, w, '/')){
            if (w.size() != 4){
                out << setw(2) << setfill('0') << w << '/';
            }
            else out << w << " ";
        }
        out << fixed << setprecision(2) << x.gpa << "\n";
        
        return out;
    }
} sv;

int main(){
    SinhVien ds[50];
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