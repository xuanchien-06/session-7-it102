#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    for (i=0; i<5; i++) {
        if (arr[i]%2 == 0) {
            arr[i] += 3; 
        } else {
            arr[i] += 2; 
        }
    }
    printf("sau khi thay doi la: \n");
    for (i=0; i<5; i++) {
        printf("%d",arr[i]);
        if (i < 4) {
          printf("\n");
        }
    }
    printf("\n");

    return 0;
}

