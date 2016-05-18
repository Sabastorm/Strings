#include <cstdio>
#include <cstdlib>

void stringClean(char [], int);
void shiftLeft(char [], int);

int main(void) {
	char x[11];
	scanf("%s", x);
	stringClean(x, 0);
	printf("%s\n", x);
	return EXIT_SUCCESS;
}

void stringClean(char s[], int i) {
	if (s[i] == 0) {
		return;
	}
	if (s[i] == s[i+1]) {
		shiftLeft(s, i);
		stringClean(s, i);
	} else {
		stringClean(s, i+1);
	}
}

void shiftLeft(char x[], int i) {
	if (x[i] == 0) {
		return;
	}
	x[i] = x[i+1];
	shiftLeft(x, i+1);
}