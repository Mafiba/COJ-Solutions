#include <cstdio>

int main(){
	int a,b,c,d=0,e=0;
	scanf("%i",&a);
	while (a--){
		d=0;
		e=0;
		scanf("%i",&b);
		while(b--){
			scanf("%i",&c);
			if (c%2==0)
			d++;
			else if(c%2!=0)
			e++;
		}
			printf("%i even and %i odd.\n",d,e);
	}
	return 0;
}
