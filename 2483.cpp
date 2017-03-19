#include<cstdio>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    scanf("%i %i",&a, &b);
    scanf("%i %i",&c,&d);
    scanf("%i %i",&e,&f);
    if (a==b&&c<d&&e>f)
    printf("%i %i\n",d,e);
    else if (a==b&&c<d&&e<f)
    printf("%i %i\n",e,d);
    else if(a==b&&c<d&&e==f)
    printf ("%i %i\n",d,c);
    else if(a==b&&c>d&&e==f)
    printf("%i %i\n",c,d);
    else if(a==b&&c==d&&e<f)
    printf("%i %i\n",f,e);
    else if(a==b&&c==d&&e>f)
    printf("%i %i\n",e,f);
    else if(a<b&&c>d&&e==f)
    printf("%i %i\n",a,d);
    else if(a<b&&c<d&&e==f)
    printf("%i %i\n",d,a);
    else if(a<b&&c==d&&e>f)
    printf("%i %i\n",b,e);
    else if(a<b&&c==d&&e<f)
    printf("%i %i\n",e,b);
    else if(a<b&&c==d&&e==f)
    printf("%i %i\n",b,a);
    else if(a>b&&c<d&&e==f)
    printf("%i %i\n",a,c);
    else if(a>b&&c>d&&e==f)
    printf("%i %i\n",c,a);
    else if(a>b&&c==d&&e>f)
    printf("%i %i\n",b,f);
    else if(a>b&&c==d&&e<f)
    printf("%i %i\n",b,e);
    else if(a>b&&c==d&&e==f)
    printf("%i %i\n",a,b);
    return 0;
}
