#include <iostream>

using namespace std;

int main ()
{
	int a, pilihan;
	float r, Luas, Keliling, C, F;
	float phi=3.14;
	
	cout<<"Program\nBy Aghniya Qinthara\n";
	cout<<"\n";
	cout<<"Menu Pilihan:\n";
	cout<<"1. Menghitung luas lingkaran\n2. Mengkonversi suhu Celcius ke Fahrenheit\n3. Mendeteksi bilangan ganjil atau genap\n4. Keluar\n";
	cout<<"\n";
	
	ulangi:
		
	cout<<"Masukan pilihan anda:";
	cin>>pilihan;
	
	switch (pilihan){
		case 1:
			cout<<"\nMenghitung luas lingkaran\n";
			cout<<"Masukan jari-jari=";
			cin>>r;
			Luas=phi*r*r;
			Keliling=2*phi*r;
			cout<<"Luas lingkaran="<<Luas<<endl;
			cout<<"Keliling lingkaran="<<Keliling<<endl;
			cout<<"\n";
		
		goto ulangi;
		break;
		
		case 2:
			cout<<"\nMengkonversi suhu Celcius ke Fahrenheit\n";
			cout<<"Masukan nilai suhu Celcius:";
			cin>>C;
			F=(1.8*C)+32;
			cout<<"Nilai suhu Fahrenheit="<<F<<endl;
			cout<<"\n";
			
		goto ulangi;
		break;
		
		case 3:
			cout<<"\nMendeteksi bilangan ganjil atau genap\n";
			cout<<"Masukan bilangan:";
			cin>>a;
			if(a%2==0){
				cout<<"Bilangan genap\n";
			}
			else {
				cout<<"Bilangan ganjil\n";
			}
			cout<<"\n";
		goto ulangi;
		break;
		
		case 4:
			cout<<"Keluar";
			cout<<endl;
		break;
		default:
		goto ulangi;	
	}
return 0;
}

