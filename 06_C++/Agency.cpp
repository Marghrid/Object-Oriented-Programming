// Agency.cpp

#include "Agency.h"
#include <vector>

Beneficiary* Agency::who_needs_it_most() const {
	Beneficiary* who_needs_it_most;

	std::vector<Beneficiary*>::const_iterator it;
	for(it = _beneficiaries.begin() ; it < _beneficiaries.end(); it++)
		if((*it)->received_help() < who_needs_it_most->received_help())
			who_needs_it_most = *it;

	return who_needs_it_most;
}
