#include "stdio.h"
#include "stdlib.h"



/*******************
In this project, we will implement the HeapSort
algorithm to sort an array of 200,000 integers

Function prototypes listed below.
**********************/

//heapSort takes arrayToSort, an int pointer to an array that we need to sort,
//and n, the size of the array, and puts the elements
//of arrayToSort into non-decreasing order using a heap to repeatedly
//find the largest element that we have not yet placed into the 
//"sorted portion" of arrayToSort.
void heapSort(int *arrayToSort, int n);


//Given index i, return the index of the left child of i.
int leftChild(int i);


//Given index i, return the index of the right child of i.
int rightChild(int i);


//Given index i, return the index of the parent of i.
int parent(int i);


//Given an array of integers, makeHeap arranges the elements 
//int a valid heap configuration where each number is 
//greater than both of its children.
void makeHeap(int *heap, int n);


//heapifyUp is used to restore the heap to a valid configuration
//after inserting a new value at the end of the heap.  i
//is the index of the new value.  While it is larger than
//its parent, swap the value with the parent (or stop when
//it becomes the root and does not have a parent).
void heapifyUp(int *heap, int i);



//heapifyDown is used to restore the heap to a valid configuration
//after removing the largest value at the top of the heap.  After
//removing the maximum element at the top of the heap, we would
//have swapped a value from the bottom of the heap into the top position.
//This value may be smaller than some of its children.  If so, 
//we need to swap this value with the larger of its two children.
//Stop when it's larger than all of its children (or when it no longer
//has any children).
void heapifyDown(int *heap, int n, int i);


int main()
{
    
    //Creating an array of size 200,000 and filling it
    //with random values between 0 and 999,999.
    int n = 200000;
    int *arrayToSort = (int*)malloc(n*sizeof(int));
    int i;
    for(i=0; i<n; i++){
        
        arrayToSort[i] = rand() % 1000000;
    
    }
	
	
	heapSort(arrayToSort,n);
    
    
    
    for(i=0; i<n; i++){
        
        printf("%d \n",arrayToSort[i]);
    
    }

	free(arrayToSort);
		
	return 0;
}


void heapSort(int *arrayToSort, int n){
    
   
    
    
}




int leftChild(int i){
	
	//Placeholder so the project compiles.  You should change this return statement.
	return 0;
}




int rightChild(int i){
	
	//Placeholder so the project compiles.  You should change this return statement.
	return 0;
}




int parent(int i){
	
	//Placeholder so the project compiles.  You should change this return statement.
	return 0;
}




void makeHeap(int *heap, int n){
    
    
    
}





void heapifyUp(int *heap, int i){
    
    
    
    
    
}




void heapifyDown(int *heap, int n, int i){
    
    
    
    
}
