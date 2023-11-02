//STL-Standard template library 
/* Standard Template Library (STL) is a collection of C++ template classes providing containers to store data (vectors, lists, maps) as well as algorithms to perform around them (searching, sorting).
Major advantages of using STL are reusability, efficiency, readability, and consistency in coding practices.*/
// pairs is a part of utility library
/* #include <iostream>
#include <utility> // Include the utility header for the pair template

using namespace std;

void explainPair() {
    // First pair
    pair<int, int> p1 = {1, 5};
    cout << p1.first << " " << p1.second << endl;
    
    // pair using different data types
    pair<int,char> p2 ={1,'A'};
    cout<<p2.second<<endl;

    // Second pair with nested pairs
    pair<int, pair<int, int>> p3 = {1, {3, 4}};
    cout << p3.first << " " << p3.second.second << " " << p3.second.first << endl;

    // n pair with nested pair
    pair<int, pair<int, pair<int, pair<int, int>>>> nestedPair ={1,{2,{4,{6,8}}}};
    // Accessing the values
    cout << "First Value: " << nestedPair.first << endl;
    cout << "Second Value: " << nestedPair.second.first << endl;
    cout << "Third Value: " << nestedPair.second.second.first << endl;
    cout << "Fourth Value: " << nestedPair.second.second.second.first << endl;
    cout << "Fifth Value: " << nestedPair.second.second.second.second << endl;
    // Third pair with nested pairs
    pair<int, pair<int, char>> p4 ={3,{4,'K'}};
    cout<<p4.second.second<<endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[0].second << endl;
}

int main() {
    explainPair();
    return 0;
} */
void explainvector(){
     vector <int> v;
     v.push_back(2);
     v.emplace_back(2);

     vector<pair<int,int>>vec;
     vec.push_back({1,2})
     vec.emplace_back(1,2);

     vector<int> v(5,100);
     vector<int> v1(5,20);
     vector<int> v2(v1);

     
}