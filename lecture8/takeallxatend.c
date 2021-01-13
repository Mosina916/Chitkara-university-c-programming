#include<stdio.h>
#include<string.h>
 char* moveallxatend(char *arr,int l, char*out,int ol){

 	//base case
 	if(l==0){
 		out[l]='\0';
 		return out;

 	}

 	//recursive case

 	char cha=arr[0];
 	if(cha=='x'){
 		moveallxatend(arr+1,l-1,out,ol-1);
 		out[ol-1]=cha;



 	}
 	else{
 		out[0]=cha;
 		moveallxatend(arr+1,l-1,out+1,ol-1);



 	}


 	return out;



 }

int main(){
	char arr[100],out[100],result[100];
	scanf("%s",arr);
	int l=strlen(arr);
	int ol=l;

	// strcpy(result,);

	printf("%s\n",moveallxatend(arr,l,out,ol));





	return 0;

}