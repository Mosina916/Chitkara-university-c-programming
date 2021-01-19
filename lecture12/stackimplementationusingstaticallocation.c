#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5 //jahan CAPACITY dikhe replace it with 5
int stack[CAPACITY];
int top=-1;
bool isfull(){
    if(top==CAPACITY-1){
        return true;
    }
    else{
        return false;
    }
}
void Push(int ele){
    if(isfull()){
        printf("stack is full / overflowing\n");
    }
    else{
        top++;
        stack[top]=ele;
        printf("%d is pushed sucessfully\n",ele);

    }
}
bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}


void Pop(){
    if(isempty()){
        printf("stack is empty/ underflow\n");

    }
    else{
        int ele=stack[top];
        printf("The element popped is : %d\n",ele);
        top--;
    }
}

void Peek(){
     if(isempty()){
        printf("stack is empty/ underflow\n");

    }
    else{
        int ele=stack[top];
        printf("The element peeked is : %d\n",ele);

    }

}


void Traverse(){
    if(isempty()){
        printf("stack is empty\n");

    }
    else{
        printf("The elements present in the stack are: ");

        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
    printf("\n");


}

void Length(){
    printf("The Current length/size of stack is : %d\n",top+1);
}



int main(){
    int op,x;

    while(1){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. traverse\n");
        printf("5. Length\n");
        printf("6. exit\n");

        printf("enter the operation you want to perfoem\n");
        scanf("%d",&op);
        switch(op){

            case 1: printf("Enter the element you want to push\n");
                    scanf("%d",&x);
                    Push(x);
                    break;
            case 2: Pop();
                    break;
            case 3: Peek();
                    break;
            case 4: Traverse();
                    break;
            case 5: Length();
                    break;
            case 6: return 0;
            default: printf("the value you entered is wrong\n\n");



        }



    }

    return 0;
   


}