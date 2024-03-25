// soal tipe nomor 1
// 
// nama:muhammadRayhanWidayat
// nim:20230140152
// kelas:D
// matkul:algoritma
//
//1.insertion sort bekerja dngan mengurutkan dari besar ke kecil atau dari kecil ke besar
//misal kita meiliki data 7,5,4,3,6 dan mencari data urut dari yang terkecil,
// maka pada tahap awal 7 akan dibandingkan dengan 5, karena 5 lebih kecil daripada
// 7, maka 7 akan ditempatkan di variabel temporary dan 5 akan mengambil tempat index 7
// setelah itu angka 5 dari variabel temporary akan mengambil tempat index dari angka 7 tadi
// 
//2.selection sort membandingkan dan menukar nilai dengan  membuat 2 buah variabel misal i dan j 
// mereka memeiliki data 5,2,6,7,3 maka fase pertama j akan menetap di index pertama yang memiliki angka 5
// lalu i akan berjalan di index selanjutnya untuk mencari angka yang lebih kecil jika menemukan angka yang
// lebih kecil maka angka dari index yang didiami variabel j akan ditukar dengan yang tadi angkanya lebih kecil
//
// 
// 3.untuk mengetahui jumlah langkah yang dilakukan adalah dengan mengitung jumlah data dikurangi 1 hal ini terjadi
// karena misalkan data yang kita punya adalah 5 maka jumlah langkah dihitung dari variabel pertama menuju akhir yang jika
// dihitung berjumlah 4
// 
// 4.


#include <iostream>
using namespace std;

int rayhan[52];
int n;

void input() {
	while (true)
	{
		cout << "masukan jumlah Data pada array:";
		cin >> n;
		if (n <= 20) {
			break;
		}
		else {
			cout << "\nArray yang ada masukan maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << ":" << endl;
		cin >> rayhan[i];
	}

}
void algoritma() {
	int min_index;
	int temp;
	int i, j;
	for (j = 0; j <= n - 2; j++) {
		min_index = j;
		for (i = j + 1; i <= n - 1; i++) {
			if (rayhan[i] < rayhan[min_index]) {
				min_index = i;
			}
		}
		temp = rayhan[j];
		rayhan[j] = rayhan[min_index];
		rayhan[min_index] = temp;

	}
}


void display() {
	cout << endl;
	cout << "\n============================" << endl;
	cout << "elemen array yang telah tersusun" << endl;
	cout << "\n============================" << endl;

	for (int j = 0; j < n; j++) {
		cout << rayhan[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
	algoritma();
	display();

}

