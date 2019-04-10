// Beneficiary.cpp

#include "Beneficiary.h"
#include <vector>

void Beneficiary::distribute(int help) {
	if (_subdivisions.size() > 0) {
		int help_for_each = help / _subdivisions.size();

		if (help_for_each > 0) {
			std::vector<Beneficiary*>::iterator it;
			for(it = _subdivisions.begin() ; it < _subdivisions.end(); it++)
				(*it)->receive_help(help_for_each);
		}
	}
}

int Beneficiary::total_subdivisions_received_help() const {
	if (_subdivisions.size() == 0)
		return _received_help;

	int total = 0;

	std::vector<Beneficiary*>::const_iterator it;
	for(it = _subdivisions.begin() ; it < _subdivisions.end(); it++)
		total += (*it)->total_subdivisions_received_help();
	
	return total;
}	