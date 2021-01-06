#include<stdio.h>
int main(){

    int n,arr[100000],xorr=0;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
        xorr=(xorr^arr[i]);

    }
    // printf("%d",xorr);
    int temp=xorr,coun=0;
    while((temp&1)!=1){
        coun++;
        temp=temp>>1;

    }
    int mask=1<<coun;

    int ans1=0;
    printf("%d\n",mask);

    for (int i = 0; i <n; i++)
    {
        if((arr[i]&mask)>0){
            ans1=ans1^arr[i];
        }

        /* code */
    }
    int result=ans1^xorr;
    printf("%d %d",ans1,result);
    



   

    
    return 0;
}