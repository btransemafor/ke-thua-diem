#pragma once
#ifndef _diem 
#define _diem
#include <iostream>
#include <string >
using namespace std;
class diem
{
protected:
	double x;
	double y;
	static int dem;
public:
	~diem();
	diem();
	diem(double );
	diem(double , double); 
	diem(const diem&); 
	void SetX(double);
	void SetY(double);
	void SetXY(double, double);
	double getX() const ;
	double getY() const ;
	static int getDem() ;
	void Nhap(); 
	void Xuat() const; 
	bool kiemtratamgiachople(const diem & ,const diem &) const;
	bool kiemtratrung(const diem&); 
	double Tinhkhoangcach(const diem&) const; 
	void Dichuyen(double, double); 
	diem Timdoixung() const; 
	double TinhChuvi(const diem&, const diem&); 
	double TinhDienTich(const diem&, const diem&); 
	string PhanLoaiTamgiac(const diem&, const diem&) const; 

};

#endif ; 