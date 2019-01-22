#include <iostream>
using namespace std;

//Header file for prototyping functions and defining node structures & pointers

#ifndef LIST //file guard
#define LIST

class LinkedList {
private: //data to be manipulated by functions of the class

    struct node{ //creating structure for the node
        int data; //first part of node, holds an integer value within the node
        node* next; //next member defined as a pointer to a node structure
    };

    node* head; //first node
    node* tail; //last node
    node* curr; //current node being pointed to by function
    node* temp; //temporary placeholder pointer

    public: //function prototypes for the implementation file
    LinkedList(); //class constructor
    ~LinkedList(); //class destructor
    bool empty() const; //check to see if the list is empty
    void createNewNode(int nodeValue); //create new node
    void insertHead(int newHeadValue); //insert a new node at the front of the list
    void deleteHead(); //delete the node at the front of the list
    void deleteTail(); //delete the node at the back of the list
    void printList(); //display the list
};


#endif //end of LIST file guard
