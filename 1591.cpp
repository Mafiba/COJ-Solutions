#include <cstdio>

int main(){
	int a, b, c, d, e;
	while(scanf("%i %i %i",&a,&b,&c)){
	if(a==0	&&	b==0	&&	c==0)
	break;
		if(a==b	&&	a==c){
			(a==13)	?	printf("*\n")	:	printf("%i %i %i\n",a+1, b+1, c+1);
	}
		else if(a==b||a==c||b==c){
			if(a==b){
			d=a;
			e=c;
		}
		else if(a==c){
			d=a;
			e=b;
		}
		else if(b==c){
			d=b;
			e=a;
		}
		if(e==13){
			e=1;
			printf("%i %i %i\n", e, d+1, d+1);
		}
		else if(e+1==d){
			if(d==13)
			printf("1 1 1\n");
		else{
			e+=2;
			printf("%i %i %i\n", d, d, e);
		}
	}
		else
		(e+1>d)?printf("%i %i %i\n", d, d, e+1):printf("%i %i %i\n", e+1, d, d);
}
 else
		printf("1 1 2\n");
	
}
return 0;
}
