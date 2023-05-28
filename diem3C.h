#pragma
#ifndef _diem3c 
#define _diem3c 
#include "diem.h"
class Diem3C : public diem 
{
protected:
	double z; 
	static int dem; 
public: 
	~Diem3C();
	Diem3C(const Diem3C&); 
	Diem3C();
	Diem3C(double, double); 
	Diem3C(double); 
	Diem3C(double, double, double); 
	void setZ(double); 
	void setXYZ(double, double, double); 
	double getZ() const; 
	static int getDem(); 
	void Nhap();
	void Xuat() const;
	bool kiemtratrung(const Diem3C&);
	void Dichuyen(double, double, double );
	Diem3C Timdoixung() const;
	double Tinhkhoangcach(const Diem3C&); 
	friend istream& operator >> (istream&, Diem3C&); 
	friend ostream& operator << (ostream&, const Diem3C&) ; 
	
};
#endif ; 