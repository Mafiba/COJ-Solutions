#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int a, c;
	float b;
	char d[1000];
	scanf("%i",&a);
    scanf("%s",d);
	sort(d,d+a);
	b=(float)a/2;
	b=floor(b);
	c=(int)b;
	printf("%c\n",d[c]);
    return 0;
}
