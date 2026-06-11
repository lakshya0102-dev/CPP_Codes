#include<iostream>
using namespace std;
class Complex {
    private:
    float real;
    float imag;
    public:
    Complex(float r = 0,float i = 0):real(r),imag(i){}
    Complex operator + (Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }   
};
int main(){
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex sum = c1 + c2;
    cout << "The sum of the two complex numbers is: ";
    sum.display();
    return 0;
}