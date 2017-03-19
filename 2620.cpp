#include <cstdio>
int main(){
	char a[10000];
	long long i=0,c;
	scanf("%lli",&c);
	c*=4;
	for(i;i<c;i++){
		a[i]='a';
	}
	printf("A%sh",a);
	return 0;
}
