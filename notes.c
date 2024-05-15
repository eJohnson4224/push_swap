// 'error' handling for cases other than numbers and spaces
#include <stdio.h>
#include <stdlib.h>
/*

    chatgpt rough solution for taking in int list from argv
    ** would also need to include error handling

    int main(int argc, char *argv[]) {
        if (argc < 2) {
            printf("Usage: %s <integer list>\n", argv[0]);
            return 1;
        }

        int size = argc - 1; // Number of integers passed
        int *stack_a = malloc(size * sizeof(int)); // Allocating memory for the array

        if (stack_a == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        // Parsing integers from command-line arguments
        for (int i = 1; i < argc; i++) {
            stack_a[i - 1] = atoi(argv[i]); // Convert string to integer
        }

        // Printing the parsed integer list
        printf("Parsed integer list:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", stack_a[i]);
        }
        printf("\n");

        free(stack_a); // Free allocated memory
        return 0;
    }
*/

void push_swap(int  *stack_a)
{

}
										use ft_atoi
Take in inputs (can be 12 32 23 2 4 or "12 32 23 2 4"). Assign directly to stack_a.
Bug cases for -- and "asdf".

Logic
	load all numbers into stack_a

	push 2 top numbers into stack_b
	rotate stack_a until lowest in 1st position (tuo: 1 or 0 can add for lowest possibillity in range)
	organize all numbers up to 3 into stack_b by ____?