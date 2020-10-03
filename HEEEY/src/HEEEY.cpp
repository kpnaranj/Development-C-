//============================================================================
// Name        : Practice.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

struct v;
void ms(double& x, double& y);
void mr(double& x, double& y);
void interval_calculations();
// determine the data I will use
struct v{
	double values[8]{};
	int result;
	double a,b,c,d{};
	double max[4]{};
	double min[4]={0,0,0,0};
	int x1,x2,x3,x4;
	};
double mtx,mty;
// determine the memory for short term
void mt (double&mtx, double&mty){
	if (mtx==0&&mty==0){
	std::cout<<"--"<<std::endl;
	}
	std::cout<<"["<<mtx<<", "<<mty<<"]"<<std::endl;
}// long term memory

void ms(double& x, double& y){
// add a function if values are equal to zero unnitialize


	if (x>y){
		std::cout<<"Error:invalid interval as  "<<x<<">"<<y<<std::endl;

	}
	else if (x==0&&y==0){
		std::cout<<"--"<<std::endl;
	}
	else if (x<=y){
	std::cout<<"["<<x<<", "<<y<<"]"<<std::endl;

	}
	else {
		std::cout<<"Error:illegal command "<<std::endl;


	}
}


// determine memory for long term
void mr (double& mr_x, double& mr_y){
std::cout<<mr_x<<mr_y<<std::endl;
}
void interval_calculations(){

}
double calculation (double x, double y){
	if (x>y){
	return calculation(x-1,y-1);
	}
	return calculation (x,y);
}



