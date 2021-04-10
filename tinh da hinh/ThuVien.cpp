#include "ThuVien.h"

ThuVien::ThuVien()
{
}

ThuVien::~ThuVien()
{
}
void ThuVien::Nhap(){
	int n;
	cout << "Nhap so luong doc gia thuong: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		DocGiaThuong *temp = new DocGiaThuong;
		cin >> *temp;
		DS.push_back(temp);
	}
	cout << "Nhap so luong doc gia vip: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		DocGiaVip *temp = new DocGiaVip;
		cin >> *temp;
		DS.push_back(temp);
	}
}
int ThuVien::TongPhi(){
	int kq = 0;
	for(int i = 0; i < DS.size(); i++){
		kq += DS[i]->lePhi();
	}
	return kq;
}
