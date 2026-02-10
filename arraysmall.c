#include <stdio.h>

void nearestSmallerToLeft(int arr[], int n) {
    int found = -1;
    for (int i = 0; i < n; i++) {
        
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                found = arr[j];
                break;
            }
        }
    }
        printf("%d ", found);
    
    printf("\n");
}

int main() {
    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Nearest smaller to left:\n");
    nearestSmallerToLeft(arr, n);
    printf("\n\nSubmitted by : Krishna Mittal\n Roll number : 25/A10/023\n");
    return 0;
}





