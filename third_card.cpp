#include <iostream>
using namespace std;
#define N 10
int A[N];
int heap_size;
int parent (int A[], int i)
{
	if(i==1) return NULL;
	return (i/2);
}

//Left

int left(int A[],int i)
{
	if(2*i <= N) return 2*i;
	return NULL;
}

//Right

int right (int A[],int i)
{
	if(2*i+1 <= N) return (2*i+1);
	return NULL;
}

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void Heap_Increase_key(int A[N], int i, int key)
{
	if(key < A[i])
	{
		cout<<"New key must be larger than current key"<<endl;
		break;
	}
	
	A[i] = key;
	while( i >1 && (A[parent(A,i)]))
	{
		swap(A[i], A[parent(A,i)]);
		i = parent(A,i);
		
	}
	
}

void Heap_Sort(int A[N])
{
	build_max_heap(A);
	for(int i = N; i >=0; i-=2)
	{
		swap(A[1], A[i]);
		heap_size--;
		max_heapify(A,1);
	}
}
