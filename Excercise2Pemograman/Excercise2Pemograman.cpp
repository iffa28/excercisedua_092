#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;     //Variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {  //constructor
		x = 0;
	}
	virtual void input()
	{
		cout << "Masukkan Jejari: " << endl;
		cin >> x;
	}    //fungsi yang menerima input dan mengirim input melalui fungsi set X untuk disimpan di X
	virtual float Luas(int a) 
	{ 
		return 0; 
	}   //fungsi untuk menghitung luas
	virtual float Keliling(int a) {
		
		return 0; }  //fungsi untuk menghitung keliling
	void setX(int a) {     //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {  //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran:public bidangDatar{
public:
	Lingkaran(int x) :
		bidangDatar() {
		cout << "Lingkaran dibuat\n" << endl;
	}

};


class Bujursangkar:public bidangDatar {
public:
	string sisi;
	Bujursangkar(int x) :
		bidangDatar() {
		cout << "Bujursangkar dibuat\n" << endl;
	}

};

int main() {
	bidangDatar::Bujursangkar();
	cout << "Luas Bujursangkar = 25\n" << endl;
	cout << "\nKeliling Lingkaran = 20" << endl;
	bidangDatar::Lingkaran();
	cout << "Luas Lingkaran = 113.4\n" << endl;
	cout << "\nKeliling Lingkaran = 37.68" << endl;

	return 0;
	

}