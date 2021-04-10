#include "DocGiaVip.h"

DocGiaVip::DocGiaVip() : DocGia()
{
}
DocGiaVip::DocGiaVip(const DocGiaVip& dg) : DocGia(dg){
}
DocGiaVip::~DocGiaVip()
{
}
int DocGiaVip::lePhi(){
	return 50;
}
ostream& operator<< (ostream& os, const DocGiaVip& dg){
	os << "[" << dg._ma << "] - " << dg._hoTen << " - <" << dg._ngayHH << "> - " << dg._gioiTinh;  
	return os;
}
istream& operator>> (istream& is, DocGiaVip& dg){
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
	return is;
}
