Exercise 04: ft_list_push_back
Exercise name: ft_list_push_back

Turn-in directory: ex04/

Files to turn in: ft_list_push_back.c, ft_list.h

Allowed functions: ft_create_elem

Description: * Write a function that adds a new element at the end of a linked list.

The function must take the address of the pointer to the first element of the list (begin_list) and create a new element using ft_create_elem.

It must traverse to the end of the list and link the last current element to the newly created one.

Constraints: * You must handle the case where the list is empty (pointing to NULL). In this case, the new element becomes the head of the list.

Efficiency matters: Do not traverse the list if it is not necessary.

Function declaration:

void ft_list_push_back(t_list **begin_list, void *data);
