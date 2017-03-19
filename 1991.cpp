#include <cstdio>
#include <cstring>
using namespace std;

int main(){
char a[41];
int b,c,d=0,e=0,f=0,g=0,h=0,k=0,l=0,m=0,n;
scanf("%i",&b);
for (int i=1;i<=b;i++){
	d=e=f=g=h=k=l=m=0;
scanf("%i",&n);
scanf("%s",a);
getchar();
c=strlen(a);
for(int j=0;j<c;j++){
	if(j!=0){
if(a[j]=='T'&&a[j-1]=='T'&&a[j+1]=='T')
m++;
else if(a[j]=='T'&&a[j-1]=='T'&&a[j+1]=='H')
d++;
else if(a[j]=='H'&&a[j-1]=='T'&&a[j+1]=='T')
e++;
else if(a[j]=='H'&&a[j-1]=='T'&&a[j+1]=='H')
f++;
else if(a[j]=='T'&&a[j-1]=='H'&&a[j+1]=='T')
g++;
else if(a[j]=='T'&&a[j-1]=='H'&&a[j+1]=='H')
h++;
else if(a[j]=='H'&&a[j-1]=='H'&&a[j+1]=='T')
k++;
else if(a[j]=='H'&&a[j-1]=='H'&&a[j+1]=='H')
l++;
	}
}
printf("%i %i %i %i %i %i %i %i %i\n",n,m,d,e,f,g,h,k,l);
}
return 0;
}
