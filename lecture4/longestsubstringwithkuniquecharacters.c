#include <stdio.h>
#include<math.h>
#include <limits.h>
#include <string.h>

int kunique(char s[],int k){
		int freq [26]={0};
		int i,index,new_idx;
        int start= 0;
        int dis=0;
        int maxlength=INT_MIN;
        for (i = 0; i < strlen(s); ++i)
        {
        	index=s[i]-'a';
        	if(freq[index]==0) {
                dis++;
            }
            freq[index]++;
            while(dis>k){
            	new_idx=s[start]-'a';
            	freq[new_idx]--;
            	if(freq[new_idx]==0) {
                    dis--;
                }
                start++;


            }
            maxlength=fmax(maxlength,i-start+1);


        }
        if(maxlength<k){
        	return -1;
        }
        else{
        	return maxlength;
        }

}
int main(){
// // kunique

		int k,total=0;
		char s[1000];
		scanf("%d",&k);
		scanf("%s",s);
		
		total=kunique(s,k);
		printf("%d\n",total);
		return 0;


}