#include <iostream>
using namespace std;

#include "List.h"


//Driver file to showcase List functions

int main () {

        LinkedList demo; //creating an object of the LinkedList class
        int initialNodeVal; //used to test creating a new node
        int testHeadVal; //used to test inserting a node at the front of the list
        int testTailVal; //used to test inserting a node at the end of the list

        cout << " Welcome to the Linked List function showcase." << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "First, checking to ensure that the list is empty..." << endl;
        demo.empty();
        cout << "Please enter a value for the first node in your list: " << endl;
        cin >> initialNodeVal;
        demo.createNewNode(initialNodeVal);
        cout << "Program printing updated list..." << endl;
        demo.printList();
        cout << "Please enter a value to add to the front of the list: " << endl;
        cin >> testHeadVal;
        demo.insertHead(testHeadVal);
        cout << "Program printing updated list, with new node added to the front..." << endl;
        demo.printList();
        cout << "Now, to test adding to the back of the list, enter desired value: " << endl;
        cin >> testTailVal;
        demo.createNewNode(testTailVal);
        cout << "Program printing updated list, with value appended to the end of the list..." << endl;
        demo.printList();
        cout << "Now, testing the function that deletes the head node..." << endl;
        demo.deleteHead();
        cout << "Program printing updated list, with the head node deleted..." << endl;
        demo.printList();
        cout << "Now, testing the function that deletes the tail of the list..." << endl;
        demo.deleteTail();
        cout << "Program printing updated list, with the tail node deleted..." << endl;
        demo.printList();
        cout << endl;
        cout << "This program has now demonstrated Linked List functions that can test whether or not the list is" << endl;
        cout << "empty, construct a new node, add a node to the front of the list, add a node to the back of the" << endl;
        cout << "list, delete a node from the front of the list, and delete a node from the back of the list." << endl;
        cout << endl;
        cout << "Goodbye, thank you for participating." << endl;
}

