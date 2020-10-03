//============================================================================
// Name        : c++.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

///////////////////// TOPIC TO STUDY//////////////////////////////////

#include <iostream>
using namespace std;
// How to change values into digits
int main() {
// Values form components from the begining
	/*
	 * 8927=8000+900+20+7
	 * for units 8927%10=7 because it is the remainer of 10
	 * then 8927/10 892.7=892 and take the next value
	 * 892%10=2 892/10=89.2=89
	 * 89%10=9 89/10 8 final of the road
	 *
	 * so basically for a=# decimals
	 *
	 * each decimal a1=a%10....an=(an-1)%10
	 *
	 */

	int a, units, decimals, cent, millar;
	std::cin>>a;
	// values are cahnegd any decimal collumns
	// numero=2152 -> 2000 + 100 + 50+ 2

	units=a%10; a/=10;  // unidades=2, numero=215;
	// el numero cambia y se combierte en otro

	decimals=a%10; a/=10;

	cent=a%10; a/=10;

	millar=a%10;

	switch (millar){
	case 1: std::cout<<"M"; break;
	case 2: std::cout<<"MM"; break;
	case 3: std::cout<<"MMM"; break;

	}

	switch (cent){
	case 1:std::cout<<"C";break;
	case 2:std::cout<<"CC";break;
	case 3:std::cout<<"CCC";break;
	case 4:std::cout<<"CD";break;
	case 5:std::cout<<"D";break;
	case 6:std::cout<<"DC";break;
	case 7:std::cout<<"DCC";break;
	case 8:std::cout<<"DCCC";break;
	case 9:std::cout<<"CM";break;
	}
	switch (decimals){
		case 1: std::cout<<"X"; break;
		case 2: std::cout<<"XX"; break;
		case 3: std::cout<<"XXX"; break;
		case 4: std::cout<<"XL"; break;
		case 5: std::cout<<"L"; break;
		case 6: std::cout<<"LX"; break;
		case 7: std::cout<<"LXX"; break;
		case 8: std::cout<<"LXXX"; break;
		case 9: std::cout<<"XC"; break;

		}
	switch (units){
			case 1: std::cout<<"I"; break;
			case 2: std::cout<<"II"; break;
			case 3: std::cout<<"III"; break;
			case 4: std::cout<<"IV"; break;
			case 5: std::cout<<"V"; break;
			case 6: std::cout<<"VI"; break;
			case 7: std::cout<<"VII"; break;
			case 8: std::cout<<"VIII"; break;
			case 9: std::cout<<"IX"; break;
		}

	return 0;




}
