// CSCI 2530
// Assignment: 5
// Author:     Brandon Gachuz
// File:       testpq.cpp
// Tab stops:  4

#include "pqueue.h"
#include <stdio.h>
#include <iostream>

using namespace std;

typedef const char* CSTRING;

void printString(const char* s)
{
    printf("%s", s);
}

void printDouble(double x)
{
    printf("%lf", x);
}

int main()
{
    
    PriorityQueue f = PriorityQueue();
    cout << "Priority queue 'f' is initialy empty. Indicated by (1)" << endl;
    cout << isEmpty(f);
    
    // Inserts in ascending order
    insert(f, "First", 1.0);
    insert(f, "Second", 2.0);
    insert(f, "Third", 3.0);
    insert(f, "Half", 2.5);
    
    cout << "\n\n";
    
    cout << "Queue 'f' is now NOT empty because of insertion of 3 items"
    << endl;
    cout << isEmpty(f) << "\n" << endl;
    
    cout << "Insertion should be in ascending order\n" << endl;
    printPriorityQueue(f, printString, printDouble);
    
    //-------------------
    
    cout << "\n--- New Priority Queue 'nw' : ---\n" << endl;
    
    PriorityQueue nw = PriorityQueue();
    
    insert(nw, "First", 1.0);
    insert(nw, "Same", 1.0);
    insert(nw, "Second", 2.0);
    insert(nw, "Third", 3.0);
    
    printPriorityQueue(nw, printString, printDouble);
    
    cout << '\n';
    
    cout << "Removal of cells:\n" << endl;
    PQItemType s;
    PQPriorityType b;
    
    remove(nw, s, b);
    cout << "Item removed: " << s << endl;
    cout << "Item priority: " << b << endl;
    
    remove(nw, s, b);
    cout << "\nItem removed: " << s << endl;
    cout << "Item priority: " << b << endl;
    
    cout << "\nNew queue 'nw' :\n" << endl;
    printPriorityQueue(nw, printString, printDouble);
    
    putchar('\n');
    
    //------------------
    
    cout << "\n--- New Queue Below 'third' : ---\n\n";
    PriorityQueue third = PriorityQueue();
    
    insert(third, "One Half", 1.5);
    insert(third, "Half", 0.5);
    insert(third, "Seven", 7.6);
    insert(third, "Five", 5.4);
    insert(third, "Three", 3.1);
    insert(third, "Nine", 9.9);
    insert(third, "Eight", 8.3);
    insert(third, "One Half Duplicate", 1.5);
    insert(third, "Two", 2.1);
    
    printPriorityQueue(third, printString, printDouble);
    
    cout << "\nRemoval of cells:\n" << endl;
    
    PQItemType cellREm;
    PQPriorityType priRem;
    
    remove(third, cellREm, priRem);
    cout << "Item removed: " << cellREm << endl;
    cout << "Item priority: " << priRem << endl;
    
    PQItemType secCellRem;
    PQPriorityType priRem2;
    
    remove(third, secCellRem, priRem2);
    cout << "\nItem removed: " << secCellRem << endl;
    cout << "Item priority: " << priRem2 << endl;
    
    putchar('\n');
    
    cout << "New queue 'third':\n" << endl;
    printPriorityQueue(third, printString, printDouble);
    
    //------------------
    
    cout << "\n\n";
    cout << "--- New queue 'newQ' : ---" << endl;
    
    PriorityQueue newQ = PriorityQueue();
    
    printPriorityQueue(newQ, printString, printDouble);
    cout << "\n";
    
    insert(newQ, "Nectar", 1.01);
    insert(newQ, "Red", 1.0);
    insert(newQ, "C++", 2.3);
    insert(newQ, "Java", 2.2);
    insert(newQ, "Ruby", 2.01);
    insert(newQ, "JS", 2.1);
    
    printPriorityQueue(newQ, printString, printDouble);
    
    PQItemType itmDelete;
    PQPriorityType priDelete;
    
    remove(newQ, itmDelete, priDelete);
    cout << "Removal of cell(s):\n\n";
    cout << "Item removed: " << itmDelete << endl;
    cout << "Item priority: " << priDelete << endl;
    
    cout << "\nNew queue\n" << endl;
    printPriorityQueue(newQ, printString, printDouble);
    
    //------------------
    
    cout << "\n\n";
    cout << " --- New queue 'pq': ---\n" << endl;
    
    PriorityQueue pq = PriorityQueue();
    cout << "Initially empty (denoted by 1): "
    << isEmpty(pq) << endl;
    
    insert(pq, "First", 1.0);
    cout << "\nAdded first item:" << endl;
    printPriorityQueue(pq, printString, printDouble);
    cout << "Should not be empty (denoted by 0): " << isEmpty(pq) << endl;
    
    cout << "\nRemoving first item...\n" << endl;
    remove(pq, itmDelete, priDelete);
    cout << "Item removed: " << itmDelete << endl;
    cout << "Item priority: " << priDelete << endl;
    
    cout << "\nShould now be empty again: " << isEmpty(pq) << endl;
    cout << "Printing 'pq' should not display anything below." << endl;
    printPriorityQueue(pq, printString, printDouble);
    
    //------------------
    
    cout << "\n\n";
    cout << " --- New queue 'test': ---\n" << endl;

    PriorityQueue test = PriorityQueue();
    cout << "Emtpy: " << isEmpty(test) << endl;
    
    cout << "Removing a cell in an empty queue" << endl;
    remove(test, itmDelete, priDelete);
    cout << "Emtpy: " << isEmpty(test) << endl;
    
    putchar('\n');
    
    return 0;
}
