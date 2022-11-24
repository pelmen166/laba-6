#include <iostream>
#include <time.h>

using namespace std;

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

int SumDodMas(int A[], int SIZE, int tmp, int i, int tmp1) {
	if (i == SIZE) {
		return tmp;
	}
	else {
		if (A[i] > 0) {
			if (A[i + 1] >= 0 || A[i-1] > 0) {
				if (i == SIZE) {
					return tmp;

				}
				else {
					tmp += A[i];
					i++;
					SumDodMas(A, SIZE, tmp, i, tmp1);
				}
			}
		}
		i++;
		SumDodMas(A, SIZE, tmp, i, tmp1);
	}
	return tmp1;
} // де SIZE - кількість елементів масива, A[] - масив
//функція для обчислення суми елементів розташованих між першим і останнім додатними елементами

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

void Nul1(int A[], int SIZE) {
	int tmp;
	for (int q = 0; q < SIZE; q++) { //Перевіряю кожен елемент фкнкції
		if (A[q] == 0) {
			for (long i = q; i < SIZE; ++i) { //Прибираю нуль
				A[i] = A[i + 1];
			}
			int* arr = new int[SIZE] {0};
			for (int i = 0; i < SIZE; i++) { //Переношу нуль в початок
				arr[i + 1] = A[i];
			}
			for (int i = 0; i < SIZE; i++)
			{
				A[i] = arr[i];
			}
		}
	}
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
	cout << "\nNaymenshe chuslo: " << minElem(A, SIZE, 10, 0) << endl;
	cout << "Suma elementiv: " << SumDodMas(A, SIZE, 0, 0, 0) << endl;
}