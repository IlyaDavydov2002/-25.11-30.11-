#include <iostream>

using namespace std;

void M(bool a[], int n)
{
	int i, k;
	for (k = 2; k <= n; k++) a[k] = true;
	k = 2;
	while (k * k <= n)
	{
		i = k * k;
		if (a[k])
			while (i <= n)
			{
				a[i] = false;
				i = i + k;
			}
		k++;
	}
	for (k = 2; k <= n; k++)
		if (a[k] == false) cout << " " << k << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "n = "; cin >> n;
	bool *a = new bool[n];
	M(a, n);
	return 0;
}