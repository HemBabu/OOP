#include<iostream>
using namespace std;
class Complex{
	int *rp;
	int *ip;
	public:
		
	Complex(){
		rp=new int;
		ip=new int;
	}
	void setData(){
		cout<<"Enter real and imagianary part "<<endl;
		cin>>*rp>>*ip;
	}
	void show(){
		cout<<"Complex Number is: "<<*rp<<"+"<<*ip<<"i"<<endl;
	}
};
int main(){
	Complex c;
	c.setData();
	c.show();
	return 0;
}
