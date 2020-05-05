// CPP program to illustrate 
// undefined behavior of 
// gcd function of C++ STL 
#include <iostream> 
#include <algorithm> 

using namespace std; 

int main() 
{ 
	cout << "gcd(6, 20) = " << __gcd(2.0, 8) << endl; 
}

