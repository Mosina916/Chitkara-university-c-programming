#include<stdio.h>
#include<string.h>
int main(){

	char s[100];
	scanf("%s",s);
	int l=strlen(s);
	int i=0;
	if(s[i]=='9'){
		i++;
	}
	for (; i <l;i++)
	{

		int digit=s[i]-'0';
		if(digit>=5){
			digit=9-digit;
		}

		s[i]=digit+'0';

		/* code */
	}
	printf("%s\n",s);

	return 0;
}