#include <iostream>
using namespace std;

int main(){
	long long totaldetik;
	int jam,menit,detik;
	
	cout<<"masukan bilangan : "<<endl;
	cin>>totaldetik;
	
	jam = totaldetik / 3600;
	long long sisadetik = totaldetik % 3600;
	
	menit = sisadetik / 60;
	detik = sisadetik % 60;
	
	cout<<"jadi hasil konversi adalah :"<<jam<<"jam"<<menit<<"menit"<<detik<<"detik"<<endl;
	return 0;
}

