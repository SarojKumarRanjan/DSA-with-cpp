#include <stdio.h>

 #define max 100

int top=-1;
int arr[max];


void push(int item){
    if(top==max-1){
        printf("stack overflow");
        return;

    }
    else{
        top++;
        arr[top]= item;
        printf(" \n the number inserted is %d \n", item);
    }
}

void pop(){
    int value;
    if(top==-1){
        printf("\nstack underflow\n");
        return;
    }

    else{
        value = arr[top];
        top--;
        printf("\n the number popped is % d", value);

    }
}

void show(){
    for(int i=0;i<top;i++){
       
       printf("%d\n",arr[i]);

    }
}

int main(){

   
    push(2);
    push(23);
    push(28);
    push(98);
    push(63);
    show();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();


    return 0;
}