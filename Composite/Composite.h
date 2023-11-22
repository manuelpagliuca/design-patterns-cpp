#pragma once
#include "Component.h"

class Composite : public Component
{
private:
	std::vector<Component*> children;

public:
	void add(Component* component)
	{
		children.push_back(component);
	}

	void remove(unsigned int index)
	{
		Component* child = children[index];
		children.erase(children.begin() + index);
		delete child;
	}

	void remove(Component* child)
	{
		auto it = std::find(children.begin(), children.end(), child);
		children.erase(it);
		delete *it;
	}

	void operation() const override
	{
		std::cout << "Composite operation" << std::endl;
		for (const auto& child : children)
		{
			child->operation();
		}
	}

	~Composite() override
	{
		for (auto& child : children)
		{
			delete child;
		}
	}
};