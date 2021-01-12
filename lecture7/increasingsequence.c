#include<stdio.h>
#include<stdbool.h>

void increasingseqprint(int n){
	// Base case
	if(n==0){
		return;
	}
	// Recursive case

	
	increasingseqprint(n-1);
	printf("%d ",n);


	
}

int main(){
	int n;
	scanf("%d",&n);

	increasingseqprint(n);



	return 0;
}