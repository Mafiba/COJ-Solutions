#include<cstdio>

int main(){
    float a,b;
    int d;
    scanf("%i",&d);
    while(d--){
        scanf("%f %f",&a,&b);
        printf("%.2f\n",a/b);
    }
    return 0;
}
