#include<cstdio>
int main(){
	int x=0,y=0,a,b,c,d;
	scanf("%i",&c);
	for(int i=0;i<c;i++){
		scanf("%i %i",&a,&b);
	while(x<=a&&y<=b){
	x++;
	y++;
	}
	if(x%2==0&&(y==0||y%2==0)){
	d=x+y;	
}
	else if(x%2==1&&y%2==1){
	d=(x+y)-1;
}
	else{
	printf("No Number\n");
}
	printf("%i",d);
	}
	return 0;
}
