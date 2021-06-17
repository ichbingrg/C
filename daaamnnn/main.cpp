#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector 1: " << endl;
    cout << vector1.at(0) << endl << vector1.at(1) << endl;
    cout << "size of vector1 : " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nVector 2: " << endl;
    cout << vector2.at(0) << endl << vector2.at(1) << endl;
    cout << "size of vector2 : " << vector2.size() << endl;
    
    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "\nVector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl; 
    cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;
    
    vector_2d.at(0).at(1) = vector1.at(0) = 1000;
    
    cout << "\nUpdated Vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl; 
    cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;
    
    cout << "\nUpdated Vector 1: " << endl;
    cout << vector1.at(0) << endl << vector1.at(1) << endl;
    cout << "size of vector1 : " << vector1.size() << endl;
    
    
    
    
    return 0;
}