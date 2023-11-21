#pragma once
#pragma once
#ifndef SinhVien_h
#define SinhVien_h

#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string id;
    string hoTen;
    string lop;
    float diemKTLT;
    float diemXSTK;
    float diemVL;
public:
    SinhVien();
    void nhap();
    void xuat(ostream& os);
    float diemTrungBinh();
    string getID();
};
#endif