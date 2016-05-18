#include <cstdio>
#include <cstring>
#include <cstdlib>

int rec(char [], char [], int);

int main(){
    char rijec[101];
    char trazena[101];
    scanf("%s%s", rijec, trazena);
    int a = rec(rijec, trazena, 0);
    printf("%d", a);
}

int rec(char rijec[],char trazena[], int i){
    
    if ((rijec[i]==trazena[0] && rijec[i+1]==trazena[1])&&rijec[i+2]==trazena[2]){
       return 1+rec(rijec, trazena, i+1);           
    }
    return 0+rec(rijec, trazena, i+1);
}