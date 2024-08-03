#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int IsEmpty() {
    if(top<0)
        return 1;
    else
        return 0;
}
int IsFull() {
    if (top>=MAX-1)
        return 1;
    else
        return 0;
}
void push(int value) {
    if(IsFull() == 1)
        printf("Stack is full\n");
    else
        stack[++top] = value;
}
int pop() {
    if(IsEmpty() == 1)
        printf("Stack is Empty\n");
    else
        return stack[top--];
}
int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    
    return 0;
}