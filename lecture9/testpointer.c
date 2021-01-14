#include<stdio.h>
int main(){
    int i=100;
    int *ptr;
    ptr=&i;
    printf("%u\n",i); //100
    printf("%u\n",ptr); //address
    printf("%u\n",&i); //adress
    printf("%u\n",&ptr); //address
    printf("%u\n",*ptr); //100
    printf("%u\n",*(&i)); //100
    return 0;

}