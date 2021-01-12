#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int stringtoint(char *a,int n){


	if(n==0){
		return 0;
	}

	int ld=a[n-1]-'0';

	return stringtoint(a,n-1)*10+ld;

}




int main(){
	char arr[100];
	scanf("%s",arr);
	int l=strlen(arr);

	int x=stringtoint(arr,l);

	printf("%d\n",x);




	return 0;
}