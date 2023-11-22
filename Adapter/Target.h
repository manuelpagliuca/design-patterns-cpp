#pragma once

// Desidered interface from the client
class Target
{
public:
	virtual ~Target() {}
	virtual void request() const = 0;
};