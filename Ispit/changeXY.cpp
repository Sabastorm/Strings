#include <cstdlib>
#include <cstdio>

void changeXY(char [], int);

int main(void) {
	char s[11];
	scanf("%s", s);
	changeXY(s, 0);
	printf("%s\n", s);
	return EXIT_SUCCESS;
}

void changeXY(char s[], int i) {
	if (s[i] == 0) {
		return;
	}
	if (s[i]=='x'){
		s[i] = 'y';
	}
	changeXY(s, i+1);
}