#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int tamano, cont=0;
	char car[1000];
	gets(car);
	tamano=strlen(car);
	for(int i=0;i<tamano;i++){
	if(car[i]=='B')
	cont+=2;
	else if(car[i]=='R'||car[i]=='O'||car[i]=='P'||car[i]=='A'||car[i]=='D'||car[i]=='Q')
	cont++;	
	else
	cont=cont;
	}
	printf("%i\n",cont);
	return 0;
}
