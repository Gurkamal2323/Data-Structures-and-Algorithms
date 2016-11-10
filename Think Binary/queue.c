#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX];
int front = 0; 
int rear = -1; // index one less than index where element is to be inserted
int size = 0;

int peek(){
   return arr[front];
}

int isEmpty(){
   return size == 0;
}

int isFull(){
   return size == MAX;
}

void enqueue(int data){

   if(!isFull()){

      if(rear == MAX-1){
         rear = -1;            
      }       

      rear++;
      arr[rear] = data;
      size++;
   }
}

int dequeue(){
   int data = arr[front];
   front++;
	
   if(front == MAX){
      front = 0;
   }
	
   size--;
   return data;  
}

int main() {
   /* enqueue 5 items */
   enqueue(3);
   enqueue(5);
   enqueue(9);
   enqueue(1);
   enqueue(12);

   // front : 0
   // rear  : 4
   // ------------------
   // index : 0 1 2 3 4 
   // ------------------
   // queue : 3 5 9 1 12
   enqueue(15);

   // front : 0
   // rear  : 5
   // ---------------------
   // index : 0 1 2 3 4  5 
   // ---------------------
   // queue : 3 5 9 1 12 15
	
   if(isFull()){
      printf("Queue is full!\n");   
   }

   // remove one item 
   int num = dequeue();
	
   printf("Element removed: %d\n",num);
   // front : 1
   // rear  : 5
   // -------------------
   // index : 1 2 3 4  5
   // -------------------
   // queue : 5 9 1 12 15

   // enqueue more items
   enqueue(16);

   // front : 1
   // rear  : -1
   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15

   // As queue is full, elements will not be enqueueed. 
   enqueue(17);
   enqueue(18);

   // ----------------------
   // index : 0  1 2 3 4  5
   // ----------------------
   // queue : 16 5 9 1 12 15
   printf("Element at front: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");
   printf("----------------------\n");
   printf("Queue:  ");
	
   while(!isEmpty()){
      int n = dequeue();           
      printf("%d ",n);
   }   
}