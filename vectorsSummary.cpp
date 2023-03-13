// C++ "Vectors" Summary by g4

#include <iostream>
#include <vector>

using namespace std;

int main(){

    cout << "****** POINTERS ******" <<endl;
    int x = 5;
    int* ptr = &x;

    cout << "pointer - address of it - (ptr): "<< ptr << endl;
    cout << "content of the address pointed by pointer (*ptr): "<< *ptr;

    cout << "\n\n****** VECTORS INTRO ******"<<endl;

    vector<int> numbers {1,2,3,4,5,6,7,8,9};

    for(const int &i : numbers){
        cout<<i<<" ";
    }

    cout<<endl;

    for(auto i=0;i<numbers.size();i++){
        cout<<numbers[i]<<" ";
    }




    cout << "\n\n****** SOME VECTOR FUNCTIONS ******"<<endl;

    numbers.push_back(10); // to add item to the end
    numbers.pop_back(); // to remove last element
    numbers[2] = 25; // to change 2nd index as 25
    numbers.at(3) = 35; // to change 3rd index as 35

    cout << "First element of the vector: "<<numbers.front() << endl;
    cout << "Last element of the vector: "<<numbers.back() << endl;
    cout << "Size of the vector(how many elements there is): "<< numbers.size()<<endl;
    cout << "Size of the vector(as memory capacity): "<< numbers.capacity()<<endl;

    numbers.resize(8); // resizing the vector by removing last elements
    cout << numbers.empty(); // to check whether the vector is empty or not (prints 0 or 1)

    // numbers.shrink_to_fit(); // to reduce vector's capacity for it to fit its size - by removing last elements -

    // numbers.data(); // prints a direct pointer to the memory array used internally by the vector to store its owned elements
    // i didn't understand what this is





    cout << "\n\n****** vector.begin,vector.rbegin,vector.cend etc. ******"<<endl;
    // c stands for constant, r stands for reverse

    vector<int> v1 {10,20,30,40,50,60};

    for(auto i=v1.begin();i<v1.end();i++){
        cout<< *i << " ";
    }
    cout<<endl;
    for(auto i=v1.cbegin();i<v1.cend();i++){
        cout<< *i << " ";
    }
    cout<<endl;
    for(auto i=v1.rbegin();i<v1.rend();i++){
        cout<< *i << " ";
    }
    cout<<endl;
    for(auto i=v1.crbegin();i<v1.crend();i++){
        cout<< *i << " ";
    }





    cout << "\n\n****** ITERATORS ******"<<endl;

    vector<int>::iterator iter; // declaring iterator as iter
    for(iter=numbers.begin();iter<numbers.end();++iter){ // printing the whole vector by using an iterator
        cout<< *iter << " ";
    }

    cout<<"\n\n";







    return 0;
    // C++ "Vectors" Summary by g4
}
