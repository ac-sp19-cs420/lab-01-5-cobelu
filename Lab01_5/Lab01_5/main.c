//
//  main.c
//  Lab01_5
//
//  Created by Connor Luckett on 3/2/19.
//  Copyright © 2019 Connor Luckett. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"
#include "stack.h"
#include "queue.h"

int main(int argc, const char * argv[]) {
    
    /*
     Linked List
     */
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));
    print_list(*list);
    // Add some nodes
    insert(*list, 1, 4);
    print_list(*list);
    insert(*list, 2, 5);
    print_list(*list);
    insert(*list, 3, 6);
    print_list(*list);
//    // Make sure they are in the list
//    assert(is_in_list(*list, 1) == 1);
//    assert(is_in_list(*list, 2) == 1);
//    assert(is_in_list(*list, 3) == 1);
//    // Make sure find by key works
//    assert(find(*list, 1) == 4);
//    assert(find(*list, 2) == 5);
//    assert(find(*list, 3) == 6);
//    assert(find(*list, 4) == 0); // NOT in
//    // Removal
//    remove_node(*list, 2);
//    assert(is_in_list(*list, 1) == 1);
//    assert(is_in_list(*list, 2) == 0);
//    assert(is_in_list(*list, 3) == 1);
//    // Pretty!
//    print_list(*list);
//    // TODO: Array
    
    /*
     Stack
     */
//    Stack* stack = (Stack*) malloc(sizeof(Stack));
//    // Push
//    assert(s_push(*stack, 1) == 1);
//    assert(s_push(*stack, 2) == 1);
//    assert(s_push(*stack, 3) == 1);
//    // Pop
//    assert(s_pop(*stack) == 1);
//    // Top
//    assert(s_top(*stack) == 2);
//    // Is Empty
//    assert(s_is_empty(*stack) == 0);
//    s_pop(*stack);
//    s_pop(*stack);
//    assert(s_is_empty(*stack) == 0);
    
    /*
     Queue
    */
//    Queue* queue = (Queue*) malloc(sizeof(Queue));
//    // Push
//    assert(q_push(*queue, 1) == 1);
//    assert(q_push(*queue, 2) == 1);
//    assert(q_push(*queue, 3) == 1);
//    // Pop
//    assert(q_pop(*queue) == 1);
//    // Last
//    assert(q_last(*queue) == 3);
//    // Is Empty
//    assert(q_is_empty(*queue) == 0);
//    q_pop(*queue);
//    q_pop(*queue);
//    assert(q_is_empty(*queue) == 1);
    
    return 0;
}
