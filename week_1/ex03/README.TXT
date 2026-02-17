Exercise 04: ft_strdup
Exercise name: ft_strdup

Turn-in directory: ex04/

Files to turn in: ft_strdup.c

Allowed functions: malloc

Description: Reproduce the behavior of the function strdup. The function must allocate sufficient memory to duplicate the string passed as a parameter, copy the content, and return a pointer to the new string.

Constraints: The returned pointer must be capable of being freed. If the allocation fails, the function must return NULL.

Function declaration:

char *ft_strdup(char *src);