#include <cstdio>
#include <cstdlib>

bool strCopies(char [], int, char [], int);
bool isSame(char [], int, char [], int);

int main(void) {
	char x[11], y[11];
	int min;
	scanf("%s%s%d", x, y, &min);
	bool r = strCopies(x, 0, y, min);
	printf("%d\n", r);
	return EXIT_SUCCESS;
}

bool strCopies(char x[], int i, char y[], int min) {
	if (x[i] == 0) {
		return min <= 0;
	}
	if (x[i] == y[0]) {
		if (isSame(x, i, y, 0)) {
			min--;
		}
	}
	return strCopies(x, i+1, y, min);
}

bool isSame(char x[], int i, char y[], int j) {
	if (y[j] == 0) {
		return true;
	}
	if (y[j] != x[i]) {
		return false;
	}
	return isSame(x, i+1, y, j+1);
}