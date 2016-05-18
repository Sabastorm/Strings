#include <cstdio>
#include <cstdlib>

int countHi(char [], int);

int main(void) {
	char z[11];
	scanf("%s", z);
	int r = countHi(z, 0);
	printf("%d\n", r);
	return EXIT_SUCCESS;
}

int countHi(char s[], int i) {
	if (s[i] == 0) {
		return 0;
	}
	int hi = s[i] == 'h' && s[i+1] == 'i' ? 1 : 0;
	return hi + countHi(s, i+1+hi);
}