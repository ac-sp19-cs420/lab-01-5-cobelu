//
//  queue.h
//  Lab01_5
//
//  Created by Connor Luckett on 3/2/19.
//  Copyright © 2019 Connor Luckett. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>

/*
 Create a struct for a queue of integers. This contains one entry for a linked list struct.
 */
typedef struct Queue {
    struct LinkedList* queue;
} Queue;

/*
 Create a method push that takes two values and integer and a queue struct. This will push the integer onto the queue.
 */
int q_push(Queue queue, int value);

/*
 Create a method pop that takes one parameter, the queue struct. This removes the last integer from this list and returns the value
 */
int q_pop(Queue queue);

/*
 Create a method last that takes one parameter, the queue struct. This returns the last integer from this list. It is NOT removed.
 */
int q_last(Queue queue);

/*
 Create a method is_empty that takes one parameter, the queue struct. This return 1 if the list is empty, and 0 if it contains at least one element.
 */
int q_is_empty(Queue queue);

#endif /* queue_h */
