#include <iostream>
#include<time.h>

using namespace std;

void GetRandomNumber(int min, int max, int arr[]) {
	for (int i = 0; i < 22; i++) {
		int num = min + rand() % (max - min + 1);
		arr[i] = num;
	}
}

int Kruteruy(int A[]) {
	int sum = 0;
	for (int i = 0; i < 22; i++) {
		if (A[i] > 0) {
			int chek = (A[i] % 5);
			if (chek == 0) {
				sum += A[i];
				A[i] = 0;
			}
		}
	}
	return sum;
}

int numb(int A[]) {
	int sum = 0;
	for (int i = 0; i < 22; i++) {
		if (A[i] > 0) {
			int chek = (A[i] % 5);
			if (chek == 0) {
				sum += 1;
			}
		}
	}
	return sum;
}

void print(int A[]) {
	for (int i = 0; i < 22; i++)
	{
		cout << A[i] << ' ';
	}
	cout << endl;
}


int main()
{
	int arr[22], a = 0;

	srand(time(NULL));

	GetRandomNumber(-40, 50, arr);

	print(arr);
	cout << "Kilkict zaminenuh chusel: " << numb(arr) << endl;
	cout << "Suma chusel: " << Kruteruy(arr) << endl;
	print(arr);
}