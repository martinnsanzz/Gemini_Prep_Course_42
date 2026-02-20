Exercise 01: ft_list_push_front
Exercise name: ft_list_push_front

Turn-in directory: ex01/

Files to turn in: ft_list_push_front.c, ft_list.h

Allowed functions: ft_create_elem

Description: * Write a function that adds a new element at the beginning of a linked list.

The function must take the address of the pointer to the first element of the list (begin_list) and create a new element using ft_create_elem.

It must then link this new element to the start of the list and update the begin_list pointer.

Constraints: * You must handle the case where the list is initially empty (pointing to NULL).

You must use a pointer to a pointer (t_list **) to ensure the original head pointer can be modified.


Function declaration:

void ft_list_push_front(t_list **begin_list, void *data);
