#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfTwo(int num)
{
	double intpart; // Data will be ignored
	return num && !modf(log2(num), &intpart);
}

int main() {

	// Search power of two from 0 to 5000
	for (int i = 0; i < 5000;  i++) {
		if (isPowerOfTwo(i)) {
			cout << i << endl;
		}
	}

	return 0;
}

