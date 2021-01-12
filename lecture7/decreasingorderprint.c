#include<stdio.h>
#include<stdbool.h>

void decreasingseqprint(int n){
	// Base case
	if(n==0){
		return;
	}
	// Recursive case

	printf("%d ",n);
	decreasingseqprint(n-1);

	
}

int main(){
	int n;
	scanf("%d",&n);

	decreasingseqprint(n);



	return 0;
}