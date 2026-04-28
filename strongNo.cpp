#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	if (n < 0) {
		cout << "Strong number is defined for non-negative integers." << endl;
		return 0;
	}

	int original = n;
	int sum = 0;

	if (n == 0) {
		sum = 1;
	} else {
		while (n > 0) {
			int digit = n % 10;
			int fact = 1;

			for (int i = 1; i <= digit; i++) {
				fact *= i;
			}

			sum += fact;
			n /= 10;
		}
	}

	if (sum == original) {
		cout << original << " is a Strong number." << endl;
	} else {
		cout << original << " is not a Strong number." << endl;
	}

	return 0;
}