#include <stdio.h>
#include<math.h>
#include <limits.h>
#include <string.h>
int p[10000]={0};
void manacheralgo(char s[]){
	int l=strlen(s),i;
	// printf("%d",l);

	int c=0,r=0;
	for (i = 0; i < l-1; i++)
	{
		int mirror=2*c-i;
		if(i<r){
			p[i]=fmin(r-i,p[mirror]);

		}
		if((i-(1+p[i]))>=0){
			while (s[i+(1+p[i])]==s[i-(1+p[i])])
		{
			
			p[i]++;
			/* code */
		}

		}
		
		if(i+p[i]>r){
			c=i;
			r=i+p[i];
		}
		

		/* code */
	}
	

}


int main(){

	char s[]="$#A#B#A#B#A#B#A#@";
	int max=INT_MIN;
	// char p[]="ABCDABCX";

	manacheralgo(s);
	
	for (int i = 0; i < strlen(s); i++) 
	{
		if(max<p[i]){
			max=p[i];
		}
		
		/* code */
	}
	printf("%d\n",max);
}






	


	
