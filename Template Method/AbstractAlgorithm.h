#pragma once

class AbstractAlgorithm
{
public:
	void executeAlgorithm()
	{
		step1();
		step2();
		step3();
	}

	virtual ~AbstractAlgorithm() = default;

private:
	virtual void step1() = 0;
	virtual void step2() = 0;
	virtual void step3() = 0;
};