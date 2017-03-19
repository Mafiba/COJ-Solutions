#include <cstdio>
using namespace std;

int main(){
int a,c,d=0, e,f;
char b;
scanf("%i",&a);
while(a--){
	getchar();
scanf("%c %i",&b,&c);
if(b=='A')
d=1;
else if(b=='B')
d=2;
else if(b=='C')
d=3;
else if(b=='D')
d=4;
else if(b=='E')
d=5;
else if(b=='F')
d=6;
else if(b=='G')
d=7;
else if(b=='H')
d=8;
else if(b=='I')
d=9;
e=((d*10)+c);
f=e*2;
printf("%i%i%i%i%i\n",d,c,(d+c),(d*c),f);
}
return 0;
}
