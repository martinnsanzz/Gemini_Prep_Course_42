Exercise 06: ft_ultimate_range
Exercise name: ft_ultimate_range

Turn-in directory: ex06/

Files to turn in: ft_ultimate_range.c

Allowed functions: malloc

Description: Write a function that allocates an array of integers and assigns it to a double pointer passed as an argument. The array should contain all values between min (inclusive) and max (exclusive).

Constraints: * The function must return the size of the array.

If min >= max, *range must be NULL and the function must return 0.

If malloc fails, *range must be NULL and the function must return -1.

Function declaration:

int ft_ultimate_range(int **range, int min, int max);
