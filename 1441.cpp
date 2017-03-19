#include <cstdio>
#include<cmath>
#include <algorithm>
using namespace std;

int main(){
	int a[10];
	while(a[0]!=0){
	for (int i=0; i<3;i++){
		scanf("%i",&a[i]);
		if(a[0]==0)
	break;
	}
	if(a[0]==0)
	break;
	sort(a,a+3);
	(sqrt(pow(a[0],2)+pow(a[1],2))==a[2])?printf("right\n"):printf("wrong\n");
}
return 0;
}
