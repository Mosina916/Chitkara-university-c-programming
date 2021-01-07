#include <stdio.h>
#include<math.h>
#include <limits.h>
#include <string.h>

int table[1000]={0};

void calculatetable(char p[]){
	int j=0;
	int i=1;
	int lp=strlen(p);
	while (i<lp)
	{
		while(j>0&&p[i]!=p[j]){
			j=table[j-1];

		}
		if(p[i]==p[j]){
			table[i]=j+1;
			i++;
			j++;

		}
		else{
			i++;
		}
		
		/* code */
	}
	
}
void kmpalgo(char s[],char p[]){
	calculatetable(p);
	int ls=strlen(s);
	int lp=strlen(p);
	int i=0,j=0;
	while(i<ls){
		while(j>0&&s[i]!=p[j]){
			j=table[j-1];

		}
		if(s[i]==p[j]){
			i++;
			j++;
		}
		else{
			i++;
		}
		if(j==lp){
			printf("pattern is present at %d\n",i-j);

		}

	}


}

int main(){
	char s[]="ABCDABCDABCX";
	char p[]="ABCDABCX";
	// char s[]="ABCDABCDABCDABCDXABCDABC";
	// char p[]="ABCDABC";
	kmpalgo(s,p);
}