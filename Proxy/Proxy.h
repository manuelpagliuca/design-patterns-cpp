#pragma once

#include "RealSubject.h"

class Proxy : public Subject
{
private:
	mutable RealSubject* realSubject;

public:
	Proxy() : realSubject(nullptr) {}

	void request() const override
	{
		if (!realSubject)
		{
			std::cout << "Proxy: Creating RealSubject." << std::endl;
			realSubject = new RealSubject();
		}

		realSubject->request();
	}

	~Proxy() override
	{
		delete realSubject;
	}
};