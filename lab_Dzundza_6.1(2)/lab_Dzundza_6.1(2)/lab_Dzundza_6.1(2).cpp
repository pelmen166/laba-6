#include <iostream>
#include<time.h>

using namespace std;

void FillArray(int A[], int i) {
	if (i == 22) {
		return;
	}
	else {
		A[i] = -40 + rand() % 91;
		i += 1;
		FillArray(A, i);
	}
}//функція наповнює масив випадковими числами

int Kruteruy(int A[], int i, int sum) {
	if (i == 22) {
		return sum;
	}
	else
	{
		if (A[i] > 0) {
			int chek = (A[i] % 5);
			if (chek == 0) {
				sum += A[i];
				A[i] = 0;
			}
		}
		i += 1;
		Kruteruy(A, i, sum);
	}
}

int numb(int A[], int i, int sum) {
	if (i == 22) {
		return sum;
	}
	else{
		if (A[i] > 0) {
			int chek = (A[i] % 5);
			if (chek == 0) {
				sum += 1;
			}
		}
		i += 1;
		numb(A, i, sum);
	}
}

void print(int A[], int i) {
	if (i == 22) {
		return;
	}
	else {
		cout << A[i] << ' ';
		i += 1;
		print(A, i);
	}
}  // де SIZE - кількість елементів масива, A[] - масив
//функція виводу масиву на екран



int main()
{
	int arr[22], sum = 0;

	srand(time(NULL));

	FillArray(arr, 0);

	print(arr, 0);
	cout << "\nKilkict zaminenuh chusel: " << numb(arr, 0, sum) << endl;
	cout << "Suma chusel: " << Kruteruy(arr, 0, sum) << endl;
	print(arr, 0);
}