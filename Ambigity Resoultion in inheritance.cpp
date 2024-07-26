#include<iostream>
using namespace std;
class A{
	public:
	void say(){
		cout<<"Hello from A"<<endl;
	}
};
class B{
	public:
	void say(){
		cout<<"Hello from B"<<endl;
	}
};
class C:public A,public B{
	public:
//		if we don,t let knoe the complier which class
//      function is excueted it go through an eror
//      so w need to tell the complier 
	void say(){
		B :: say();
	}
}; 
//Second  way Ambigity
class D{
		public:
	void say1(){
		cout<<"Hello from D"<<endl;
}
};
class F: public D{
//	in this inheritance function name is same in base & derived class so if the function in 
//  derived class it excueted the function of derived class oterwise function base class
//		public:
//	void say1(){
//		cout<<"Hello from F"<<endl;}
};
int  main(){
	C obj;
	obj.say();
	
	F obj1;
	obj1.say1();
}
const add=2+4
console.log(6)