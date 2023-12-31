#include <stdio.h>
#include <stdlib.h>

int main(void) // Main : Execution starts here...
{
    // Define variables - pre-populate the array
    int MyArray[10] = {12,34,23,11,8,19,6,44,9,16};
    int *pArray = &MyArray[0];
    int i;

    // Direct from the array
    printf ("Directly from the array\n");
    for  ( i = 0 ; i < 10 ; i++ )
        printf ("Item %d contains value %d\n",i,MyArray[i]);


    // Pointer approach 1
    printf ("Pointer method 1\n");
    for  ( i = 0 ; i < 10 ; i++ )
        printf ("Item %d contains value %d\n", i, pArray[i] );

    printf ("Pointer method 2 using index\n");
    for  ( i = 0 ; i < 10 ; i++ )
        printf ("Item %d contains value %d\n", i, *(pArray+i) ); // Initial pointer of pArray + i

    printf ("Pointer method 2 (only works for moving sequentially\n");
    for  ( i = 0 ; i < 10 ; i++ )
        printf ("Item %d contains value %d\n", i, *pArray++ );  // Actually change the pointer of pARRAY

    // Exit the application
    return 0;
}
