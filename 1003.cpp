#include <cstdio>
#include<cstring>

using namespace std;

int main(){
    int c=0, b=0, d=0, i=0, j=0, f=0, g=0,a[100][100],e[5];
    scanf("%i",&c);
    while(c--){
		b=d=g=0;
    scanf("%i %i",&b, &d);
	memset(e,0,sizeof(e));
    for(i=0;i<d;i++){
            for(j=0;j<b;j++){
                    scanf("%i",&a[i][j]);
                    }
            }
	for (i=0;i<b;i++){
		for (j=0;j<d;j++){
		e[i]+=a[j][i];
		}
	}
	f=e[0];
	for(i=1;i<b;i++){
		if(e[i]>f){
		f=e[i];
		g=i;
		}
	}
	printf("%i\n",g+1);
}
    return 0;
    }
