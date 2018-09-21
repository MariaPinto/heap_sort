#include <iostream>
#include <math.h>
using namespace std;
#define N 5
int A[N]={2,3,4,1,5};
int heap_size = 0;

//Size

int size(int A[])
{
	int c=0;
	for (int i=0;i<N;i++)
	{
		c++;
	}
	return c;
}


//Parent
int parent (int A[], int i)
{
	if(i==1) return -1;
	return floor (i/2);
}

//Left

int left(int A[],int i)
{
	if(2*i <= N) return (2*i);
	return -1;
}

//Right

int right (int A[],int i)
{
	if(2*i+1 <= N) return (2*i+1);
	return -1;
}

//max heapify
void max_heapify(int A[],int i)
{
	int temp;
	int l=left(A,i);
	int r=right(A,i);
	int largest;
	cout<<"l :"<<l<<endl;
	cout<<"r :"<<r<<endl;
	if (l <= heap_size && A[l] > A[i])
	{
		largest=l;
	}
	else 
	{
		largest=i;
	}
	if(r<=heap_size && A[r]<A[largest])
	{
		largest=r;
	}
	if (largest!=i)
	{
		temp=A[i];
		A[i]=A[largest];
		A[largest]=temp;
		max_heapify(A,largest);
	}
}


//build_max_heapify
void build_max_heapify(int A[])
{
	heap_size=size(A);
	int i;
	for(i=floor( size(A)/2); i>=0;i-- )
	{	
		cout<<i<<endl; 
		cout<<"antes"<<endl;
		max_heapify(A,i);
		cout<<"despues";
	}
}



int main()
{
	build_max_heapify(A);
}
