#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int n;

	int ContainerEven = 0; //контейнер, в который будут залетать четные числа
	int ContainerOdd = 0; //контейнер, в который будут залетать нечетные числа

	//задаем массив, заполненный рандомными числами
	cout << "Введите число для вывода массива: " << endl; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] % 2 == 0 ? ContainerEven++ : ContainerOdd++;
	}cout << endl;
	
	int *arrEven = new int[ContainerEven];
	int *arrOdd = new int[ContainerOdd];
	ContainerEven = 0;
	ContainerOdd = 0;
	
	
	for (int i = 0; i < n; i++)
	{
		arr[i] % 2 == 0 ? arrEven[ContainerEven++] = arr[i] : arrOdd[ContainerOdd++] = arr[i];
	}cout << endl;

	//выводим на экран массив
	cout << "Массив, заполненный случайными числами: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	} cout << endl << endl;

	cout << "Массив, заполненный четными числами: " << endl;
	for (int i = 0; i < ContainerEven; i++)
	{
		cout << arrEven[i] << '\t';
	}cout << endl << endl;

	cout << "Массив, заполненный нечетными числами: " << endl;
	for (int i = 0; i < ContainerOdd; i++)
	{
		cout << arrOdd[i] << '\t';
	}cout << endl << endl;
	delete[] arr;
	delete[] arrEven;
	delete[] arrOdd;
}