#include "QuanLySinhVien.h"

int main() {
	QuanLySinhVien quanLySinhVien;
	const int max_attempts = 3;
	int attempts = 0;
	std::string username = "admin";
	std::string password = "password";
label1:
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
		case 1:
			int chon3;
			do {
				cout << "0. Thoat" << endl;
				cout << "1. Tim thong tin cua ban" << endl;
				cout << "2. Quay lai" << endl;
				cin >> chon3;
				ofstream outfile;
				switch (chon3)
				{
				case 0:
					return 0;
					break;
				case 1:
					quanLySinhVien.timSinhVien(cout);
					system("pause");
					break;
				case 2:
					goto label1;
					break;
				default:
					cout << "Ban chon sai!";

					break;
				}
			} while (chon3 != 0);
		case 2:
			
			

			while (attempts < max_attempts) {
				std::string entered_username;
				std::string entered_password;

				std::cout << "Nhap ten dang nhap: ";
				std::cin >> entered_username;

				std::cout << "Nhap mat khau: ";
				std::cin >> entered_password;

				if (entered_username == username && entered_password == password) {
					cout << "Dang nhap thanh cong" << endl;
					break;
				}
				else {
					std::cout << "Ten dang nhap hoac mat khau khong dung. Vui long thu lai." << std::endl;
					attempts++;
				}
			}

			if (attempts == max_attempts) {
				std::cout << "Vuot qua so lan nhap sai. Chuong trinh se thoat." << std::endl;
			}
			else{

			
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
					cout << "9. Quay lai" << endl;
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
					case 9:
						goto label1;
						break;
					default:
						cout << "Ban chon sai" << endl;
						system("pause");
						break;
					}









				} while (chon != 0);
				return 0;
			}
			return 0;
			
		case 3:
			int chon4;
			do {
				cout << "0. Thoat" << endl;
				cout << "1. Tim thong tin cua con ban" << endl;
				cout << "2. Quay lai" << endl;
				cin >> chon4;
				ofstream outfile;
				switch (chon4)
				{
				case 0:
					return 0;
					break;
				case 1:
					quanLySinhVien.timSinhVien(cout);
					system("pause");
					break;
				case 2:
					goto label1;
					break;
				default:
					cout << "Ban chon sai!";

					break;
				}
			} while (chon3 != 0);

			}



			break;

		} while (chon1 != 0);
	}
