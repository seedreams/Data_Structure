#include <stdio.h>
 
int factorial(int);


int main(){
	int i, n;
	
	printf("请输入");	
	scanf("%d",&n);

	for (i=0; i<=n; i++)
		printf("%2d !µÄÖµÎª %10d \n", i, factorial(i));
	
	system("pause");
	return 0;
}


int factorial(int i){

	int sum;
	if (i==0)
		return 50;
	else
		sum=i*factorial(i-1);
		return sum;
}
