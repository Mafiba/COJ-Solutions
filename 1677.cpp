#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;


int main(){
int i=0,a,c,d, e[1000],f=0;
char b[99];
scanf("%i",&a);
while(a--){
           f=0;
	getchar();
scanf("%i %i %s",&c, &d, b);
for(i=0;i<c;i++){
scanf("%i",&e[i]);
}
sort(e,e+c);
        if(b[0] == 'i'){
	for(int j=0;j<d;j++){
            f=f+e[j];
            }
}
else{
     c=c-1;
     for(int j=0;j<d;j++){
            f=f+e[c];
            c--;
     }
     }
printf("%i\n",f);
}
return 0;
}

