#include <iostream>
#include <assert.h>

using namespace std;

int Fibonacci( int n ) {
	
	//          { 0                    if n = 0
	// fib(n) = { 1                    if n = 1
	//          { fib(n-1) + fib(n-2)  if n => 2
	
	if ( n < 2 )
		return n;
	else
		return Fibonacci( n-1 ) + Fibonacci( n-2 );
}

int Ackermann( int n ) {

	//           { n+1                if m = 0
	// A(m, n) = { A(m-1, 1)          if m > 0 and n = 0
	//           { A(m-1, A(m, n-1))  if m > 0 and n > 0

	return 0;
}

int Factorial( int n ) {
	
	// n! = n(n-1)!
	
	if ( n == 0 )
		return 1;
	else
		return n * Factorial( n-1 );
}

int main () {

	cout << "Please enter a positive integer: " << endl;
	int n = 0;
	cin >> n;
	assert( n >= 0 );
	
	// Fibonacci sequence demonstrated in recursion
	
	cout << "Fibonacci sequence of " << n << "..." << endl;
	Fibonacci( n );
	cout << "Ackermann function of " << n << "..." << endl;
	Ackermann( n );
	cout << "Factorial of " << n << "..." << endl;
	Factorial( n );
	
	return 0;
}
