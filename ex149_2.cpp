#include<iostream>
using namespace std;
class Complex
{
public:
	Complex(){real=0;imag=0;}
	Complex(double r,double i){real=r;imag=i;}
	Complex operator+(Complex &c2)const;
	Complex operator-(Complex &c2)const;
	Complex operator*(Complex &c2)const;
	Complex operator/(Complex &c2)const;
	void display();
private:
	double real;
	double imag;
};
Complex Complex::operator+(Complex &c2)const
{
	Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}
Complex Complex::operator-(Complex &c2)const
{
	Complex c;
	c.real=real-c2.real;
	c.imag=imag-c2.imag;
	return c;
}
Complex Complex::operator*(Complex &c2)const
{
	Complex c;
	c.real=real*c2.real;
	c.imag=imag*c2.imag;
	return c;
}
Complex Complex::operator/(Complex &c2)const
{
	Complex c;
	c.real=real/c2.real;
	c.imag=imag/c2.imag;
	return c;
}
void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
int main()
{
	Complex c1(3,4),c2(5,-10),c3;
	c3=c1+c2;
	cout<<"1.加法：\n";
	cout<<"c1=";
	c1.display();
	cout<<"c2=";
	c2.display();
	cout<<"c1+c2=";
	c3.display();
	cout<<"\n2.减法：\n";
	c3=c1-c2;
	cout<<"c1=";
	c1.display();
	cout<<"c2=";
	c2.display();
	cout<<"c1-c2=";
	c3.display();
	cout<<"\n3.乘法：\n";
	c3=c1*c2;
	cout<<"c1=";
	c1.display();
	cout<<"c2=";
	c2.display();
	cout<<"c1*c2=";
	c3.display();
	cout<<"\n4.除法：\n";
	c3=c1/c2;
	cout<<"c1=";
	c1.display();
	cout<<"c2=";
	c2.display();
	cout<<"c1/c2=";
	c3.display();
	return 0;
}