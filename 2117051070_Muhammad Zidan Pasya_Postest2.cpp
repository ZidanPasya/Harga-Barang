#include <iostream>
using namespace std;
int main(){
	
	/*
	Muhammad Zidan Pasya
	2117051070
	*/
	
	//tipe data
	int Harga_Sebuah_Pena;
	int Harga_Sebuah_Buku;
	int Harga_Sebuah_Penghapus;
	int Harga_Sebuah_Penggaris;
	int jumlah_pena = 21;
	int jumlah_buku = 5;
	int jumlah_penghapus = 10;
	int jumlah_penggaris = 70;
	
	//input
	cin >> Harga_Sebuah_Pena;
	cin >> Harga_Sebuah_Buku;
	cin >> Harga_Sebuah_Penghapus;
	cin >> Harga_Sebuah_Penggaris;
	Harga_Sebuah_Pena *= jumlah_pena;
	Harga_Sebuah_Buku *= jumlah_buku;
	Harga_Sebuah_Penghapus *= jumlah_penghapus;
	Harga_Sebuah_Penggaris *= jumlah_penggaris;
	
	//output
	cout<< endl
		<< "Harga " << jumlah_pena << " buah pena = Rp." << Harga_Sebuah_Pena << endl
		<< "Harga " << jumlah_buku << " buah buku = Rp." << Harga_Sebuah_Buku << endl
		<< "Harga " << jumlah_penghapus << " buah penghapus = Rp." << Harga_Sebuah_Penghapus << endl
		<< "Harga " << jumlah_penggaris << " buah penggaris = Rp." << Harga_Sebuah_Penggaris << endl;
	return 0;
}
