//For Visual Studio Code (VSC)
#include <stdio.h>
#include <stdbool.h>

//For VSC and Leetcode
#define Max_Size 99

typedef struct {
    int Stack1[Max_Size];
    int Stack2[Max_Size];
    int inTop;
    int outTop;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
    queue->inTop = -1;
    queue->outTop = -1;
    return queue;
}

void myQueuePush(MyQueue* obj, int x) {
    while (obj->outTop != -1){
        obj->Stack1[++obj->inTop] = obj->Stack2[obj->outTop--];
    }
    obj->Stack1[++obj->inTop] = x;
    while(obj->inTop != -1){
        obj->Stack2[++obj->outTop] = obj->Stack1[obj->inTop--];
    }
}

int myQueuePop(MyQueue* obj) {
    return obj->Stack2[obj->outTop--];
}

int myQueuePeek(MyQueue* obj) {
    return obj->Stack2[obj->outTop];
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->outTop == -1;
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 //Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/