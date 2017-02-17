#include <cstdio>
using namespace std;

int main(){
	int t, ng, nm, a=0,b,c, d=0, e, f, g=0, h=0;
	scanf("%i",&t);
	while (t--){
		a=d=g=h=0;
		scanf("%i %i",&ng, &nm);
		for(a;a<ng;a++){
			scanf("%i",&b);
			c=b;
			if(d<c)
			d=c;
		}
		for(h;h<nm;h++){
			scanf("%i",&e);
			f=e;
			if(g<f)
			g=f;
	}
	if(d==g||g<d)
	printf("Godzilla\n");
	else if(g>d)
	printf("MechaGodzilla\n");
	else
	printf("uncertain\n");
}
return 0;
}
