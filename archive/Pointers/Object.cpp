#include <iostream>
using namespace std;

class Complex{
    public:
        int real;
        int imaginary;

        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a,int b){
            real = a;
            imaginary = b;
        }

};

int main(){
    // Complex c1;
    // Complex* pointer = &c1;
    Complex *pointer = new Complex;
    // (*pointer).setData(10,20); is exactly same as
    pointer->setData(10,20);
    (*pointer).getData();
} 
