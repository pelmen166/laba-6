#include <iostream>
#include <time.h>

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

int SumMas(int A[], int size, int i, int temp) {
	if (i == size) {
		return temp;
	}
	else {
		temp += A[i];
		i++;
		SumMas(A, size, i, temp);
	}
} // де size - кількість елементів масива, A[] - масив
//функція для обчислення суми елементів масиву

int main()
{
	srand(time(NULL));
	int size;
	cout << "Kilkist elementiv masuva: ";
	cin >> size;
	int* A = new int[size];
	FillArray(A, size, 0);
	print(A, size, 0);
	cout << '\n' << SumMas(A, size, 0, 0) << endl;
}