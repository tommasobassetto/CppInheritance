#include "StopSign.h"
#include "Sign.h"
#include "RoadEvent.h"

StopSign::StopSign(int set_x, int set_y) : RoadEvent(EventType::MESSAGE), Sign("STOP", set_x, set_y)
{

}