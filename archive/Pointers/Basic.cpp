#include <iostream>
using namespace std;

int main()
{   
    // int abc = 10;
    // // & -> ye wla operator hme memory adress deta h
    // cout<<&abc;

    // int a = 10;
    // // make a pointer *
    // int *pointer;
    // pointer = &a;
    // cout<<pointer<<endl; // gives us memory adress of a
    // cout<<&pointer<<endl; // memory adress of pointer
    // cout<<*pointer<<endl; // gives the actual of a

    // Arrays & Pointers
    // int arr[] = {1,2,3,4,5};
    // int *pointer;
    // pointer = arr;
    // // cout<<*pointer;
    // for(int i = 0 ;i < 5; i++){
    //     cout<<*pointer + i<<" ";
    // }

    // double pointers
    int a = 10;
    int *pointer ;
    pointer = &a;

    cout<< *pointer <<endl;

    // double pointer
    int **doublePointer  = &pointer;
    cout<<**doublePointer<<endl;
    
}
