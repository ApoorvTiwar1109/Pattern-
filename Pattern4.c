#include <stdio.h>

int main(){
    
    int n;
    printf("Enter the last number you want in the pattern : ");
    scanf("%d", &n);
    printf("\n\n");
    printf("Generating pattern ....\n\n");

    for (int i = 1; i < n+1; i++) {
        for (int j = 0; j < i-1; j++) {
            printf("%d ", n-j);
        }
        for (int k = 0; k <  1 + (2*(n-i)); k++) {
            printf("%d ", n-i+1);
        }
        for (int x = n-i+2; x < n+1; x++) {
            printf("%d ", x);
        }
        printf("\n");
    }
    for (int i = 1; i < n+1; i++) {
        for (int j = 0; j < n-i; j++) {
            printf("%d ", n-j);
        }
        for (int k = 0; k < 1 + (2*(i-1)); k++) {
            printf("%d ", i);
        }
        for (int x = i+1; x < n+1; x++) {
            printf("%d ", x);
        }
        printf("\n");
    }

    printf("\n\n");
    int y;
    printf("\nEnter 0 to exit the program : ");
    scanf("%d", &y);

    return 0;  
}
