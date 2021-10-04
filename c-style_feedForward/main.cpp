// C-style implementation of the feed-forward
#include <stdio.h>

int main()
{
	// attributes of a neuron
	double w;	// weight of an input
	double b;	// /bias

	double input;	// input x
	// output y = f(\sigma) = f(w*input x + b)
	// ������� �ڵ��� �� ���� ���� ���� ���� �� ���� �ؾߵǰ���?
	// x���� ���� ���̴� ª�� ������ ���ٴ�
	// �̷��� ���������� �ǹ̸� �� �� �ִ� input �䷱ �̸��� ���ִ� �� �����ϴ�.
	double sigma = w * input + b;

	// linear or identity activation function f(x) = x
	double activation = sigma;	// identity act f(x) = x;
	//double activation = f(sigma);

	double output = activation;

	return 0;
}


