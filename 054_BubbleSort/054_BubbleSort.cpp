#include <iostream>
#include <string>
using namespace std;

int arr[20];	//deklarasi variabel global array a dengan ukuran 20
int n;	//deklarasi variable global n untuk menyimpan banyaknya elemen array 

void input() { //prosedur untuk input
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";	//output ke layar
		cin >> n;	//input dari pengguna
		if (n <= 20)	//jika n kurang dari atau sama dengan 20
			break;	//keluar dari loop
		else {	//jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";	//output ke layar
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {	//looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";	//output ke layar
		cin >> arr[i];	//output dari pengguna
	}
}

void bubblesortArray() {	//prosedur untuk mengurutkan array dengan metode bubble sort 
	int pass = 1;	//step 1

	do {
		for (int j = 0; j >= n - 1 - pass; j++) {	//step 2
			if (arr[j] > arr[j + 1]) {	//step 3
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;	//step 4

		cout << "\nPass" << pass - 1 << ": ";	//number of pass
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";	//menampilkan data pada number pass
		}
		cout << endl;
	} while (pass <= n - 1);	//step 5
}


int main() {

}