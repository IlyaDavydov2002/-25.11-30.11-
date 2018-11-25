#include <iostream>

using namespace std;

int main() {
	int n, Eiler;
	cin >> n;
	Eiler = n;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0) {
			while (n % i == 0) {
				n = n / i;
				Eiler = Eiler - Eiler / i;
			}
		}
	if (n > 1) {
		Eiler = Eiler - Eiler / n;
	}
	cout << Eiler;
	return 0;
}
