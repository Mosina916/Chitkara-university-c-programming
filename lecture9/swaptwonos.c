#include<stdio.h>

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

    printf("after swapping a is %d AND  b is %d in swap function\n",a,b);//20 10
}
int main(){

    //call by value
    int a=10,b=20;

    printf("Before swapping a is %d AND  b is %d \n",a,b);// 10 20

    swap(a,b);
    printf("After swapping a is %d AND  b is %d \n",a,b); //10 20
    return 0;
}