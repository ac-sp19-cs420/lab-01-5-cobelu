//
//  list.h
//  Lab01_5
//
//  Created by Connor Luckett on 3/2/19.
//  Copyright © 2019 Connor Luckett. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>

/*
 Create a struct for a linked list node that contains two entries data and next.
 data is an integer. This represents the value we are actually storing.
 key is an integer. This is used for sorting.
 next is a pointer the next element in the list. This is zero if its the last element in the list.
 */
typedef struct LinkedListNode {
    int data;
    int key;
    struct LinkedListNode* next;
} LinkedListNode;

 /* Create a struct for a linked list that contains one entry head that points to the first element of the linked list.
*/
typedef struct LinkedList {
    LinkedListNode* head;
} LinkedList;

/*
 Create a method insert that takes three parameters, a linked list struct, a data integer, and a key integer. This will insert the data integer as a liked list node struct, sorted by the key value. If there is already an element with the associated key in the list then the value will not be inserted. If the value fails to be inserted for any reason, it will return a 0. If successful, this will return 1.
 */
int insert(LinkedList list, int data, int key);

/*
 Create a method is_in_list that takes two parameters, a linked list struct and an key integer. This will return 1 if there is an element in the linked list that has the associated key integer, it returns a 0 if there isn't. -1 if there is an error. (May not need to return -1 depending on how you implement it.)
*/

/*
 Create a method find that takes two parameters, a linked list struct and an key integer. This will return the value for the associated key from the list. If the node isn't present or something goes wrong it will return a 0.
 */

/*
 Create a method remove that takes two parameters, a linked list struct and an key integer. This will remove the node with the associated key from the list. If the node is removed it will return a 1. If the node isn't present or something goes wrong it will return a 0.
 */

/*
 Create a method print_list that takes one parameter a linked list struct. This prints out a list of all of the integer values of the elements in the linked list.
 */

/*
 Crate a method create_array that takes one parameter a linked list struct. This returns an array of all of the integer values of the elements in the linked list.
 */

#endif /* list_h */
