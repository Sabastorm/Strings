#include <cstdio>
#include <cstdlib>

void shiftLeft(char [], int);
void nox(char [], int);

int main(void) {
	char s[10+1];
	scanf("%s", s);
	nox(s, 0);
	printf("%s\n", s);
	return EXIT_SUCCESS;
}

void nox(char z[], int i) {
	if (z[i] == 0) {
		return;
	}
	if (z[i] == 'x') {
		shiftLeft(z, i);
		nox(z, i);
	} else {
		nox(z, i+1);
	}
}

void shiftLeft(char z[], int i) {
	if (z[i] == 0) {
		return;
	}
	z[i] = z[i+1];
	shiftLeft(z, i+1);
}