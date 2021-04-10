#include "DocGiaThuong.h"

DocGiaThuong::DocGiaThuong() : DocGia()
{
	_soSach = 0;
}
DocGiaThuong::DocGiaThuong(const DocGiaThuong& dg) : DocGia(dg){
	_soSach = dg._soSach;
}
DocGiaThuong::~DocGiaThuong()
{
}
int DocGiaThuong::lePhi(){
	return 5*_soSach;
}
ostream& operator<< (ostream& os, const DocGiaThuong& dg){
	os << "[" << dg._ma << "] - " << dg._hoTen << " - <" << dg._ngayHH << "> - " << dg._gioiTinh;  
	os << " - " << dg._soSach;
	return os;
}
istream& operator>> (istream& is, DocGiaThuong& dg){
	cout << "Nhap ma doc gia: ";
	is >> dg._ma;
	cout << "Nhap ho va ten: ";
	cin.ignore();
	getline(is, dg._hoTen);
	cout << "Nhap ngay het han: ";
//	cin.ignore();
	getline(is, dg._ngayHH);
	cout << "Nhap gioi tinh: ";
//	cin.ignore();
	getline(is, dg._gioiTinh);
	cout << "Nhap so sach da muon: ";
	is >> dg._soSach;
	return is;
}
