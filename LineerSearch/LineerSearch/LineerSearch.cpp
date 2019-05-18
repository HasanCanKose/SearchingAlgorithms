#include "pch.h"
#include <stdio.h>

#define MAX 20

int LineerSearch(int arr[], int size, int value) {
	int i;

	for (i = 0; i < size; i++) {
		if (arr[i] == value) {
			printf("Found\n");
			return -1;
		}
	}
	printf("Not Found\n");
}

int main()
{
	int array[MAX], size, value;
	int i;

	printf("Size of the array: ");
	scanf("%d", &size);
	printf("Enter values: ");
	for (i = 0; i < size; i++) scanf("%d", &array[i]);

	printf("The value you want to find: ");
	scanf("%d", &value);
	LineerSearch(array, size, value);
}