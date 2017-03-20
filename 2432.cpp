#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	long long int num, i=0, med=0;
	double res=0;
	while (num!=0){
		med=res=num=0;
		scanf("%i",&num);
		if(num==0)
		break;
		else{
		int arr[num];
		for(i=0;i<num;i++)
			scanf("%lli",&arr[i]);
		sort(arr,arr+num);
			med=num/2;
		if(num%2!=0)
			res=arr[med];
		else
			res=(arr[med]+arr[med-1])/2.0;
			printf("%.1f\n",res);
		}
	}
	return 0;
}
