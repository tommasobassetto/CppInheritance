#pragma once

enum class EventType { MESSAGE, HAZARD };
// Message is for things like exit info on a highway or speed limit signs
// Hazard indicates things like a crosswalk or slippery road surface

class RoadEvent
{
protected:
	EventType event_type_;

public:
	RoadEvent(EventType set_event_type) { event_type_ = set_event_type; }
};

