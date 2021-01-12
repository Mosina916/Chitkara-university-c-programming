#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void bubblesort(int *arr,int n,int i,int j){
	if(i==n-1){
		return;
	}

	if(j==n-1-i){
		bubblesort(arr,n,i+1,0);


	}
	else{
		 if(arr[j]>arr[j+1]){
               int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
            bubblesort(arr,n,i,j+1);


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


	bubblesort(arr,n,0,0);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);

		/* code */
	}

	printf("\n");







	return 0;
}