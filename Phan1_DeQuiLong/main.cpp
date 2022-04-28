#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int arkerman(int m, int n)
{
	if(m==0) return n+1;
	else if(n==0) return arkerman(m-1,1);
	else return arkerman(m-1,arkerman(m,n-1));
}
int main(int argc, char** argv) {
	cout<<arkerman(2,1);
	return 0;
}
