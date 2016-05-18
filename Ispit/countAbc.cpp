#include <cstdio>
#include <cstdlib>

int countAbc(char [], int);

int main(void) {
	char e[11];
	scanf("%s", e);
	int r = countAbc(e, 0);
	printf("%d\n", r);
	return EXIT_SUCCESS;
}

int countAbc(char s[], int i) {
	if (s[i+2] == 0) {
		return 0;
	}
	int je = (s[i]=='a'&&s[i+1]=='b'&&
			  (s[i+2]=='c'||s[i+2]=='a'))?1:0;
	int pomak = (je == 1) ? 3 : 1;
	return je + countAbc(s, i+pomak);
}