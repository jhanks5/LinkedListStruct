#include <iostream>
using namespace std;

#include "List.h"

//Implementation file in which the functions are defined

LinkedList::LinkedList(){ //constructor
//Setting pointers to NULL at the start avoids any accidental garbage values
        head = NULL;
        curr = NULL;
        temp = NULL;
        tail = NULL;
};

LinkedList::~LinkedList() {}; //destructor

    bool LinkedList::empty() const { //return true and run function if list is empty
    cout << "The list is indeed empty." << endl;
    return 0;
    }

    //Note that the function below appends the new node to the end of the list if there is a list already
    //Meaning that this function can be used to insert a new tail

    void LinkedList::createNewNode(int nodeValue) {
        node* temp = new node; //temporary node pointer that points to a new node structure
        temp->data = nodeValue; //'data' portion of temp node set equal to function argument
        temp->next = NULL; //set the 'next' portion of temp node to NULL
        if (head == NULL) { //if there is not a list yet and this is to be the first node
            head = temp; //temp node defined above is now the head of the list;
            tail = temp; //temp node is also now the tail (since there is only one node so far)
            temp = NULL; //clear temp
        }
        else { //if head!==NULL and there is a list already
            tail->next=temp; //'next' portion of node* tail points to temp node created above
            //above line "links" the temp node to the last node in the list
            tail = temp; //temp is now the last node in the list
        }
    }

    void LinkedList::insertHead(int newHeadValue) {
        node* temp = new node; //creates node pointer called temp that points to a new node structure
        temp->data = newHeadValue; //data portion of temp node set equal to function argument
        temp->next = head; //'next' portion of temp node now points to the head node in list ("links" new head to old head)
        head = temp; //temp node generated in this function is now the new head of the list
    }

    void LinkedList::deleteHead() {
        node* temp = new node; //creates node pointer called temp that points to a new node structure
        temp = head; //set temp node equal to the head node of the list
        head = head->next; //head is now equal to the node that the original 'head' was pointing to (the node after original head in the list)
        delete temp; //deletes the node that temp is pointing to, the original head node
    }

    void LinkedList::deleteTail() {
        node* curr = new node; //creates node pointer curr that points to a new node structure
        node* temp = new node; //creates node pointer temp that points to a new node structure
        curr = head; //curr now points to the head node in the list
        while(curr->next!=NULL){ //while the 'next' portion of curr is not NULL run loop
            temp = curr; //temp will hold the curr node
            curr=curr->next; //advance curr pointer, curr node is now equal to whatever the previous curr was pointing to
        }
        //note that the loop has now terminated
        tail=temp; //the node previous to the last node in the list is now the tail
        temp->next=NULL; //terminates the connection between the new tail and the previous tail
        delete curr; //deletes the node curr is pointing to, which is the node that was the tail before this function
    }

    void LinkedList::printList() { //function for displaying the list
        curr = head; //curr now points to front of the list
        while (curr != NULL) { //while curr is pointing to an object in the list
            cout << curr->data << " " << endl; //outputs the data portion of the current node
            curr = curr->next; //advances curr pointer to the next node in the list
        } //loop will cycle through each element in the list until the list is fully displayed
    }






