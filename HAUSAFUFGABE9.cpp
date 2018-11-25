#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> mas(n * 2);
	mas.assign(n * 2, 1);
	mas[0] = 0;
	mas[1] = 0;
	for (int i = 2; i < n * 2; i++) {
		if (mas[i] == 1) {
			for (int j = i * 2; j < n * 2; j += i) {
				mas[j] = 0;
			}
		}
	}
	for (int i = 2; i < n * 2; i++) {
		if ((mas[i] == 1) && (mas[i * 2 + 1] == 1))
		{
			cout << i << " ";
		}
	}
	return 0;
}
