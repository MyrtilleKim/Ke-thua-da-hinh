#ifndef DOCGIATHUONG_H
#define DOCGIATHUONG_H

#include "DocGia.h"

class DocGiaThuong : public DocGia
{
	private:
		int _soSach;
	public:
		DocGiaThuong();
		DocGiaThuong(const DocGiaThuong&);
		~DocGiaThuong();
		friend ostream& operator<< (ostream& os, const DocGiaThuong& dg);
		friend istream& operator>> (istream& is, DocGiaThuong& dg);
		int lePhi();
	protected:
};

#endif
