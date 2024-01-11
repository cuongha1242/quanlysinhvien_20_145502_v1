#include "SinhVien.h"

SinhVien::SinhVien() {

}

void SinhVien::nhap() {
    system("cls");
    cout << "Nhap thong tin sinh vien" << endl;

    fflush(stdin);

    cout << "MSSV: ";
    cin >> id;
    getchar();


    fflush(stdin);

    cout << "Ho ten sinh vien: ";
    getline(cin, hoTen);

    cout << "Lop: ";
    getline(cin, lop);

    cout << "Diem Ky thuat lap trinh C++: ";
    cin >> diemKTLT;

    if (diemKTLT > 10) {
        diemKTLT = 10;
    }

    cout << "Diem XSTK: ";
    cin >> diemXSTK;

    if (diemXSTK > 10) {
        diemXSTK = 10;
    }

    cout << "Diem Vat Ly : ";
    cin >> diemVL;

    if (diemVL > 10) {
        diemVL = 10;
    }
    cout << "Successful! ";
    getchar();
}

void SinhVien::xuat(ostream& os) {
    os << "MSSV: " << id << " - Sinh vien: " << hoTen << " - Lop: " << lop << " - Diem Ky Thuat lap trinh C++: " << diemKTLT << " SDT KTLT: " <<  sdtKTLT << " - Diem XSTK: " << diemXSTK <<" SDT XSTK:  " << sdtXSTK << " - Diem Vat Ly : " << diemVL << " SDT VL:  " << sdtVL << " - Diem TB : " << diemTrungBinh() << endl;
}

float SinhVien::diemTrungBinh() {
    return (diemKTLT + diemXSTK + diemVL) / 3.0f;
}

string SinhVien::getID() {
    return id;
}