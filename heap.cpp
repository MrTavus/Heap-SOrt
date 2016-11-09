#include <iostream>
using namespace std;

void heapSort(int[],int,int);
void maxHeap(int[],int);

int main(){

int A[] = {0,9,12,6,13,25,4,15,7,1,3,19};
int size = 11,i;

cout << "Array before sorting : ";
for(i=0;i<size;i++) cout << A[i] << " ";
cout << endl;

maxHeap(A,size);

cout << "Array after sorting  : ";
for(i=0;i<size;i++) cout << A[i] << " ";
cout << endl;

}

void heapSort(int A[],int cur,int last){

	int child = 2*cur,parent = cur,temp;
	
	while(child <= last){
		if(A[child+1]>A[parent]){
			temp = A[child+1];
			A[child+1] = A[parent];
			A[parent] = temp;
		}
		if(A[child] > A[parent]){
			temp = A[child];
			A[child] = A[parent];
			A[parent] = temp;
		}
			parent = child;
			child *= 2;
	}
}
void maxHeap(int A[],int n){
	for(int i=(n/2);i>0;i--){
		heapSort(A,i,n);	
	}
	
}
