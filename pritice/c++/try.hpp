#include<iostream>
#include<stdio.h>

void perform () {
	try{
		int a = 1/0;
	} catch (esception e) {
		count << e.what() << endl;
	}
	return;
}

void main() {
	perform();
	cout << "helllo, world!!";
}
