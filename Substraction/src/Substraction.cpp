//============================================================================
// Name        : Substraction.cpp
// Author      : Kevin N.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct poly_t{

	double *a_coeff;
	int degree;

};

double poly_divide( poly_t &p, double r ){

	// p es dividend  x2+x+1
	//r con divisor 	x+1
	// quotient 		x+1
	// remainder  		 1

	poly_t divisor{nullptr, 2};
	poly_t quotient{nullptr,0};
	poly_t remainder{nullptr,0};

	divisor.a_coeff=new double [divisor.degree+1];
	divisor.a_coeff[0]=r;divisor.a_coeff[1]=1;

	remainder.degree=p.degree;
	remainder.a_coeff=new double [remainder.degree+1];

	for (unsigned int i=0; i<remainder.degree+1; i++){

		remainder.a_coeff[i]=p.a_coeff[i];
	}

	while (divisor.degree<=remainder.degree){
		unsigned int change;
		double numerator,denominator;


	}


	if (r==0&&divisor.a_coeff[0]==0){

		throw 0;
	}

	if (p.a_coeff==nullptr){

		throw 0;

	}






	return 0;
}

int pn_divide(pn_t *dividend, pn_t *divisor, pn_t *quotient, pn_t *remainder) {
    if (divisor->length == 1 && divisor->coefficients[0].numerator == 0) {
        fprintf(stderr, "Division by 0\n");
        fflush(stderr);
        return 0;
    }
    if (!pn_new(quotient, dividend->length)) {
        return 0;
    }
    if (!pn_copy(dividend, remainder)) {
        pn_free(quotient);
        return 0;
    }
    while (divisor->length <= remainder->length) {
        int offset, i;
        fraction_t division, product;
        fractions_divide(remainder->coefficients+remainder->length-1, divisor->coefficients+divisor->length-1, &division);
        offset = remainder->length-divisor->length;
        fractions_add(quotient->coefficients+offset, &division, quotient->coefficients+offset);
        for (i = 0; i < divisor->length; i++) {
            fractions_multiply(divisor->coefficients+i, &division, &product);
            fractions_subtract(remainder->coefficients+i+offset, &product, remainder->coefficients+i+offset);
        }
        pn_decrease(remainder);
    }
    pn_decrease(quotient);
    return 1;
}
