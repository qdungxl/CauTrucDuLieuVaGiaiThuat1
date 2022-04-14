#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int fib(int n){
	if(n<=2){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}
int main(int argc, char** argv) {
	cout<<fib(6);
	return 0;
}
