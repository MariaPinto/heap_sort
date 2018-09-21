#include <iostream>
#include <math.h>
using namespace std;
#define N 5

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



























