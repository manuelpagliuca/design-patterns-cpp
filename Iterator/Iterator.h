#pragma once

template <typename T>
class Iterator
{
public:
	virtual T getNext() = 0;
	virtual bool hasNext() = 0;
};