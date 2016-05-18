#include <cstdio>
#include <cstdlib>

int substringLen(char [], int, char [], int);
int strDist(char [], int, char [], int, int);

int main(void) {
	char x[101], y[101];
	scanf("%s%s", x, y);
	int r = strDist(x, 0, y, 0, 0);
	printf("%d\n", r);
	return EXIT_SUCCESS;
}

int strDist(char x[], int i, char y[], int a, int b) {
	if (x[i] == 0) {
		return a;
	}
	int subStrLen = substringLen(x, i, y, 0);
	int pomak = 1;
	
	if (subStrLen > 0) {
		pomak = subStrLen;
		b += subStrLen;
		if (b > a) { a = b; }
	} else if (b > 0) {
		b++;
	}
	return strDist(x, i + pomak, y, a, b);
}

int substringLen(char x[], int i, char y[], int j) {
	if (y[j] == 0) {
		return j;
	}
	if (y[j] != x[i]) {
		return 0;
	}
	return substringLen(x, i+1, y, j+1);
}