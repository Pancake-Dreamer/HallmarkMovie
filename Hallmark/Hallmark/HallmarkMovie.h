#pragma once
#include <string>

class HallmarkMovie {

private:
	int snowflakes;
	int deadParents = 1;
	std::string quaintSmallTownName;
	int failedKisses = 1;
	std::string misunderstandingType;
	bool everythingResolvedWithKissAtEnd;

public:

	void incrementDeadParents()
	{
		deadParents++;
	}

	void incrementFailedKisses()
	{
		failedKisses++;
	}



};