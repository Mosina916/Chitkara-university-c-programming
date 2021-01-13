#include<stdio.h>
void mergetwosortedarray(int *a,int *b,int *c,int s,int e){

	int mid=(s+e)/2;
	int i=mid;
	int j=e;
	int k=e;
	while(i>=s&&j>=mid+1){
		if(a[i]>b[j]){
			c[k--]=a[i--];
			// k--;
			// i--;
		}
		else{
			c[k]=b[j];
			k--;
			j--;
		}
	}
	//b array pehle hi khatam huva
	while(i>=s){
		c[k]=a[i];
		k--;
		i--;
	}

	//jab a array pehle hi khatam huva
	while(j>=mid+1){
		c[k]=b[j];
		k--;
		j--;
	}
}

void mergesort(int *a,int s,int e){
	//base case 
	if(s>=e){
		return;
	}


	int b[100],c[100];
	int mid=(s+e)/2;
	for (int i = s; i <=mid; i++)
	{

		b[i]=a[i];
		/* code */
	}
	for (int i = mid+1; i <=e; i++)
	{
		c[i]=a[i];
		/* code */
	}
	mergesort(b,s,mid);
	mergesort(c,mid+1,e);
	mergetwosortedarray(b,c,a,s,e);


	// recursive case

}

int main(){

	int n,a[100];
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);

		/* code */
	}

	mergesort(a,0,n-1);

	for (int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);

		/* code */
	}
	printf("\n");



}


