/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yogun <yogun@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:26:24 by yogun             #+#    #+#             */
/*   Updated: 2022/07/23 15:15:01 by yogun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//function to add a new node to the stack from back side
void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	t_stack	*head;
	t_stack *tail;
	
	head = *stack;
	

		

		
	//If there is no node yet
	if (head == NULL)
	{
		tail = NULL;
		printf(""); //if I delete this line, my code doesn't work. LOL
		stack_new->next = NULL;
		stack_new->prev = NULL;
		*stack = stack_new;
		head = stack_new;
		tail = stack_new;
	}
	//if there is only one node
	// else if (head->next == NULL)
	else
	{
		tail->next = stack_new;
		stack_new->prev = tail;
		stack_new->next = NULL;
		tail = stack_new;
	}
	// else
	// {
	// 	//head = head->prev;
	// 	head->next = stack_new;
	// 	head->next->prev = head;
	// 	head = head->next;
	// 	head->next = *stack;
	// 	(*stack)->prev = head;
	// }	
}