/////////////////////////////////////////////////////////////////////////////
int main(){
	std::string commands{};

	double x{0};
	double y{0};
	double mr_x{0};
	double mr_y{0};
	bool is_working=true;
	interval_calculations();

	while (is_working==true){
	// initiate the program
		std::cout<<"input :> ";

		std::cin>>commands>>x>>y;

		if (commands=="enter"){
			ms(x,y);
		}
// return program This prints 0 and new value


	// Do things in the program
	//After initialize the program enter// add all the operations related

	// start of commands operators
		else 	if (commands=="negate"){
					v negate;
					negate.a=-x;
					negate.b=-y;

					ms(negate.a,negate.b);
					x=negate.a;
					y=negate.b;
				}

				else if (commands=="invert"){
					v invert;
					invert.a=y;
					invert.b=x;
					ms(invert.a,invert.b);
					x=invert.a;
					y=invert.b;
				}

				else if (commands=="ms"){// stores memory
					ms(x,y);
				}

				else if (commands=="mr"){

					mr_x=x;
					mr_y=y;
					mr(mr_x,mr_y);// Pass to long term memory// shows memory stored

				}

				else if (commands=="mc"){
					x=0;
					y=0;

					ms(x,y);// short term memory
					mr(x,y);// long term memory

				}

				else if (commands=="m+"){
					// I need both memories, sum both
					// first memory
					// second memory
					// both values
					// both value
					// long term memory
				v m_add;
					m_add.a=x+mr_x;
					m_add.b=y+mr_y;
					mr(m_add.a,m_add.b);
					mr_x=m_add.a;
					mr_y=m_add.b;
				}

				else if (commands=="m-"){
					v m_mins;
					m_mins.a=x-mr_x;
					m_mins.b=y-mr_y;
					mr(m_mins.a,m_mins.b);
					mr_x=m_mins.a;
					mr_y=m_mins.b;
				}

	//start of arithmetic operators // we have to add c

				else if (commands=="scalar_add"){
					v scalar_add;
					std::cin>>scalar_add.c;
					scalar_add.a=scalar_add.c+x;
					scalar_add.b=scalar_add.c+y;
					ms(scalar_add.a,scalar_add.b);
					x=scalar_add.a;
					y=scalar_add.b;

				}
				else if (commands=="scalar_substract"){
					v scalar_mins;
					std::cin>>scalar_mins.c;
					scalar_mins.a=scalar_mins.c+x;
					scalar_mins.b=scalar_mins.c+y;
					ms(scalar_mins.a,scalar_mins.b);
					x=scalar_mins.a;
					y=scalar_mins.b;
								}
				else if (commands=="scalar_multiply"){
					v scalar_mult;
					std::cin>>scalar_mult.c;

					if (scalar_mult.c>0){
					scalar_mult.a=scalar_mult.c*x;
					scalar_mult.b=scalar_mult.c*y;
						}
					else if (scalar_mult.c<0){
					scalar_mult.a=scalar_mult.c*y;
					scalar_mult.b=scalar_mult.c*x;
						}
					else {
					scalar_mult.a=0;
					scalar_mult.b=0;
					}
					ms(scalar_mult.a,scalar_mult.b);
					x=scalar_mult.a;
					y=scalar_mult.b;
					}


				else if (commands=="scalar_divide"){
					v scalar_div;
					std::cin>>scalar_div.c;
					if (scalar_div.c>0){
					scalar_div.a=x/scalar_div.c;
					scalar_div.b=y/scalar_div.c;
					ms(scalar_div.a,scalar_div.b);
					x=scalar_div.a;
					y=scalar_div.b;

					}
					else if (scalar_div.c<0){
					scalar_div.a=y/scalar_div.c;
					scalar_div.b=x/scalar_div.c;
					ms(scalar_div.a,scalar_div.b);
					x=scalar_div.a;
					y=scalar_div.b;
					}
					else {
					std::cout<<"Error:division by zero"<<std::endl;
					std::cout<<"--"<<std::endl;
					}

					}

				else if (commands=="scalar_divided_by"){
					v scalar_div_by;
					std::cin>>scalar_div_by.c;

					if (scalar_div_by.c>0){
					scalar_div_by.a=scalar_div_by.c/y;
					scalar_div_by.b=scalar_div_by.c/x;
					ms(scalar_div_by.a,scalar_div_by.b);
					x=scalar_div_by.a;
					y=scalar_div_by.b;
					}
					else if (scalar_div_by.c<0){
					scalar_div_by.a=scalar_div_by.c/x;
					scalar_div_by.b=scalar_div_by.c/y;
					ms(scalar_div_by.a,scalar_div_by.b);
					x=scalar_div_by.a;
					y=scalar_div_by.b;
					}
					else if (x<=scalar_div_by.c&&y>=scalar_div_by.c){
					std::cout<<"Error:division by zero."<<std::endl;
					std::cout<<"--"<<std::endl;
					}

				}
	// start of arithmetic operators with operations// we add c and d

				else if (commands=="interval_add"){
					v int_add;
					std::cin>>int_add.c>>int_add.d;

					if (int_add.c>int_add.d){
					std::cout<<"Error: invalid interval as "<<int_add.c<<">"<<int_add.d<<std::endl;
					std::cout<<"--"<<std::endl;
					}
					else {
					int_add.a=int_add.c+x;
					int_add.b=int_add.d+y;
					ms(int_add.a,int_add.b);
					x=int_add.a;
					y=int_add.b;
					}

				}

				else if (commands=="interval_subtract"){
					v int_mins;
					std::cin>>int_mins.c>>int_mins.d;

					if (int_mins.c>int_mins.d){
					std::cout<<"Error: invalid interval as "<<int_mins.c<<">"<<int_mins.d<<std::endl;
					std::cout<<"--"<<std::endl;
					}
					else {
					int_mins.a=int_mins.c-x;
					int_mins.b=int_mins.d-y;
					ms(int_mins.a,int_mins.b);
					x=int_mins.a;
					y=int_mins.b;
					}
								}

				else if (commands=="interval_multiply"){
					v int_mult;
					std::cin>>int_mult.c>>int_mult.d;
					if (int_mult.c>int_mult.d){
					std::cout<<"Error: invalid interval as "<<int_mult.c<<">"<<int_mult.d<<std::endl;
					std::cout<<"--"<<std::endl;

					}
					else {
					v variable;
					variable.a=(x*int_mult.c);
					variable.b=(x*int_mult.d);
					variable.c=(y*int_mult.c);
					variable.d=(y*int_mult.d);

					double max[4]{variable.a,variable.b,variable.c,variable.d};

						double result_a=max[0];
						double result_b=max[0];

					for (int i=0;i<4;i++){

						if(max[i]>result_a){
							result_a=max[i];
							}
						if(max[i]<result_b){
							result_b=max[i];
							}
						}// end of for statement
					x=result_a;
					y=result_b;
					ms(x,y);
										}// end of else statement
				}

				else if (commands=="interval_divide"){
					v int_div;
					std::cin>>int_div.c>>int_div.d;

					if (int_div.c>int_div.d){

					std::cout<<"Error: invalid interval as "<<int_div.c<<">"<<int_div.d<<std::endl;

					}

					else {
						v variable;
						variable.a=(x/int_div.c);
						variable.b=(x/int_div.d);
						variable.c=(y/int_div.c);
						variable.d=(y/int_div.d);

						double max[4]{variable.a,variable.b,variable.c,variable.d};

						double result_a=max[0];
						double result_b=max[0];

						for (int i=0;i<4;i++){

						if(max[i]>result_a){
						result_a=max[i];
							}
						if(max[i]<result_b){
						result_b=max[i];
							}
						}// end of for statement
						x=result_a;
						y=result_b;
						ms(x,y);
					}
				}

				else if (commands=="intersect"){
					v int_inters;
				std::cin>>int_inters.c>>int_inters.d;

				if (int_inters.c>int_inters.d){

				std::cout<<"Error: invalid interval as "<<int_inters.c<<">"<<int_inters.d<<std::endl;

				}

				else {
				v variable;

				for (int i=x;i<=y;i++){

				if(i==int_inters.c){
					x=int_inters.c;
						}
				if(i==int_inters.d){
					y=int_inters.d;
							}
						}
				ms(x,y);
					}
				}

				else if (commands=="integers"){
					v integer;
					integer.x1=x;
					integer.x2=y;

				//(a/b)*b + a%b
					if (integer.x1%2==0&&integer.x2%2==0){
						for (int i=integer.x1; i<=integer.x2;i++ ){
						std::cout<<i;
						}
					}
					else if (integer.x1%2==0&&integer.x2%2!=0) {
						for (int i=integer.x1; i<=integer.x2+1;i++ ){
							std::cout<<i;
						}
					}
					else if (integer.x1%2!=0&&integer.x2%2==0){
						for (int i=integer.x1+1; i<=integer.x2;i++ ){
							std::cout<<i;
						}
					}
					else {
						for (int i=integer.x1+1; i<=integer.x2+1;i++ ){
						std::cout<<i;
					}

				}
					std::cout<<std::endl;
					ms(x,y);
			}

				else if (commands=="cartesian_integers"){
					v cartesian;
					std::cin>>cartesian.c>>cartesian.d;
					if (cartesian.c>cartesian.d){

					std::cout<<"Error: invalid interval as "<<cartesian.c<<">"<<cartesian.d<<std::endl;
					}
					else {
					v cart_variable;
					cart_variable.x1=cartesian.c;
					cart_variable.x2=cartesian.d;
					cart_variable.x3=x;
					cart_variable.x4=y;
					int cartesian_x1[2]={cart_variable.x3,cart_variable.x4};
					int cartesian_x2[2]={cart_variable.x1,cart_variable.x2};


					for (int i=0;i<2;i++){
						if (cart_variable.c==cart_variable.d){
						ms(x,y);
						}
						else {

							for (int j=0; j<2; j++){
								std::cout<<cartesian_x1[i]<<cartesian_x2[j];
						}// end for

					}// end else

				}// end for
					std::cout<<std::endl;
					ms(x,y);
					}// end else
			}//end if

			else if (commands=="exit"){
			std::cout<<"Bye bye: Terminating interval calculator program."<<std::endl;
			return false;
			}
			else {
			std::cout<<"Error::invalid command"<<std::endl;

			}


	}

		}// end if statement


	//if commands are waiting yet or if commands are wrong


	// Exit the program for command exit









