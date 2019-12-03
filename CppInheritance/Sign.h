#pragma once
#include <string>
class Sign
{
protected:
	std::string info_;
	int x_, y_;

public:
	Sign(std::string set_info, int set_x, int set_y);
};

