Exercise 07: ft_split_whitespace
Exercise name: ft_split_whitespace

Turn-in directory: ex07/

Files to turn in: ft_split_whitespace.c

Allowed functions: malloc

Description: Write a function that splits a string of characters into words.

Spaces, tabs, and line breaks are considered delimiters.

The function must return an array of strings (pointers to char).

The last element of the array must be followed by a 0 (NULL) to indicate the end of the array.

Constraints: * You must not have any "empty" strings in your final array.

All memory must be correctly allocated for both the array and the strings within it.

You must handle the case where the input string is empty or contains only delimiters.

Function declaration:

char **ft_split_whitespace(char *str);
