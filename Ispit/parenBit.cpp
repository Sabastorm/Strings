#include <cstdio>
#include <cstdlib>

void parenBit(char [], int, char[], int);

int main(void) {
	char x[11], y[11];
	scanf("%s", x);
	parenBit(x, 0, y, 0);
	printf("%s\n", y);
	return EXIT_SUCCESS;
}
// abc(def)ghi -> (def)
void parenBit(char x[], int i, char y[], int j) {
	if (x[i-1] == ')') {
		y[j] = 0;
		return;
	}
	if (x[i] == '(' || j > 0) {
		y[j++] = x[i];
	}
	parenBit(x,i+1,y,j);
}