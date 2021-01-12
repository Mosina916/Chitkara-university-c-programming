#include<stdio.h>


int fibo(int n){
	//base case

	if(n==0||n==1){
		return n;
	}

	//recursive case

	// int fsmaller=fibo(n-1);
	// int ssmaller=fibo(n-2);
	// biggerproblem=fsmaller+ssmaller;
	// return biggerproblem;

	

	return fibo(n-1)+fibo(n-2);
}

int main(){
	int n;
	scanf("%d",&n);
	int x=fibo(n);
	printf("the fibonacci number at postion %d is %d\n",n,x);
	

	return 0;
}