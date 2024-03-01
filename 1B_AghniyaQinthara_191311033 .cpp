#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	int i, j, MatriksA[3][4], MatriksB[3][4];
	int Ulang, Hasil [3][4];
	
	awal:
		
	cout<<"Masukan Nilai Matriks A\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<"Matriks A ["<<i<<"] ["<<j<<"] :"; cin>>MatriksA[i][j];
		}
	}
	cout<<endl;
	cout<<"Masukan Nilai Matriks B\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<"Matriks B ["<<i<<"] ["<<j<<"] :"; cin>>MatriksB[i][j];
		}
	}
	cout<<endl;
		
	cout<<"Matriks A + Matriks B:"<<endl;
	for(int i=0; i<3; i++){
		cout<<"|";
		for(int j=0; j<4; j++){
			Hasil [i][j]=MatriksA[i][j]+MatriksB[i][j];
			cout<<setw(3)<<Hasil [i][j]<<" ";
		}
		cout<<"|	";
		cout<<endl;
	}
	cout<<"\n\nApakah ingin mengulang?\n1.Ya\n2.Tidak\n";
	cin>>Ulang;
	if(Ulang==1){
		goto awal;
	}
	else{
		cout<<"Terimakasih\n";	
	}

	system("pause");
	return 0;
}
