#ifndef DOCGIA_H
#define DOCGIA_H
#include <iostream>
#include <string>
using namespace std;
class DocGia
{
	public:
		DocGia();
		DocGia(const DocGia&);
		~DocGia();
		friend ostream& operator<< (ostream& os, const DocGia& dg);
		friend istream& operator>> (istream& is, DocGia& dg);
		virtual int lePhi();
	protected:
		int _ma;
		string _hoTen, _gioiTinh, _ngayHH;
};

#endif
