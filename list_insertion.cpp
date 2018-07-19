#include <iostream>
#include <list>
//list<int> a=new list<int> (5);
using namespace std;
int main() 
{
    // declaring list
    list<int> list1; 
     
    // initializing array
    int arr[10] = { 1, 2, 3, 4 };
     
    // using assign() to insert multiple numbers
    // creates 4 occurrences of "2"
    list1.assign(4,2);
    
    cout << endl; 
    // Printing the assigned list
    cout << "The list after inserting multiple elements is : ";
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";
       
    // using push_front to insert elements at beginning
    // inserts 5 at beginning
    list1.push_front(5);
    
    // Printing the new list
    cout << "The list after inserting elements using push_front is : ";
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";
     
    cout << endl;
    
    // using push_back to insert elements at the end
    // inserts 10 at end
    list1.push_back(10);
     
    // Printing the new list
    cout << "The list after inserting elements using push_back is : ";
    for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
       cout << *i << " ";
     
    cout << endl;
     
    
    return 0;
    
   }
     
