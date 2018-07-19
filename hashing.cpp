#include <iostream>
#include <map>
#include <iterator>
 
using namespace std;
 
int main()
{
    map <int, int> hash;        // empty map container named as hash here
 
    // insert elements in random order
    hash.insert(pair <int, int> (1, 40));
    hash.insert(pair <int, int> (2, 30));
    hash.insert(pair <int, int> (3, 60));
    hash.insert(pair <int, int> (4, 20));
    hash.insert(pair <int, int> (5, 50));
    hash.insert(pair <int, int> (6, 50)); 
    hash.insert(pair <int, int> (7, 10));
 
    // printing map hash
    map <int, int> :: iterator dbba;
    cout << "\nThe map hash is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (dbba = hash.begin(); dbba != hash.end(); ++dbba)
    {
        cout  <<  '\t' << dbba->first 
              <<  '\t' << dbba->second << '\n';
    }
    cout << endl;
    return 0;
}
