//
//  list.c
//  Lab01_5
//
//  Created by Connor Luckett on 3/2/19.
//  Copyright © 2019 Connor Luckett. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int insert(LinkedList list, int data, int key) {
    // Create the new node pointer
    LinkedListNode* node = (LinkedListNode*) malloc(sizeof(LinkedListNode));
    // Assign the attributes to the node
    node->data = data;
    node->key = key;
    // Check the first
    LinkedListNode* nextNode = list.head;
    // Go through the list to the end
    while (nextNode != NULL) {
        // If we found the end, it's time to append
        if (nextNode->next == NULL) {
            nextNode->next = node;
            return 1;
        } else {
            nextNode = nextNode->next;
        }
    }
    return 0;
}

int is_in_list(LinkedList list, int key) {
    // Start with the head
    LinkedListNode* nextNode = list.head;
    // Go through until find (or not)
    while (nextNode != NULL) {
        if (nextNode->key == key) {
            // In list
            return 1;
        }
    }
    // Not in list
    return 0;
}

int find(LinkedList list, int key) {
    // Start with the head
    LinkedListNode* nextNode = list.head;
    // Go through until find (or not)
    while (nextNode != NULL) {
        if (nextNode->key == key) {
            // In list. Return value.
            return nextNode->data;
        } else {
            nextNode = nextNode->next;
        }
    }
    // Failure
    return 0;
}

int remove_node(LinkedList list, int key) {
    // Start with the head
    LinkedListNode* nextNode = list.head;
    // Go through until find (or not)
    while (nextNode != NULL) {
        if (nextNode->key == key) {
            // In list. Return value.
            return nextNode->data;
        } else {
            nextNode = nextNode->next;
        }
    }
    return 0;
}

void print_list(LinkedList list) {
    // Start with the head
    LinkedListNode* nextNode = list.head;
    // Go through until find (or not)
    while (nextNode != NULL) {
        printf("%d -> ", nextNode->data);
        nextNode = nextNode->next;
    }
}

int* create_array(LinkedList list) {
    
    return 0;
}
