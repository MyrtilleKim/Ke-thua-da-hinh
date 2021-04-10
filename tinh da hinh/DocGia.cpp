#include "DocGia.h"
DocGia::DocGia()
{
	_ma	= 0;
	_hoTen = _ngayHH = _gioiTinh = "";
}
DocGia::DocGia(const DocGia& dg)
{
	_ma = dg._ma;
	_hoTen = dg._hoTen;
	_ngayHH = dg._ngayHH;
	_gioiTinh = dg._gioiTinh;
}

DocGia::~DocGia()
{
}

ostream& operator<< (ostream& os, const DocGia& dg){
	os << "[" << dg._ma << "] - " << dg._hoTen << " - <" << dg._ngayHH << "> - " << dg._gioiTinh;
	return os;
}
istream& operator>> (istream& is, DocGia& dg){
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
int DocGia::lePhi(){
	return 50;
}
