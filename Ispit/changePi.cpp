#include <cstdio>
#include <cstdlib>

void changePi(char [], int, char [], int);

int main(void) {
	char x[11], y[21];
	scanf("%s", x);  //pixpi
	changePi(x, 0, y, 0);
	printf("%s\n", y);
	return EXIT_SUCCESS;
}

void changePi(char x[], int i, char y[], int j) {
	if (x[i] == 0) {
		y[j] = 0; //y[j] = '\0'; //y[j] = x[i];
		return;
	}
	if (x[i] == 'p' && x[i+1] == 'i') {
		y[j]   = '3'; 
		y[j+1] = '.';
		y[j+2] = '1';
		y[j+3] = '4';
		changePi(x, i+2, y, j+4);
	} else {
		y[j] = x[i];
		changePi(x, i+1, y, j+1);
	}
}