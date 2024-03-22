#include <iostream>
using namespace std;

int i, temp, j;
int n;
int arr[11];

void input() {
	while (true)
	{
		cout << "Masukkan banyak element pada array: ";
		cin >> n;
		if (n <= 11) {
			break;
		}
		else
		{
			cout << "\nArray ddapat mempunyai maksimal 20 element/n";
		}
	}

	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionSort() {
	for (i = 1; i <= n - 1; i++)//step 1
	{
		temp = arr[i];// step 2
		j = 1 - 1; // step 3

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];// step 4 A
			j = j - 1; // STEP 4 B
		}
		arr[j + 1] = temp;
	}
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element attay yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}


int main() {
	input();
	insertionSort();
	display();
	system("pause");

	return 0;
}

   