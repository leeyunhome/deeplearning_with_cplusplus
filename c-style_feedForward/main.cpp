// C-style implementation of the feed-forward
#include <stdio.h>

int main()
{
	// attributes of a neuron
	double w;	// weight of an input
	double b;	// /bias

	double input;	// input x
	// output y = f(\sigma) = f(w*input x + b)
	// 가장먼저 코딩을 할 때는 가장 먼저 작은 거 부터 해야되겠죠?
	// x같은 많이 쓰이는 짧은 변수명 보다는
	// 이렇게 직관적으로 의미를 알 수 있는 input 요런 이름을 써주는 게 좋습니다.
	double sigma = w * input + b;

	// linear or identity activation function f(x) = x
	double activation = sigma;	// identity act f(x) = x;
	//double activation = f(sigma);

	double output = activation;

	return 0;
}


