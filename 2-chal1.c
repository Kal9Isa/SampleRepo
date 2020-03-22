#include <stdio.h>
#include <math.h>

int main(){
	float a,b;

	printf("Please Enter 2 values: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("a,b: %f, %f\n", a, b);
	printf("a + b = %f\n", a + b);
	printf("a - b = %f\n", a - b);
	printf("a x b = %f\n", a * b);
	printf("a / b = %f\n", a / b);
	float powRes = pow(a, b),
			sqrtA = sqrt(a),
			sqrtB = sqrt(b);
	printf("a to the power of b = %f\n", powRes);
	printf("square root of a is %f\n", sqrtA);
	printf("square root of b is %f\n", sqrtB);

	return 0;
	
}

// Needed to link the math library with -lm