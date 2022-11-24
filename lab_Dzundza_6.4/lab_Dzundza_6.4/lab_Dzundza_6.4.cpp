#include <iostream>
#include <time.h>

using namespace std;

void Print(int A[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << A[i] << ' ';
	}
	cout << endl;
}  // де SIZE - кількість елементів масива, A[] - масив
//функція виводу масиву на екран

void FillArray(int A[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		A[i] = -10 + rand() % (10 + 10 + 1);
	}
} // де SIZE - кількість елементів масива, A[] - масив
// функція заповнення масиву випадковими числами

int SumDodMas(int A[], int SIZE) {
	int temp_beg, temp_end, tmp = 0;
	for (int i = 0; i < SIZE; i++) {
		if (A[i] > 0) {
			if (A[i+1] >= 0){
				for (int q = i; A[q] > 0; q++) {
					tmp += A[q];
					i++;
				}
			}
		}
	}
	return tmp;
} // де SIZE - кількість елементів масива, A[] - масив
//функція для обчислення суми елементів розташованих між першим і останнім додатними елементами

int LowesttNum(int A[], int m) {
	int sus = 10;
	for (int i = 0; i < m; i++) {
		if (sus > A[i]) {
			sus = A[i];
		}
	}
	return sus;
} // де m - кількість елементів масива, A[] - масив
// функція повертає найменше число масиву

void Nul1(int A[], int SIZE) {
	int tmp;
	for (int q = 0; q < SIZE; q++) { //Перевіряю кожен елемент фкнкції
		if (A[q] == 0) {
			for (long i = q; i < SIZE; ++i) { //Прибираю нуль
				A[i] = A[i + 1];
			}
			int* arr = new int[SIZE]{0};
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
	FillArray(A, SIZE);
	Print(A, SIZE);
	cout << "Naymenshe chuslo: " << LowesttNum(A, SIZE) << endl;
	cout << "Suma elementiv: " << SumDodMas(A, SIZE) << endl;
	Nul1(A, SIZE);
	Print(A, SIZE);
}