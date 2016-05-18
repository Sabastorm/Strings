#include <cstdio>
#include <cstdlib>

int countA(char [], int);		//najava fije

int main(void) {
	char x[10];				//alociraj 10 slova za x
	scanf("%s", x);			//ucitaj x
	int len = countA(x, 0);	//pozovi fiju sa stringom i kreni od indexa 0
	printf("%d\n", len);	//ispisi varijablu len
	return EXIT_SUCCESS;	//kraj programa
}

int countA(char z[], int i) {
	if (z[i] == 0) {	//ako je i-to slovo null znak
		return 0;		//znaci da nema vise slova
	}
	int jelA = z[i] == 'a' ? 1 : 0;	//ako je slovo a doprinosi 1, inace 0
	return jelA + countA(z, i+1); //inace doprinos je jelA + ostali sa sljedecim indeksom
}