#ifndef DOCGIAVIP_H
#define DOCGIAVIP_H

#include "DocGia.h"

class DocGiaVip : public DocGia
{	
	public:
		DocGiaVip();
		DocGiaVip(const DocGiaVip&);
		~DocGiaVip();
		friend ostream& operator<< (ostream& os, const DocGiaVip& dg);
		friend istream& operator>> (istream& is, DocGiaVip& dg);
		int lePhi();
	protected:
};

#endif
