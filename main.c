#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH  5
#define EMPTY (-1)

int mystack[STACK_LENGTH];
int top = EMPTY;
#define STACK_EMPTY INT_MIN

bool push(int value){//element to put on top of the stack
    if(top>=STACK_LENGTH-1) return false;

    top++;
    mystack[top] = value;
    return true;

}

int pop(){//remove from the stack
    if (top ==EMPTY) return STACK_EMPTY;

    int result = mystack[top];
    top--;
    return result;
}

int main() {
    push(56);
    push(55);
    push(13);

    int t ;

    while ((t=pop())!=STACK_EMPTY){
        printf("t = %d\n", t);
    }
    return 0;
}
