#include <cstdio>

int main(){
	long a,b;
	scanf("%li %li",&a, &b);
	printf("%li\n",((a+b)+(a-b)+(b+a)+(b-a)));
	return 0;
}
