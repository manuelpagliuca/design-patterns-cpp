#pragma once

#include <unordered_map>
#include "ConcreteFlyweight.h"

class FlyweightFactory {
private:
	std::unordered_map<std::string, Flyweight*> flyweights;

public:
	Flyweight* getFlyweight(const std::string& key)
	{
		if (flyweights.find(key) != flyweights.end())
		{
			return flyweights[key];
		}

		Flyweight* newFlyweight = new ConcreteFlyweight(key);
		flyweights[key] = newFlyweight;

		return newFlyweight;
	}

	~FlyweightFactory()
	{
		for (auto& pair : flyweights)
		{
			delete pair.second;
		}
	}
};
