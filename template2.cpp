#include <iostream> 
using namespace std; 
template <class X> 
X Mmax(X x, X y) 
{ 
	if(x>y)
		return x;
	else
		return y;	
} 
int main() 
{ 
  cout << Mmax(300, 70) << endl;  
  cout << Mmax(3.0, 7.0) << endl; 
  cout << Mmax('a', 'e') << endl;    
}

