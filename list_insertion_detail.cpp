#include <iostream>
#include <list> // for list operations
using namespace std;
 
int main() 
{
    // declaring list
    list<int> list1;
     
    // using assign() to insert multiple numbers
    // creates 5 occurrences of "2"
    list1.assign(5,2);
    
    // Printing the new list
    cout << "The list after inserting 1 element using insert() is : ";
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";
     
    cout << endl;
     
    // initializing list iterator to beginning
    list<int>::iterator dabba = list1.begin();
     
    // iterator to point to 3rd position
    advance(dabba,2);
     
    // using insert to insert 1 element at the 3rd position
    // inserts 5 at 3rd position
    list1.insert(dabba,5);
     
    // Printing the new list
    cout << "The list after inserting 1 element using insert() is : ";
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";
     
    cout << endl;
     
    // using insert to insert 2 element at the 4th position
    // inserts 2 occurrences of 7 at 4th position
    list1.insert(dabba,2,7);
     
    // Printing the new list
    cout << "The list after inserting multiple elements using insert() is : ";
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";
     
    cout << endl;
     
   return 0;
}
