#include<iostream>
#include <Number.h>

using namespace std;

Number::Number(int n) {	
	num = n;
}

Number::Number() {}

int Number::getnumber() {
	return num;
}


/*
int main() {

Number n(40);
cout<<"Number is "<<n.getnumber()<<endl;

} */
