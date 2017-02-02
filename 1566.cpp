#include <cstdio>

int main(){
	int a, b=0,c,d=0;
	do{
		b=0;
	scanf("%i",&a);
	c=a;
	while(c>0){
	d=c*c;
	b+=d;
	c--;
}
if(a!=0)
printf("%i\n",b);
}
while(a!=0);
return 0;
}
