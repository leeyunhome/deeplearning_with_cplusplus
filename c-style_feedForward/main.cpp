// C-style implementation of the feed-forward
#include <stdio.h>
#define MAX2(a, b) (a) > (b) ? (a) : (b)

double getActivation(const double x) // c
{
	// linear or identity activation function
	return x;

	// ReLU max(0, x);
	// return MAX2(0, x);
}

// attributes of a neuron
double w;	// weight of an input
double b;	// /bias

// ������ ���� feedForward�� � ���� ���������� �޶����� �ſ���.
// ������ ���������ؼ�
// �׷��� �ᱹ ������ �ϰ� �ٵ�ٺ��� ��ü�������� ���Ե˴ϴ�.
double feedForward(const double input)
{
	const double sigma = w * input + b;

	// linear or identity activation function f(x) = x
	const double activation = getActivation(sigma);	// identity act f(x) = x;
	//double activation = f(sigma);

	const double output = activation;

	//return output;
	return getActivation(sigma);
}

int main()
{
	// initialize attributes of neuron
	// w = ?
	// b = ?

	w = 2.0;
	b = 1.0;

	double input;	// input x
	double output;

	input = 0.0;
	output = feedForward(input);
	printf("%f %f \n", input, output);

	input = 1.0;
	output = feedForward(input);
	printf("%f %f \n", input, output);

	input = 2.0;
	output = feedForward(input);
	printf("%f %f \n", input, output);

	// output y = f(\sigma) = f(w*input x + b)
	// ������� �ڵ��� �� ���� ���� ���� ���� �� ���� �ؾߵǰ���?
	// x���� ���� ���̴� ª�� ������ ���ٴ�
	// �̷��� ���������� �ǹ̸� �� �� �ִ� input �䷱ �̸��� ���ִ� �� �����ϴ�.


	//double output = activation;

	return 0;
}


