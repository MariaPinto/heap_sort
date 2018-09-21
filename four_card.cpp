// Example program
#include <iostream>
#include <string>
#define N=10
#define INF=111111111111111


int Heap_Extract_Max(int A[]){
    int max=A[1];
    A[1]=A[heap_size];
    heap_size=heap_size-1;
    max_heapify(A,1);
    return max;
    }
    
void Max_Heap_Insert(int A[],int key){
    heap_size=heap_size+1;
    A[heap_size]=INF;
    Heap_Increase_Key(A,heap_size,key);
    }
