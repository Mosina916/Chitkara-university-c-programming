#include<stdio.h>
#include<string.h>
 char* replaceallpi(char *arr,int l, char*out,int ol){

 	//base case
 	if(l==0){
 		out[l]='\0';
 		return out;

 	}

 	//recursive case

 	char cha1=arr[0],char2=arr[1];
 	if(cha1=='p'&&char2=='i'){
 		out[0]='3';
 		out[1]='.';
 		replaceallpi(arr+2,l-2,out+2,ol-2);
 		



 	}
 	else{

 		out[0]=cha1;
 		
 		replaceallpi(arr+1,l-1,out+1,ol-1);



 	}


 	return out;



 }

int main(){
	char arr[100],out[100];
	scanf("%s",arr);
	int l=strlen(arr);
	int ol=l;

	// strcpy(result,);

	printf("%s\n",replaceallpi(arr,l,out,ol));





	return 0;

}