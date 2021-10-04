// C-style to C++ (OOP) implementation of the feed-forward
// 어떤 행위를 할 때 거기에 필요한 최소한의 데이터가 있겠죠?
// 뭔가 컴퓨터가 뭔가 작업을 하려면 입력을 받고 자기의 속성에 맞춰서
// 작업을 하고 출력을 내놓는 그런 방식이죠?
// 그래서 객체를 선언을 해줄 때는 행위와 데이터를 묶어 줍니다.

#include <stdio.h>
#include <iostream>
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

	double input_, output_; // saved for back-prop

public:	// behaviors
	double feedForward(const double& _input)
	{
		input_ = _input;

		const double sigma = w_ * _input + b_;

		output_ = getAct(sigma);

		return output_;
	}

	double getAct(const double& x) // c
	{
		// linear or identity activation function
		return x;

		// ReLU max(0, x);
		// return MAX2(0, x);
	}

	void propBackward(const double& target)
	{
		const double alpha = 0.1; // learning rate

		const double grad = (output_ - target) * getActGrad(output_);

		w_ -= alpha * grad * input_; // last input_ came from d(wx+b)/dw = x
		b_ -= alpha * grad * 1.0;	 // last 1.0 came from d(wx+b)/db = 1
	}

	double getActGrad(const double& x)
	{
		// linear or identity activation function
		return 1.0;

		// ReLU if (x > 0.0) return 1.0; else 0.0;
	}

	void feedForwardAndPrint(const double& input)
	{
		printf("%f %f \n", input, feedForward(input));
	}
};

int main()
{
	using namespace std;
	// initialize my_neuron
	Neuron my_neuron(2.0, 1.0);

	for (int r = 0; r < 100; r++)
	{
		std::cout << "Training " << r << std::endl;
		my_neuron.feedForwardAndPrint(1.0);
		my_neuron.propBackward(4.0);
		std::cout << "w = " << my_neuron.w_ << " b = " << my_neuron.b_ << std::endl;
	}

	return 0;
}


