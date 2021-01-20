#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node*link; //self refrential class
};
struct node* top=NULL;
void push(char ele){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->link=top;
    top=temp;

}

void pop(){
        struct node* temp;
        temp=top;
        top=temp->link;
        temp->link=NULL;
        free(temp);
}
bool isbalanced(char *arr,int n){
    for(int i=0;i<n;i++){
        char ch=arr[i];
        if(ch=='('){
            push(ch);

        }
        else{
            if(ch==')'){
                if(top==NULL){
                    return false;

                }
                pop();
            }
        }


    }
    return top==NULL;

}
int main(){
    char arr[1000];
    scanf("%s",arr);
    int n=strlen(arr);
    if(isbalanced(arr,n)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;

}