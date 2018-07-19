#include <iostream>
#include <map>
#include <iterator>
 
using namespace std;
 
int main()
{
    map <int, int> hash1;        // empty map container
 
    // insert elements in random order
    hash1.insert(pair <int, int> (1, 40));
    hash1.insert(pair <int, int> (2, 30));
    hash1.insert(pair <int, int> (3, 60));
    hash1.insert(pair <int, int> (4, 20));
    hash1.insert(pair <int, int> (5, 50));
    hash1.insert(pair <int, int> (6, 50)); 
    hash1.insert(pair <int, int> (7, 10));
 
    // printing map hash1
    map <int, int> :: iterator dbba;
    cout << "\nThe map hash1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (dbba = hash1.begin(); dbba != hash1.end(); ++dbba)
    {
        cout  <<  '\t' << dbba->first 
              <<  '\t' << dbba->second << '\n';
    }
    cout << endl;
 
    // assigning the elements from hash1 to hash2
    map <int, int> hash2(hash1.begin(), hash1.end());
 
    // print all elements of the map hash2
    cout << "\nThe map hash2 after assign from hash1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (dbba = hash2.begin(); dbba != hash2.end(); ++dbba)
    {
        cout  <<  '\t' << dbba->first 
              <<  '\t' << dbba->second << '\n';
    }
    cout << endl;
 
    // remove all elements up to element with key=3 in hash2
    cout << "\nhash2 after removal of elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    hash2.erase(hash2.begin(), hash2.find(3));
    for (dbba = hash2.begin(); dbba != hash2.end(); ++dbba)
    {
        cout  <<  '\t' << dbba->first 
              <<  '\t' << dbba->second << '\n';
    }
    
      // remove all elements with key = 4
    int num;
    num = hash2.erase (4);
    cout << "\nhash2.erase(4) : ";
    cout << num << " removed \n" ;
    cout << "\tKEY\tELEMENT\n";
    for (dbba = hash2.begin(); dbba != hash2.end(); ++dbba)
    {
        cout  <<  '\t' << dbba->first 
              <<  '\t' << dbba->second << '\n';
    }
 
    cout << endl;
     //lower bound and upper bound for map hash1 key = 5
    cout << "hash1.lower_bound(5) : " << "\tKEY = ";
    cout << hash1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << hash1.lower_bound(5)->second << endl;
    cout << "hash1.upper_bound(5) : " << "\tKEY = ";
    cout << hash1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << hash1.upper_bound(5)->second << endl;
    return 0;
    /* Functions associated with Map:
begin() – Returns an iterator to the first element in the map
end() – Returns an iterator to the theoretical element that follows last element in the map
size() – Returns the number of elements in the map
max_size() – Returns the maximum number of elements that the map can hold
empty() – Returns whether the map is empty
pair insert(keyvalue,mapvalue) – Adds a new element to the map
erase(iterator position) – Removes the element at the position pointed by the iterator
erase(const g)- Removes the key value ‘g’ from the map
clear() – Removes all the elements from the map
key_comp() / value_comp() – Returns the object that determines how the elements in the map are ordered (‘<' by default)
find(const g) – Returns an iterator to the element with key value ‘g’ in the map if found, else returns the iterator to end
count(const g) – Returns the number of matches to element with key value ‘g’ in the map
lower_bound(const g) – Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will not go before the element with key value ‘g’ in the map
upper_bound(const g) – Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will go after the element with key value ‘g’ in the map*/
}
