#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int mas[], const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = Low + rand() % (High - Low + 1);
	}
}

void Print(int mas[], const int n)
{
	cout << "a[ ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "]" << endl;
}

int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0 || (i % 2) == 0)
			s += mas[i];
	}
	return s;
}

int Kil(int mas[], const int n)
{
	int kil = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0 || (i % 2) == 0)
			kil += 1;
	}
	return kil;
}

int Zam(int mas[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0 || (i % 2) == 0)
			mas[i] = 0;
	}
	return *mas;
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 26;
	int a[k];

	int Low = -39;
	int High = 19;

	Create(a, k, Low, High);
	Print(a, k);

	cout << "Sum = " << Sum(a, k) << endl;
	cout << "k = " << Kil(a, k) << endl;

	Zam(a, k);
	Print(a, k);

	return 0;
}