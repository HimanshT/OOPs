#include<iostream>
using namespace std;

class Base{
protected:// a way to inherit the private members
	int a;
private:
	int b;
};

/*
						public derivation  private derivation  protected derivation
1. private members		Not derived			Not derived			Not derived
2. protected members	Protected			private				protected
3. public members		public				private				protected

*/

class Derived:protected Base
{
	
}

int main()
{
    
	return 0;
}