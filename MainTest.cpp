#include "diem3C.h"
void main()
{
	cout << "So diem 3C hien tai: " << Diem3C::getDem() << endl;
	Diem3C d1, d2(1), d3(1, 2), d4(1, 2, 3), * d5 = new Diem3C;
	cout << "So diem 3C hien tai: " << Diem3C::getDem() << endl;
	cout << "d1: " << d1 << "\nd2: " << d2 << "\nd3: " << d3 << "\nd4: " << d4 << "\nd5: " << *d5 << endl;
	cin >> d1;
	cout << "d1_moi: " << d1 << endl; 
	//
	if (d1.diem::kiemtratrung(d4))
		cout << "d1 va d4 trung hoanh do va tung do\n"; 
	else
	{
		cout << "d1 va d4 khong trung hoanh do va tung do\n"; 
	}
	// 
	if (d1.kiemtratrung(d4)) cout << "d1 va d4 trung hoanh do , cao do va tung do\n";
	else cout << "d1 va d4 khong trung hoanh do , cao do va tung do\n";
	delete d5;
	cout << "So diem 3C hien tai: " << Diem3C::getDem() << endl;
}