#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main(int argc, char *argv[])
{
	float x1,y1,x2,y2,A,B,Jarak;
	Jarak=0;
	cout<<" Menghitung jarak 2 titik "<<endl;
	cout<<" ======================== "<<endl<<endl;
	cout<<" Masukkan titik A (x1) : "; cin>> x1;
	cout<<" Masukkan titik A (y1) : "; cin>> y1;
	cout<<" Masukkan titik B (x2) : "; cin>> x2;
	cout<<" Masukkan titik B (y2) : "; cin>> y2;
	B =(x2-x1)*(x2-x1);
	A =(y2-y1)*(y2-y1);
	Jarak =sqrt(A+B);
	cout<<endl;
	cout << "Jarak titik A ke B = "<<Jarak << endl;
	cout<<endl;
	system("PAUSE");
	return 0;
}
