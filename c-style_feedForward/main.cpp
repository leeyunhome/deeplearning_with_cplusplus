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

// 뉴런에 따라서 feedForward가 어떤 값을 리턴할지가 달라지는 거예요.
// 각각의 뉴런에대해서
// 그래서 결국 구현을 하고 다듬다보면 객체지향으로 가게됩니다.
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
	// 가장먼저 코딩을 할 때는 가장 먼저 작은 거 부터 해야되겠죠?
	// x같은 많이 쓰이는 짧은 변수명 보다는
	// 이렇게 직관적으로 의미를 알 수 있는 input 요런 이름을 써주는 게 좋습니다.


	//double output = activation;

	return 0;
}


