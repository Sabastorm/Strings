#include <cstdio>
#include <cstdlib>

int countHi2(char [], int);

int main(void) {
	char z[11];
	scanf("%s", z);
	int r = countHi2(z, 0);
	printf("%d\n", r);
	return EXIT_SUCCESS;
}

int countHi2(char s[], int i) {
	if (s[i] == 0) {
		return 0;
	}
	int hi = s[i] == '1' && s[i+1] == '1' ? 1 : 0;
	
	if (i > 0 && hi == 1 && s[i-1]=='x') {
		hi = 0;
	}
	return hi + countHi2(s, i+1+hi);
}