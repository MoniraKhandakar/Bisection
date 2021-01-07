#include <stdio.h>
#include <math.h>

double f(double);
int sign(double);

int main(){
	double startA = 1, startB = 2;
	double a = startA, b = startB;
	double c = 0, fa = 0, fb = 0, fc = 1000;
	const double eps = 0.05;
	int i = 0;

	printf("Bisection Method\n");

	printf("a\t\tb\t\tc\t\tf(a)\t\tf(b)\t\tf(c)\t\t(b-a)\n\n");

	while((b-a) > eps){
		c = (a + b) / 2.0;
		fa = f(a);
		fb = f(b);
		fc = f(c);
		printf("%lf\t%lf\t%lf\t", a, b, c);
		printf("%lf\t%lf\t%lf\t", fa, fb, fc);
		printf("%lf\t\n\n",(b-a));
		if(sign(fc) == sign(fa))
			a = c;
		else
			b = c;
		i++;
	}
	printf("We find the root in iteration no = %d \n\n", i);
    printf("The Root is c = %lf\n", c);

}
	double f(double x){
	return x * x * x + 3*x - 5;
}


int sign(double x){
	if(x >= 0)
		return 1;
	return 0;
}
