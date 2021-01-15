#include<stdio.h>
#include<time.h>
int main(){
    //experimental analysis
    clock_t st=clock();


    int a=10,b=20;
    int sum=a+b;
    printf("sum is %d\n",sum);


    clock_t et=clock();

    printf("the total time taken is : %lu ",et-st);






    return 0;
}