#include "diem.h" 
int diem::dem = 0; 
#define epsilon 0.000000001 
diem ::~diem()
{
	cout << "Da huy 1 diem 2C => Con " << --dem << " diem 2C\n"; 
}
diem::diem() : x(0), y(0) {
	cout << "Da tao 1 diem 2C, co " << ++dem << " diem 2C\n" ;
}
diem::diem(double  x) : x(x), y(0)
{ 
	cout << "Da tao 1 diem 2C, co " << ++dem << " diem 2C\n";
}
diem::diem(double x , double y ) : x(x), y(y) 
{
	cout << "Da tao 1 diem 2C, co " << ++dem << " diem 2C\n";
}
diem::diem(const diem& d)
{
	x = d.x; 
	y = d.y; 
	cout << "Da tao 1 diem 2C, co " << ++dem << " diem 2C\n";
}
void diem::SetX(double  x )
{
	this->x = x; 
}
void diem::SetY(double y )
{
	this->y = y; 
}
void diem::SetXY(double x , double y )
{
	this->x = x; 
	this->y = y; 
}
double diem::getX() const
{
	return x; 
}
double diem::getY() const
{
	return y; 
}
int diem::getDem()
{
	return dem; 
}
void diem::Nhap()
{
	cout << "Nhap hoanh do: "; cin >> x; 
	cout << "Nhap tung do: "; cin >> y; 

}
void diem::Xuat() const
{
	cout << x << "," << y; 
}
double diem::Tinhkhoangcach(const diem& d) const
{
	return sqrt(pow((this->x - d.x), 2) + pow((this->y - d.y), 2)); 
}
bool diem::kiemtratamgiachople(const diem& d1, const diem& d2) const
{
	double a = d1.Tinhkhoangcach(d2); 
	double b = d2.Tinhkhoangcach(*this); 
	double c = this->Tinhkhoangcach(d1); 
	return (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b);
}
bool diem::kiemtratrung(const diem& d )
{
	return d.x == x && d.y == y; 
}

void diem::Dichuyen(double dx, double dy)
{
	x += dx; y += dy; 
}
diem diem::Timdoixung() const
{
	 return diem(-x == 0 ? x : -x, -y == 0 ? y : -y);
}
double diem::TinhChuvi(const diem& d1, const diem& d2)
{
	if (kiemtratamgiachople(d1, d2)) {
		double a = d1.Tinhkhoangcach(d2);
		double b = d2.Tinhkhoangcach(*this);
		double c = this->Tinhkhoangcach(d1);
		return a + b + c;
	}
	return -1; 
}
double diem::TinhDienTich(const diem& d1, const diem& d2)
{
	if (kiemtratamgiachople(d1, d2)) {
		double a = d1.Tinhkhoangcach(d2);
		double b = d2.Tinhkhoangcach(*this);
		double c = this->Tinhkhoangcach(d1);
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c)); 
	}
	return -1; 
}
string diem::PhanLoaiTamgiac(const diem& d1, const diem& d2) const
{
	string s = "";
	double a = d1.Tinhkhoangcach(d2);
	double b = d2.Tinhkhoangcach(*this);
	double c = this->Tinhkhoangcach(d1);
	if (!kiemtratamgiachople(d1, d2)) s = "Tam giac khong hop le!";
	else if (a == b && b == c)
		s = "Tam giac deu!";
	else if (a == b || b == c || c == a)
	{
		if (abs(a * a + b * b - c * c) <= epsilon || abs(a * a + c * c - b * b) <= epsilon || abs(b * b + c * c - a * a) <= epsilon)
			s = "Tam giac vuong can!";
		else s = "Tam giac can!";
	}
	else if (abs(a * a + b * b - c * c) <= epsilon || abs(a * a + c * c - b * b) <= epsilon || abs(b * b + c * c - a * a) <= epsilon)
		s = "Tam giac vuong!";
	else s = "Tam giac thuong!";
	return s;
}
istream& operator >> (istream& is, diem& d)
{
	d.Nhap();
	return is;
}
ostream& operator<<(ostream& os, const diem& d)
{
	d.Xuat();
	return os;
}
