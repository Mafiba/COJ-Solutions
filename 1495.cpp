#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
int casos, i;
scanf("%i",&casos);
int numero[casos];
for(i=0;i<casos;i++){
scanf("%i",&numero[i]);
}
sort(numero,numero+casos);
for(i=0;i<casos;i++){
printf("%i\n",numero[i]);
}
return 0;
}
