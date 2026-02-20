Exercise 00: ft_create_elem
Exercise name: ft_create_elem

Turn-in directory: ex00/

Files to turn in: ft_create_elem.c, ft_list.h

Allowed functions: malloc

Description: * Create a function that creates a new element of a linked list.

It must assign the data provided as a parameter to the data variable of the structure.

It must initialize the next pointer to NULL.

Constraints: * You must define your structure in the ft_list.h file.

Use a void * for the data to ensure the list can hold any type of content.


Function declaration:

t_list *ft_create_elem(void *data);


Structure definition required in ft_list.h:

typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;
