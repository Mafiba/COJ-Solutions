#include <cstdio>

int main(){
	char forma[10];
	int base, altura;
	scanf("%s",forma);
	if(forma[0]=='r'){
		scanf("%i %i",&base,&altura);
		printf("%i\n",base*altura);
	}
	else if(forma[0]=='s'){
		scanf("%i",&base);
		printf("%i\n",base*base);
	}
	return 0;
}
