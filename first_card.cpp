#include <iostream>
#include <math.h>
using namespace std;
#define N 5

int heap_size = 0;

//Parent
int parent (int A[], int i)
{
	if(i==1) return NULL;
	return floor (i/2);
}

//Left

int left(int A[],int i)
{
	if(2*i <= N) return (2*i);
	return NULL;
}

//Right

int right (int A[],int i)
{
	if(2*i+1 <= N) return (2*i+1);
	return NULL;
}



























