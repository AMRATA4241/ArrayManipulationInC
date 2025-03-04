#include <stdio.h>

int main() {
    int a[5];
    int i, size;
    // Prompt user for array size
    printf("\nenter size of array:");
    scanf("%d", &size);
    // Validate size
    if (size <= 0 || size > 5) {
        printf("\ninvalid size..");
    } else {
        // Prompt user for array elements
        printf("\nenter element of array:");
        for (i = 0; i < size; i++) {
            scanf("%d", &a[i]);
        }
        // Display entered elements
        printf("\n entered element are:");
        for (i = 0; i < size; i++) {
            printf("\n%d", a[i]);
        }
    }
    int *p = &a[0];
    for (i = 0; i < size; i++) {
        printf("\nadress of a[%d]:%p", i, &a[i]);
    } 
    // Delete element at specified position
    int pos;
    printf("\nenter position of array element to delete:");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size) {
        printf("\nEnter a valid position...!");
    } else {   
        printf("\nThe array after deletion is:\n");
        for (i = pos; i < size - 1; i++) {
            a[i] = a[pos + 1];
        }
        size--;
        for (i = 0; i < size; i++) {
            printf("\n%d", a[i]);
        }
        int num;
        printf("\nenter number:");
        scanf("%d", &num);
        for (i = size; i > pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos] = num;
        size++;
        printf("\nThe array after insertion is: ");
        for (i = 0; i < size; i++) {
            printf("\n%d", a[i]);
        }
    }
    // Search for an element by address in the array
    int *address;
    printf("\nEnter the address of the element to search for: ");
    scanf("%p", &address);
    for (i = 0; i < size; i++) {
        if ((void*)&a[i] == (void*)address) {
            printf("\nElement at address %p is %d, found at position %d\n", (void*)address, a[i], i + 1);
            break;
        }
    }
    if (i == size) {
        printf("\nElement not found at the given address.");
    }
    printf("\nThe element in reverse order..");
    for (i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
    for (i = 0; i < size; i++) {
        printf("\n%d", a[i]);
    }
    
    return 0;
}
