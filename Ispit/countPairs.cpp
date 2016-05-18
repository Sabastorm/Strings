#include <cstdio>
#include <cstdlib>

int countPairs(char [], int);

int main(void) {
	char x[10];			
	scanf("%s", x);		
	int r = countPairs(x, 0);
	printf("%d\n", r);
	return EXIT_SUCCESS;
}

int countPairs(char d[], int i) {
	if (d[i+2] == 0) {
		return 0 ;
	}
	int pair = d[i] == d[i+2] ? 1 : 0;
	return pair + countPairs(d, i+1);
}
