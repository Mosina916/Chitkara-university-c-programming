#include<stdio.h>
#include<stdlib.h>

struct emp{
    int eno;
    char ename[20];
    float esal;

};



int main(){

    struct emp * ptr;


    ptr=(struct emp*)malloc(sizeof(struct emp));
    if(ptr==NULL){
        printf("memory not available:\n");
    }
    else{
        printf("Enter emp details :\n");

        scanf("%d%s%f",&ptr->eno,ptr->ename,&ptr->esal);

        printf("details of emp are as : \n");
        printf("eno is %d : \nename is %s : \nesal is %f : \n",ptr->eno,ptr->ename,ptr->esal);


        

        

    }



free(ptr);
    








    return 0;
}