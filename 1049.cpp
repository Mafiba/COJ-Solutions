#include <cstdio>
using namespace std;
 int main(){
 	int a=0,b=0;
 	scanf("%i",&a);
 	if (a==0)
 	b=1;
 	else if (a<0){
	 while(a!=2){
	 b=b+a;
	 a++;
}
	 }
	 else if(a>0){
	 while(a!=0){
	 b=b+a;
	 a--;
	 }
	 }
	 printf("%i\n",b);
	 return 0;
}
