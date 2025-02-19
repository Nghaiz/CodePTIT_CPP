#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int countID = 1;

class SinhVien {
private:
    string id;
    string name;
    string className;
    string birth;

public:
    double gpa;

    // Constructor mặc định
    SinhVien() {
        id = "";
        name = "";
        className = "";
        birth = "";
        gpa = 0;
    }

    // Nạp chồng toán tử nhập
    friend istream &operator>>(istream &input, SinhVien &student) {
        // Bắt buộc sử dụng scanf("\n") theo yêu cầu đề bài
        scanf("\n");

        // Nhập thông tin sinh viên
        getline(input, student.name);
        getline(input, student.className);
        getline(input, student.birth);
        input >> student.gpa;

        // Gán mã sinh viên theo định dạng
        if (countID < 10)
            student.id = "B20DCCN00" + to_string(countID);
        else
            student.id = "B20DCCN0" + to_string(countID);
        ++countID;

        // Định dạng tên sinh viên
        stringstream ss(student.name);
        string word, formattedName;
        while (ss >> word) {
            word[0] = toupper(word[0]);  // Viết hoa chữ cái đầu
            for (int i = 1; i < word.size(); ++i)
                word[i] = tolower(word[i]);  // Viết thường các chữ cái còn lại
            formattedName += word + " ";  // Thêm dấu cách sau mỗi từ
        }
        student.name = formattedName;

        // Định dạng ngày sinh: Thêm '0' nếu ngày hoặc tháng có 1 chữ số
        stringstream ssb(student.birth);
        string day, month, year;
        getline(ssb, day, '/');
        getline(ssb, month, '/');
        getline(ssb, year);

        if (day.size() == 1) day = "0" + day;
        if (month.size() == 1) month = "0" + month;

        student.birth = day + "/" + month + "/" + year;

        return input;
    }

    // Nạp chồng toán tử xuất
    friend ostream &operator<<(ostream &print, const SinhVien &student) {
        print << student.id << " " 
              << student.name 
              << student.className << " " 
              << student.birth << " " 
              << fixed << setprecision(2) << student.gpa << endl;
        return print;
    }
};

// So sánh điểm GPA để sắp xếp
bool compare(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

// Hàm sắp xếp danh sách sinh viên
void sapxep(SinhVien *ds, int N) {
    sort(ds, ds + N, compare);
}

int main() {
    SinhVien ds[50];
    int N;

    // Nhập số lượng sinh viên
    cin >> N;

    // Nhập thông tin sinh viên
    for (int i = 0; i < N; i++) {
        cin >> ds[i];
    }

    // Sắp xếp sinh viên theo GPA
    sapxep(ds, N);

    // In thông tin sinh viên sau khi sắp xếp
    for (int i = 0; i < N; i++) {
        cout << ds[i];
    }

    return 0;
}
