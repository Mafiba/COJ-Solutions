#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int casos, pisos, r, h;
	double v, res=0;
	scanf("%i",&casos);
	while (casos--){
		pisos=r=h=v=res=0;
		scanf("%i",&pisos);
		while (pisos--){
			scanf("%i %i", &r, &h);
			v=M_PI*pow(r,2)*h;
			res+=v;
		}
		printf("%.2lf\n",res);
	}
	return 0;
}
