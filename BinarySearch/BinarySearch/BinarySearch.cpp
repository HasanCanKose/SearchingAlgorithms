#include "pch.h"
#include <iostream>

#define MAX 20

int BinarySearch(int arr[], int size, int value) {
	int first = 0;
	int last = size;
	int mid;

	while (first <= last) {
		mid = first + (last - first) / 2;

		if (arr[mid] == value) {
			printf("Found\n");
			return -1;
		}
		else {
			if (arr[mid] < value) first = mid + 1;
			else last = mid - 1;
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
	BinarySearch(array, size, value);
}
