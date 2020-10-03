//============================================================================
// Name        : Intervals.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
double x;
double y;
struct v;
void ms(double& x, double& y);


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
		if ((x>=0&&y>=0)||(x>=0&&y>=0)){
		std::cout<<"Error:invalid interval as  "<<x<<">"<<y<<std::endl;
		}
		else if (x<=0&&y<=0){
			std::cout<<"["<<x<<", "<<y<<"]"<<std::endl;
		}
		else {
			std::cout<<"Error:invalid interval as  "<<y<<">"<<x<<std::endl;
		}

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
void memory (double& mem1, double& mem2){
	double x1, x2;
	x1=mem1;
	x2=mem2;
	mem1=x1;
	mem2=x2;
}



/////////////////////////////////////////////////////////////////////////////
int main(){
	std::string commands{};

	double x;
	double y;
	double mr_x=0;
	double mr_y=0;
	double mem1,mem2;
	bool is_working=true;


	while (is_working==true){
	// initiate the program
		std::cout<<"input :> ";

	std::cin>>commands;

		if (commands=="enter"){
			std::cin>>x>>y;
			if (x<=y){
			mr_x=x;
			mr_y=y;
			}

			if (x<=y){
			ms(x,y);
			}
			else {
			ms(x,y);
			x=mr_x;
			y=mr_y;
			ms(x,y);
			}

		}


// return program This prints 0 and new value

	// Do things in the program
	//After initialize the program enter// add all the operations related

	// start of commands operators
		else 	if (commands=="negate"){
					if (x<y&&mr_x!=0){
					v negate;

					negate.a=-x;
					negate.b=-y;
					if (negate.a>negate.b){
						std::cout<<"["<<negate.a<<", "<<negate.b<<"]"<<std::endl;
					}
					else if (negate.a<negate.b){
						std::cout<<"["<<negate.b<<", "<<negate.a<<"]"<<std::endl;
					}
					else {
						std::cout<<"["<<0<<", "<<0<<"]"<<std::endl;
					}
					x=negate.a;
					y=negate.b;
					}
					else {
					x=mr_x;
					y=mr_y;
					ms(x,y);
					}

				}

				else if (commands=="invert"){
					v invert;


					if (x<y&& (mr_x!=0&&mr_y!=0)){

					invert.a=1/y;
					invert.b=1/x;
					x=invert.a;
					y=invert.b;
					mem1=x;
					mem2=y;
				std::cout<<"["<<x<<", "<<y<<"]"<<std::endl;


					if (x>0&&y<=0){
					std::cout<<"Error:Division by zero"<<std::endl;
					std::cout<<"--"<<std::endl;
					}


				}


					else {
						x=0;
						y=0;
						ms(x,y);
					}
				}

				else if (commands=="ms"){// stores memory
					if (mr_x!=0){
					if (x<=y){
						ms(x,y);
						mem1=x;
						mem2=y;

						}
					else {
					x=0;
					y=0;
					ms(x,y);
					mem1=x;
					mem2=y;
					}
					}
					else {
						ms(mr_x,mr_y);
					}
				}

				else if (commands=="mr"){
					if (mr_x==0&&mr_y==0){
						std::cout<<"--"<<std::endl;
					}

					if (mr_x!=0&&mr_y!=0){
					ms(mem1,mem2);// Pass to long term memory// shows memory stored
					}


				}

				else if (commands=="mc"){
					x=0;
					y=0;
					mem1=0;
					mem2=0;
					ms(x,y);// short term memory
					memory(x,y);// long term memory

				}

				else if (commands=="m+"){
					// I need both memories, sum both
					// first memory
					// second memory
					// both values
					// both value
					// long term memory
				v m_add;
					m_add.a=x+mem1;
					m_add.b=y+mem2;
					ms(x,y);
					mem1=m_add.a;
					mem2=m_add.b;
				}

				else if (commands=="m-"){
					v m_mins;
					m_mins.a=x-mem1;
					m_mins.b=y-mem2;
					ms(x,y);
					mem1=m_mins.a;
					mem2=m_mins.b;
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
					scalar_mins.a=scalar_mins.c+(-x);
					scalar_mins.b=scalar_mins.c+(-y);
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
					ms(scalar_mult.a,scalar_mult.b);
					}
					ms(scalar_mult.a,scalar_mult.b);
					x=scalar_mult.a;
					y=scalar_mult.b;
					std::cout<<"["<<x<<", "<<y<<"]"<<std::endl;
					}


				else if (commands=="scalar_divide"){
					v scalar_div;
					std::cin>>scalar_div.c;
					if (scalar_div.c>0){
					scalar_div.a=x/scalar_div.c;
					scalar_div.b=y/scalar_div.c;

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
					ms(scalar_div.a,scalar_div.b);
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
					if (x<=y){
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

										}// end of else statement
					}
					else {
					std::cout<<"--"<<std::endl;
					}
				}
				else if (commands=="interval_divide"){// improve
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
						std::cout<<"("<<i<<")"<<" ";
						}
					}
					else if (integer.x1%2==0&&integer.x2%2!=0) {
						for (int i=integer.x1; i<=integer.x2+1;i++ ){
							std::cout<<"("<<i<<")"<<" ";
						}
					}
					else if (integer.x1%2!=0&&integer.x2%2==0){
						for (int i=integer.x1+1; i<=integer.x2;i++ ){
							std::cout<<"("<<i<<")"<<" ";
						}
					}
					else {
						for (int i=integer.x1+1; i<=integer.x2+1;i++ ){

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
								std::cout<<"("<<cartesian_x1[i]<<","<<cartesian_x2[j]<<")"<<" ";
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
				if (x!=0&&y!=0){

					if (mr_x==0&&mr_y==0){
					std::cout<<"Error:invalid interval"<<std::endl;
					x=0;
					y=0;
					ms(x,y);
					}
					else {
					std::cout<<"Error:invalid interval"<<std::endl;
					x=mr_x;
					y=mr_y;
					ms(x,y);
					}

				}


			}
		}


	}

// end if statement


	//if commands are waiting yet or if commands are wrong


	// Exit the program for command exit










