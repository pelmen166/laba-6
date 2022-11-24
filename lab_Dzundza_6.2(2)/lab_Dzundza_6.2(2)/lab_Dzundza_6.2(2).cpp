#include <iostream>
#include<time.h>

using namespace std;

void FillArray(int A[], int SIZE, int i) {
	if (i == SIZE) {
		return;
	}
	else {
		A[i] = -40 + rand() % 91;
		i += 1;
		FillArray(A, SIZE, i);
	}
}//функція наповнює масив випадковими числами

void print(int A[], int SIZE, int i) {
	if (i == SIZE) {
		return;
	}
	else {
		cout << A[i] << ' ';
		i++;
		print(A, SIZE, i);
	}
}  // де SIZE - кількість елементів масива, A[] - масив
//функція виводу масиву на екран

int minElem(int A[], int m, int sus, int i) {
	if (i == m) {
		return sus;
	}
	else {
		if (sus > A[i]) {
			sus = A[i];
		}
		i += 1;
		minElem(A, m, sus, i);
	}
} // де m - кількість елементів масива, A[] - масив
// функція повертає мінімальне число масиву

int posMin(int A[], int size, int i, int pos, int min) {
	if (i == size) {
		return pos;
	}
	else {
		if (min == A[i]) {
			pos = i;
		}
		i++;
		posMin(A, size, i, pos, min);
	}
}
//позиція найменшого числа

void Swapp(int A[], int min, int temp) {
	temp = A[0];
	A[0] = A[min];
	A[min] = temp;
}


int main()
{
	srand(time(NULL));
	int SIZE;
	cout << "Kilkist elementiv masuva: ";
	cin >> SIZE;
	int* A = new int[SIZE];
	FillArray(A, SIZE, 0);
	print(A, SIZE, 0);
	cout << endl;
	Swapp(A, posMin(A, SIZE, 0, 0, minElem(A, SIZE, 10, 0)), 0);
	print(A, SIZE, 0);
}
