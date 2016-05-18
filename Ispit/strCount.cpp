#include <cstdio>
#include <cstring>
#include <cstdlib>

int rec(char [], char [], int);
int duljinaStringa(char [], int);
int provjera(char [], char [], int, int);

int main() {        
	char rijec[101];
	char trazena[101];
	scanf("%s%s", rijec, trazena);
    int a = rec(rijec, trazena, 0);
    printf("%d", a);
}

int rec(char rijec[],char trazena[], int i) {
    int a = 0;
	if(rijec[i]==0){
		return 0;
	}
	if(provjera(rijec, trazena, i, 0) == duljinaStringa(trazena, 0)) {
	    return a + 1 + rec(rijec, trazena, i+1);
    }
	return a+0+rec(rijec, trazena, i+1);
}


int duljinaStringa(char s[], int i){
    if(s[i]==0){
        return 0;
    }
    return 1+duljinaStringa(s,i+1);
}

int provjera(char rijec[],char trazena[], int pocMjesto, int i){
    if(rijec[pocMjesto+i]==0 || trazena[i]==0){
        return 0;
    }
    if(rijec[pocMjesto+i]==trazena[i]){
        return 1+provjera(rijec,trazena,pocMjesto, i+1);
    }else {
        return 0;
    }
    
}
