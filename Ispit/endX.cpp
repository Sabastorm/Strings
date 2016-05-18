#include <cstdlib>
#include <cstdio>

int findNoX(char [], int);
void endX(char [], int);

int main(void) {
	char s[11];
	scanf("%s", s);
	endX(s, 0);
	printf("%s\n", s);
	return EXIT_SUCCESS;
}

void endX(char s[], int i) {
	if (s[i]==0) {
		return;
	}
	if (s[i]=='x') {
		int j = findNoX(s, i);
		if (j != -1) {
			char t = s[i];
			s[i] = s[j];
			s[j] = t;
		}
	}
	endX(s, i+1);
}

int findNoX(char s[], int i) {
	if (s[i]==0) {
		return -1;
	}
	if (s[i]!='x') {
		return i;
	}
	return findNoX(s, i+1);
}