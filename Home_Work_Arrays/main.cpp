#include <iostream>
using namespace std;
//#define SHIFT_LEFT
#define SHIFT_RIGHT
void main() {
	setlocale(LC_ALL, "");
	const int size = 10;
	int arr[size];
	int arr_save[1];
	int shift;
	cout << "Введите массив: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#ifdef SHIFT_LEFT
	cout << "Введите на слько элементов сдвинуть массив влево: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		arr_save[0] = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[(i + 1)];
		}
		arr[(size - 1)] = arr_save[0];
	}
#endif // SHIFT_LEFT
#ifdef SHIFT_RIGHT
	cout << "Введите на слько элементов сдвинуть массив вправо: "; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		arr_save[0] = arr[(size - 1)];
		for (int i = (size - 1); i >= 0; i--)  
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = arr_save[0];
	}
#endif // SHIFT_RIGHT
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}