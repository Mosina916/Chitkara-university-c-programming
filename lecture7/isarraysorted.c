#include<stdio.h>
#include<stdbool.h>


bool arraysorted(int *arr,int n){

	if(n<=1){
		return true;
	}

	if(arraysorted(arr+1,n-1)&&arr[0]<arr[1]){
		return true;
	}
	else{
		return false;
	}




}

int main(){
	int n,arr[100];
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		/* code */
	}


	if(arraysorted(arr,n)){

		printf("yes array is sorted\n");

	}
	else{
		printf("No array is not sorted\n");


	}



	
	

	return 0;
}