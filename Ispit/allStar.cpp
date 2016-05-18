#include <cstdlib>
#include <cstdio>

void allStar(char [], int, char [], int);

int main(void) {
	char s[11], z[21];
	scanf("%s", s);
	allStar(s, 0, z, 0);
	printf("%s\n", z);
	return EXIT_SUCCESS;
}

void allStar(char x[], int i, char y[], int j){
	if (x[i] == 0) {
		y[j-1] = '\0'; //y[j] = 0;
		return;
	}
	y[j] = x[i];
	y[j+1] = '*';
	allStar(x, i+1, y, j+2);
}