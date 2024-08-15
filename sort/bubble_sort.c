#include <stdio.h>

void bubble_sort(int *arr, int size){
	int i = 0;
	int j;
	int tmp;
	while (i < size){
		j = 0;
		while (j < size - 1 - i){
			if (arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void print_arr(int *arr, int size){
	int i = 0;
	while (i < size){
		printf("%i ", arr[i]);
		i++;
	}
	printf("\n");
}

int main(void){
	int arr[] = { 8, 3, 5, 2, 7, 9, 1, 4, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, size);
	bubble_sort(arr, size);
	print_arr(arr, size);

	return (0);
}
