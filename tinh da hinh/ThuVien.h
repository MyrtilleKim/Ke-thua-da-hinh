#ifndef THUVIEN_H
#define THUVIEN_H

#include <vector>
#include "DocGia.h"
#include "DocGiaVip.h"
#include "DocGiaThuong.h"
using namespace std;
class ThuVien
{
	private: 
		vector<DocGia *> DS;
	public:
		ThuVien();
		~ThuVien();
		void Nhap();
		int TongPhi();
	protected:
};

#endif
