#include<stdio.h>
int main(){
    int a=10;
    int* aptr=&a;
    printf("value of a is: %u\n",a); //10
    printf("value of &a is: %u\n",&a); //address
    printf("value of aptr is: %u\n",aptr); 

    return 0;

}