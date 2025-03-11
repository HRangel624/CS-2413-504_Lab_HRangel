//For Visual Studio Code (VSC)
#include <stdio.h>
#include <stdbool.h>

//For VSC and Leetcode
#define max 99


typedef struct {
    int val[max];
    int top;
} MyStack;


MyStack* myStackCreate() {
    MyStack *stack = (MyStack*)malloc(sizeof(MyStack));
    stack->top = -1;
    return stack;
}

void myStackPush(MyStack* obj, int x) {
    if (obj->top < max - 1) {
        obj->val[++obj->top] = x;
    } else {
        printf("OVERFLOW \n");
    }
}

int myStackPop(MyStack* obj) {
    if (obj->top == -1){
        printf("UNDERFLOW \n");
        return -1;
    }
    return obj->val[obj->top--];
}

int myStackTop(MyStack* obj) {
    if (obj->top == -1) {
        printf("This is an Empty Stack");
    }
    return obj->val[obj->top];
}

bool myStackEmpty(MyStack* obj) {
    return obj->top == -1;
}

void myStackFree(MyStack* obj) {
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/