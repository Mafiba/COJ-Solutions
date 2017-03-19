#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int a[10];
    char d[10];
    scanf("%i %i %i",&a[0], &a[1], &a[2]);
    scanf("%s",d);
    sort(a,a+3);
    if(d[0]=='A'){
    if(d[1]=='B')
     printf("%i %i %i\n",a[0],a[1],a[2]);
    else if(d[1]=='C')
     printf("%i %i %i\n",a[0],a[2],a[1]);
     }
    else if(d[0]=='B'){
        if(d[1]=='A')
     printf("%i %i %i\n",a[1],a[0],a[2]);
        else if(d[1]=='C')
     printf("%i %i %i\n",a[1],a[2],a[0]);
    }
    else if(d[0]=='C'){
        if(d[1]=='A')
     printf("%i %i %i\n",a[2],a[0],a[1]);
        else if(d[1]=='B')
     printf("%i %i %i\n",a[2],a[1],a[0]);
    }
    return 0;
}
