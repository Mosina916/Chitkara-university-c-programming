#include<stdio.h>
#include<string.h>

int rectwins(char arr[],int n,int count){
    if(n<=2){
        return count;
    }
    char ch=arr[n-1];
    if(arr[n-3]==ch&&arr[n-2]!=ch){
        count++;
    }
    return rectwins(arr,n-1,count);
}
int main(){
    char arr[1000];
    scanf("%s",arr);
    int n=strlen(arr);
    printf("%d",rectwins(arr,n,0));

    return 0;


}