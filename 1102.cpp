#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
long long a;
do{
scanf("%lli",&a);
if(a==0)
a=0;
else
(a%11==0)?printf("%lli is a multiple of 11.\n",a):printf("%lli is not a multiple of 11.\n",a);
}
while(a!=0);
return 0;
}
