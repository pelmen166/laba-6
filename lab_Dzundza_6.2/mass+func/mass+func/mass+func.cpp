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

int SwapElement(int A[], int m, int sus) {
	int min;
	if (m == 0) {
		return min;
	}
	else {
		int gg = A[m] % 2;
		if (gg == 0) {
			if (sus > A[m]) {
				sus = A[m];
				min = m;
			}
		}
		m--;
		SwapElement(A, m, sus);
	}
	return min;
} // де m - кількість елементів масива, A[] - масив
// функція міняє місцями найменше число


int main()
{
	srand(time(NULL));
	int SIZE, min;
	cout << "Kilkist elementiv masuva: ";
	cin >> SIZE;
	int* A = new int[SIZE];
	FillArray(A, SIZE, 0);
	cout << "test ";
}

/*	int temp = A[0];
	A[0] = A[min];
	A[min] = temp;*/