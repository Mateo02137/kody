/*
 * pole_kwadrat.cxx
 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	float a;
	
	a = 0;
	
	cout << "Podaj bok kwadratu: ";
	cin >> a;
	cout << "Obwód kwadratu to "<< a*4<<endl;
	cout << "Pole kwadratu to: "<< a*a<<endl;
	
	return 0;
}

