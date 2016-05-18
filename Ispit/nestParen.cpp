#include <cstdio>
#include <cstdlib>

bool nestParen (char [], int, int);

int main(void) {
	char s[11];
	scanf("%s", s);
	bool r = nestParen (s, 0, 0);
	printf("%d\n", (int)r);
	return EXIT_SUCCESS;
}

bool nestParen (char x[], int i, int z) {
	if (x[i] == 0 || z < 0) {
		return z == 0;
	}
	if (x[i] == '(') {
		z++;
	} else if (x[i] == ')') {
		z--;
	}
	return nestParen(x, i+1, z);
}