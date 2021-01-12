#include<stdio.h>
#include<stdbool.h>

int sumofarr(int *a,int n){
	//base case
	if(n==0){
		return 0;
	}

	// recursive case
	return a[0]+sumofarr(a+1,n-1);
}


int main(){
	int n,arr[100];
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		/* code */
	}

	int x=sumofarr(arr,n);

	printf("the sum is : %d \n",x);


	return 0;
}