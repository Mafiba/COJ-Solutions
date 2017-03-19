#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char a[10000];
    int b=0, c=0, d=0;
    scanf("%s",a);
    c=strlen(a);
    for (int i=0;i<c;i++){
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'){
                                                                  b=a[i];
                                                                  b-=96;
                                                                  d+=b;
                                                                  }
        }
        printf("%i\n",d);
    return 0;
    }
