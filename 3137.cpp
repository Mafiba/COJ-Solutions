#include <cstdio>
using namespace std;

int main(){
int A, B, C, casos;
scanf("%i",&casos);
while(casos--){
scanf("%i %i %i", &A, &B, &C);
if(B!=0)
((A+B==C)||(A-B==C)||(A*B==C)||(A/B==C)||(A%B==C))?printf("YES\n"):printf("NO\n");
else
((A+B==C)||(A-B==C)||(A*B==C))?printf("YES\n"):printf("NO\n");
}
return 0;
}
