//
//  stack.h
//  Lab01_5
//
//  Created by Connor Luckett on 3/2/19.
//  Copyright © 2019 Connor Luckett. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdlib.h>

/* Create a struct for a stack of integers. This contains one entry for a linked list struct.
 */
typedef struct Stack {
    struct LinkedList* stack;
} Stack;

/*
Create a method push that takes two values and integer and a stack struct. This will push the integer onto the stack.
 */
int s_push(Stack* stack, int value);

/*
Create a method pop that takes one parameter, the stack struct. This removes the top integer from this list and returns the value
 */
int s_pop(Stack* stack);

/*
Create a method top that takes one parameter, the stack struct. This returns the top integer from this list. It is NOT removed.
 */
int s_top(Stack* stack);

/*
Create a method is_empty that takes one parameter, the stack struct. This return 1 if the list is empty, and 0 if it contains at least one element.
 */
int s_is_empty(Stack* stack);

#endif /* stack_h */
