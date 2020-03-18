#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n, number;
	while (scanf("%d\n", &n) != EOF) {
		if (n == 0 || n > 1000)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%d ", &number);
			int flag = 0, j;
			for (j = 1; j * j <= number; j++) {

				if (number % j == 0)
					flag += 2;

			}
			if (j * j == number)
				flag++;
			printf("%d\n", flag);
		}

	}
	return 0;
}