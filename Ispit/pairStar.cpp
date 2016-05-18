#include <cstdio>
void pairStar(char [], int, char [], int, char);
int main(){
	char s[11], z[20];
	scanf("%s", s);
	pairStar(s, 0, z, 0, 31);
	printf("%s\n", z);
	return 0;
}
void pairStar(char s[], int i, char z[], int x, char y){
	if(s[i]==0){
		z[x]='\0';
		return;
	}
	else if(s[i]==y){
		z[x]='*';
		z[x+1]=s[i];
		x++;
	}
	else z[x]=s[i];
	pairStar(s, i+1, z, x+1, s[i]);
}