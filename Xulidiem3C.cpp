#include "diem3C.h"
int Diem3C::dem = 0; 
Diem3C::~Diem3C()
{
	cout << "Huy 1 diem 3C => Con " << --dem << " diem 3C\n"; 
}

Diem3C::Diem3C(const Diem3C& d) : diem(d.x, d.y), z(d.z) {
	cout << "Da tao 1 diem 3C, Co " << ++dem << " diem 3C\n"; 
}; 
Diem3C::Diem3C()
{
	x = 0;
	y = 0;
	z = 0; 
	cout << "Da tao 1 diem 3C, co " << ++dem << " diem 3C\n";
}
Diem3C::Diem3C(double x, double y) : diem(x, y) , z(0) 
{
	cout << "Da tao 1 diem 3C, co " << ++dem << " diem 3C\n";
}
Diem3C::Diem3C(double x ) : diem (x , 0 ) , z(0) 
{
	cout << "Da tao 1 diem 3C, co " << ++dem << " diem 3C\n";

}
Diem3C::Diem3C(double x1, double y2, double z3): diem(x1, y2), z(z3)
{
	cout << "Da tao 1 diem 3C, co " << ++dem << " diem 3C\n";

}
void Diem3C::setZ(double z)
{
	this->z = z; 
}
void Diem3C::setXYZ(double x, double y , double z )
{
	this->x = x; 
	this->y = y; 
	this->z = z;
	
}
double Diem3C::getZ() const
{
	return z; 
}
int Diem3C::getDem()
{
	return dem;
}
void Diem3C::Nhap()
{
	diem::Nhap(); 
	cout << "Nhap cao do: "; cin >> z; 
}
void Diem3C::Xuat() const
{
	
	cout << "("; diem::Xuat();
	cout << "," << z << ")" << endl; 
}
bool Diem3C::kiemtratrung(const Diem3C& d )
{
	return (this->diem::kiemtratrung(d) && z == d.z); 
}
void Diem3C::Dichuyen(double dx, double dy, double dz)
{
	this->diem::Dichuyen(dx, dy); 
	z += dz; 
}
Diem3C Diem3C::Timdoixung() const
{
	return (-x == 0 ? x : -x, -y == 0 ? y : -y, -z == 0 ? z : -z); 

}
double Diem3C::Tinhkhoangcach(const Diem3C& d )
{
	return sqrt(pow(this->x - d.x, 2) + pow(this->y - d.y, 2) + pow(this->z - d.z, 2)); 
}
istream& operator >> (istream& is, Diem3C& d3c)
{
	d3c.Nhap(); 
	return is; 
}
ostream& operator << (ostream& os , const Diem3C& d3c)
{
	d3c.Xuat(); 
	return os; 
}
