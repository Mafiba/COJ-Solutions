#include <cstdio>

int main(){
    int a,b;
    do{
    scanf("%i %i",&a ,&b);
    if(a==0&&b==0)
    break;
    else
    printf("%i\n",a+b);
}while(a!=0&&b!=0);
    return 0;
    }
