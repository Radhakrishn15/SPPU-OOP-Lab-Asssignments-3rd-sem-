#include<iostream>
using namespace std;
class complex
{
public:
    float real,imag;
    complex()
    {
    real=0;
    imag=0;
    }

    friend complex operator +(complex,complex);
    complex operator *(complex);
    friend ostream &operator<<(ostream&,complex&);
    friend istream &operator>>(istream&,complex&);
    void get();
    void put();
};
void complex::get()
{
    cout<<"Enter real part: "<<endl;
    cin>>real;
    cout<<"Enter imaginary part: "<<endl;
    cin>>imag;
}

void complex::put()
{
    cout<<real<<"+"<<imag<<"i";
}
complex operator +(complex a,complex b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return (temp);
}
complex complex::operator *(complex obj)
{
    complex temp;
    temp.real=(real*obj.real)-(imag*obj.imag);
    temp.imag=(real*obj.imag)+(imag+obj.imag);
    return (temp);
}

ostream &operator<<(ostream& output,complex& obj)
{
    output<<obj.real;
    output<<"+"<<obj.imag<<"i";
    return output;
}

istream &operator>>(istream& input,complex& obj)
{
    cout<<" Enter real part: ";
    input>>obj.real;
    cout<<" Enter imaginary part: ";
    input>>obj.imag;
    return input;
}

int main()
{
    complex a,b,c,d;
    cout<<"For First Complex Number"<<endl;
    a.get();
    cout<<"\nFor Second Complex Number"<<endl;
    b.get();
    cout<<"\n****Arithmetic Operations**** "<<endl;
    c=a+b;
    cout<<"Addition: ";
    c.put();
    d=a*b;
    cout<<"\nMultiplication: "<<d;
    return (0);
}
