#include <iostream>
using namespace std;
int main() {
	cout << "CHUONG TRINH TINH TONG HAI SO " << endl;
	int so1, so2;	//khai bao bien so1 va so2 kieu so nguyen
	int tong;
	cout << "--------------\nnhap so vao\n \t \n \t |vi tri 1|" << endl;
	cout << "nhap so1:"; cin >> so1;
	cout << "--------------\nnhap so vao\n \t \n \t |vi tri 2|" << endl;
	cout << "nhap so2:"; cin >> so2;
	tong = so1 + so2;
	cout << "Tong hai so: " << so1 << "+" << so2 << " = " << tong << endl;
	cout << "Tong hai so: " << so1 << "+" << so2 << " = " << so1 + so2;
	return 0;
}