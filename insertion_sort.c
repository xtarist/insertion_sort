#include <stdio.h>

int key,i,j;
int n = 5;

// Sorting Function
void insertion_sort (int arr[]) {
    for (i=1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


//Driving Function
int main () {
    int key,i,j;
    int n = 5;
    int arr[5] = {5,4,3,2,1};// Ignore the syntax highlight in this aray declaration
    insertion_sort(arr);
    for (int k=0; k < 5; k++) {
        printf("%d ,", arr[k]);
    }
    printf("\n");
}
