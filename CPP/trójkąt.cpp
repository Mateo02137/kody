/*
 * trójkąt.cpp
 * 
 * Copyright 2020  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a; // deklaracja i inicjacja = definicja
	int b;
	int c;
	a = 0;
	b = 0;
	c = 0;
	cout<<"Podaj bok: ";
	cin>> a;
	cout<<"Podaj bok: ";
	cin>> b;
	cout<<"Podaj bok: ";
	cin>> c;
	
	//~if (a + b > c)
		//~if (a + c > b)
			//~if (b + c > a)
				//~cout<<"da się";
		//~else
			//~cout<<"nie da się";
			//~else
				//~cout<<"nie da się";
				//~else
					//~cout<<"nie da się";
	if (a + b > c && a + c > b && b + c > a)
	return 0;
}

