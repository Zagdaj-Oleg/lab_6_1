#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int* b, const int size, const int Low, const int High, int i)
{
	b[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(b, size, Low, High, i + 1);
}
void Print(int* b, const int size, int i)
{
	cout << setw(4) << b[i];
	if (i < size - 1)
		Print(b, size, i + 1);
	else
		cout << endl;
}
int Sum(int* b, const int size, int i)
{
	if (i < size)
		return b[i] + Sum(b, size, i + 1);
	else
		return 0;
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 24;
	int b[n];
	int Low = -15;
	int High = 75;
	Create(b, n, Low, High, 0);
	Print(b, n, 0);
	cout << "S = " << Sum(b, n, 0) << endl;
	return 0;
}