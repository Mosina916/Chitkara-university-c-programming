#include<stdio.h>
void mergetwosortedarray(int *a,int *b,int *c,int n,int m){
	int i=n-1;
	int j=m-1;
	int k=n+m-1;
	while(i>=0&&j>=0){
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
	while(i>=0){
		c[k]=a[i];
		k--;
		i--;
	}

	//jab a array pehle hi khatam huva
	while(j>=0){
		c[k]=b[j];
		k--;
		j--;
	}
}
int main()
{
	int n,m,a[100],b[100],c[1000];
	scanf("%d%d",&n,&m);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);

		/* code */
	}
	for (int i = 0; i < m; ++i)
	{
		scanf("%d",&b[i]);

		/* code */
	}
	mergetwosortedarray(a,b,c,n,m);
	// array =m+n;
	for (int i = 0; i < m+n; ++i)
	{
		printf("%d ",c[i]);

		/* code */
	}
	printf("\n");



	return 0;
}