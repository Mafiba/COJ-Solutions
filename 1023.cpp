#include <cstdio>

int main(){
float a[12], b;
for(int i=0;i<12;i++){
scanf("%f", &a[i]);
b+=a[i];
}
printf("$%.2f\n",b/12.0);
return 0;
}
