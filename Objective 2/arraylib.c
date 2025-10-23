#include <stdio.h>
#include <stdlib.h>
#include "arraylib.h"

int findMaxIndex(int arr[], int size)
{
    int max = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max]) {
            max= i;
        }
    }
    return max;
}
int findMinIndex(int arr[], int size)
{
    int min = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[min]) {
            min= i;
        }
    }
    return min;
}
float findAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverseArray(int arr[],int size){
	int l=size-1;
	for(int i=l;i>=0;i--){
		printf("Reversed array\n");
		printf("%d",*(arr+i));
	}
}
void sortArray(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[i]){
				int t=(arr[i]);
				(arr[i])=(arr[j]);
				(arr[j])=t;
			}
		}
	}
	printf("sorted array\n");
	for(int i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}
int linearSearch(int arr[],int size,int value){
		int c=0;
	for(int i=0;i<size;i++){
		if(arr[i]==value){
			c=c+1;
			break;
		}
	}
	return c;
	}
	
