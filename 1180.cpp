#include <cstdio>

int uno(int a){
	int cont=0;
	if(a<1)
	return 1;
	else if(a>1){
	for(a;a>1;a--)
	cont++;
	return (cont*-1);
}
else
return 0;
}

int dos(int a){
	int cont=0;
	if (a<2){
			for(a;a<2;a++)
	cont++;
	return cont;
	}
	else if(a>2){
			for(a;a>2;a--)
	cont++;
	return (cont*-1);
	}
	else
	return 0;
}

int ocho(int a){
	int cont=0;
	if (a<8){
			for(a;a<8;a++)
	cont++;
	return cont;
	}
	else if(a>8){
			for(a;a>8;a--)
	cont++;
	return (cont*-1);
	}
	else
	return 0;
}

void impresion(int b, int c, int d, int e, int f, int g){
	printf("%i %i %i %i %i %i\n",b,c,d,e,f,g);
}

int main(){
int a, b, c, d, e, f, g;
scanf("%i",&a);
while(a--){
	scanf("%i %i %i %i %i %i",&b,&c,&d,&e,&f,&g);
	b=uno(b);
	c=uno(c);
	d=dos(d);
	e=dos(e);
	f=dos(f);
	g=ocho(g);
	impresion(b,c,d,e,f,g);
}
return 0;
}
