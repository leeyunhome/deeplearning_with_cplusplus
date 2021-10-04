// C-style to C++ (OOP) implementation of the feed-forward
// 어떤 행위를 할 때 거기에 필요한 최소한의 데이터가 있겠죠?
// 뭔가 컴퓨터가 뭔가 작업을 하려면 입력을 받고 자기의 속성에 맞춰서
// 작업을 하고 출력을 내놓는 그런 방식이죠?
// 그래서 객체를 선언을 해줄 때는 행위와 데이터를 묶어 줍니다.

#include <stdio.h>
#define MAX2(a, b) (a) > (b) ? (a) : (b)

class Neuron
{
public:
	Neuron()
		: w_(2.0), b_(1.0)
	{}

	Neuron(const double& w_input, const double& b_input)
		: w_(w_input), b_(b_input)
	{}

public: // attributes
	double w_;	// weight of an input
	double b_;	// /bias

public:	// behaviors
	double feedForward(const double& input)
	{
		const double sigma = w_ * input + b_;

		return getActivation(sigma);
	}

	double getActivation(const double& x) // c
	{
		// linear or identity activation function
		return x;

		// ReLU max(0, x);
		// return MAX2(0, x);
	}

	void feedForwardAndPrint(const double& input)
	{
		printf("%f %f \n", input, feedForward(input));
	}
};

int main()
{
	// initialize my_neuron
	// 어차피 나중에는 요값들을 훈련을 시켜서 자기가 결정하도록
	// 만들어 줍니다.
	Neuron my_neuron(2.0, 1.0);

	for (double input = 0.0; input < 3.0; input += 1.0)
		my_neuron.feedForwardAndPrint(input);

	//my_neuron.feedForwardAndPrint(0.0);
	//my_neuron.feedForwardAndPrint(1.0);
	//my_neuron.feedForwardAndPrint(2.0);
	
	// OOP를 사용을 하면은 나중에 사용을 할 때 굉장히 편합니다.
	// 반복적으로 사용할 부분은 가급적으로 이렇게 OOP를 사용해서
	// 정리를 하는 게 좋겠죠?

	return 0;
}


