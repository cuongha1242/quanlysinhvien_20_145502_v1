#include "QuanLySinhVien.h"

int main() {
    QuanLySinhVien quanLySinhVien;

    int chon1;
    do {
        cout << "Ban la ai?" << endl;
        cout << "0. Thoat" << endl;
        cout << "1. Sinh Vien" << endl;
        cout << "2. Can bo" << endl;
        cout << "3. Phu Huynh" << endl;
        cin >> chon1;

        switch (chon1) {
        case 0:
            return 0;
            break;
        case 2:
            int maCanBo;
            cout << "Nhap ma can bo: ";
            cin >> maCanBo;
           
            
           if (2020 <= maCanBo && maCanBo <= 2029)
            {
                goto label2;
            }
            else {
               int count1;
               do {
                   switch (count1)
                   {
                   case 1:
                       cout << "Nhap lai ma so can bo!" << endl;
                       count1++;
                       
                   case 2:
                       cout << "Nhap lai ma so can bo!" << endl;
                   case 3:
                       cout << "Nhap lai ma so can bo!" << endl;
                   default:
                       break;
                   }
               }while(count1 == 3)
               
               if (count1 > 3) {
                   break;
               }

            }
            


            label2:
            int chon;
            do {
                system("cls");
                cout << "Moi ban chon menu:" << endl;
                cout << "0. Thoat" << endl;
                cout << "1. Nhap danh sach" << endl;
                cout << "2. In danh sach ra man hinh" << endl;
                cout << "3. In danh sach ra file" << endl;
                cout << "4. Tim sinh vien co diem trung binh >= 5" << endl;
                cout << "5. Tim sinh vien co diem trung binh cao nhat" << endl;
                cout << "6. Tim sinh vien co diem trung binh thap nhat" << endl;
                cout << "7. Tim sinh vien theo MSSV" << endl;
                cout << "8. So luong sinh vien" << endl;

                cin >> chon;

                ofstream outfile;

                switch (chon) {
                case 0:
                    break;
                case 1:
                    quanLySinhVien.nhapDanhSach();
                    break;
                case 2:
                    quanLySinhVien.xuatDanhSach(cout);
                    system("pause");
                    break;
                case 3:
                    outfile.open("DanhSach.txt");
                    quanLySinhVien.xuatDanhSach(outfile);
                    outfile.close();
                    system("pause");
                    break;
                case 4:
                    quanLySinhVien.timDiemTrungBinhLonHon5(cout);
                    system("pause");
                    break;
                case 5:
                    quanLySinhVien.timDiemTrungBinhLonNhat(cout);
                    system("pause");
                    break;
                case 6:
                    quanLySinhVien.timDiemTrungBinhNhoNhat(cout);
                    system("pause");
                    break;
                case 7:
                    quanLySinhVien.timSinhVien(cout);
                    system("pause");
                    break;
                case 8:
                    quanLySinhVien.soluongSinhVien();
                    system("pause");
                    break;
                default:
                    cout << "Ban chon sai" << endl;
                    system("pause");
                    break;
                }


        






            } while (chon != 0);
            return 0;
        }



        break;

    } while (chon1 != 0);
}