#include <cstdio>
#include <cstdlib>

int count11(char [], int);

int main(void) {
	char z[11];
	scanf("%s", z);
	int r = count11(z, 0);
	printf("%d\n", r);
	return EXIT_SUCCESS;
}

int count11(char s[], int i) {
	if (s[i] == 0) {
		return 0;
	}
	int _11 = s[i] == '1' && s[i+1] == '1' ? 1 : 0;
	return _11 + count11(s, i+1+_11);
}