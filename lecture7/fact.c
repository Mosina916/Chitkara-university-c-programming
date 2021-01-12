#include<stdio.h>
int fact(int n){
	//base case

	if(n==0){
		return 1;
	}

	//recursive case
	
	return n*fact(n-1);
	// int chotiproblem=fact(n-1);

	// int badiproblem=n*chotiproblem;

	// return badiproblem;


	

}
int main(){
	int n;
	scanf("%d",&n);
	int x=fact(n);

	printf("%d\n",x);
	

	return 0;
}