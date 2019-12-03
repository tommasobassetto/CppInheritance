#pragma once
#include "Sign.h"
#include "RoadEvent.h"

class StopSign: public Sign, public RoadEvent // C++ objects aren't limited to inheriting from one parent
{
public:
	StopSign(int set_x, int set_y);
};

