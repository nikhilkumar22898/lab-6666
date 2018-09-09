/*q2. SUM  
	a. (By Value) Write a program with a function that takes two int parameters, adds 
	them together, then returns the sum. The program should ask the user for two 
	numbers, then call the function with the numbers as arguments, and tell the user 
	the sum. 
	b. (By Reference) Goal is the same as above, but this time, the function that adds 
	the numbers should be void, and takes a third, pass by reference parameter; then 
	puts the sum in that. 
*/

//library
#include<iostream>
using namespace std;


/* 
Write a program with a function that takes two int parameters, adds them together, then returns the sum.
*/

int suma(int a, int b){
	int sum = a+b;
	return sum;
}


/*
Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that
*/

void sumb(int a, int b, int &c){
	c = a+b;
}





int main(){

//The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum. 
	int x,y,z,w;
	cout<< "enter two number" <<endl;
	cin >> x >> y;

	z = suma(x,y);
	cout << "your sum is "<< z << endl;

	sumb(x,y,w);
	cout << "your sum is " << w << endl;
	
	return 0;


}

	

