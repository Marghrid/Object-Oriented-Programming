// Agency.h

#ifndef __AGENCY__
#define __AGENCY__

#include "Beneficiary.h"
#include "Region.h"
#include "Village.h"
#include "Individual.h"
#include "Agency.h"
#include <vector>
#include <iostream>
#include <algorithm>

class Agency {
private:
	std::vector<Beneficiary*> _beneficiaries;

	bool belongs(Beneficiary* ben) {
		return std::find(_beneficiaries.begin(), _beneficiaries.end(),ben) != _beneficiaries.end();
	}

public:

	void add_beneficiary(Beneficiary *ben) {
		if (belongs(ben))
			std::cout << "This beneficiary is already in the agency!" << std::endl;
		else
			_beneficiaries.push_back(ben);
	}

	/* Retorna a soma de todas as ajudas recebidas
	   por cada uma das suas subdivisões.        */
	int ask_total_received_help(Beneficiary *ben) const {
		return ben->total_subdivisions_received_help();
	}

	/* Retorna o beneficiario a quem foi oferecida
	   menos ajuda até ao momento               */
	Beneficiary* who_needs_it_most() const;

	/* Oferece ajuda ao beneficiario a quem foi
	   oferecida menos ajuda até ao momento.    */
	void help_most_needed(int help) {
		who_needs_it_most()->receive_help(help);
	}

	void help(Beneficiary* ben, int help) {
		if (belongs(ben))
			ben->receive_help(help);
		else
			std::cout << "That is not a beneficiary in this agency!" << std::endl;
	}

};

#endif