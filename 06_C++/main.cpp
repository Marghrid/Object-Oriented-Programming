// main.cpp

#include "Beneficiary.h"
#include "Region.h"
#include "Village.h"
#include "Individual.h"
#include "Agency.h"

int main() {

	Agency a;

	Region r1;

	Village v1;
	Village v2;
	Village v3;

	Individual i11;
	Individual i12;
	Individual i13;
	Individual i14;
	Individual i21;
	Individual i22;
	Individual i23;
	Individual i24;

	v1.add(i11);
	v1.add(i12);
	v1.add(i13);
	v1.add(i14);

	v2.add(i21);
	v2.add(i22);
	v2.add(i23);
	v2.add(i24);

	r1.add(v1);
	r1.add(v2);

	a.add_beneficiary(&v1);
	a.add_beneficiary(&v2);
	a.add_beneficiary(&i11);
	a.add_beneficiary(&i13);
	a.add_beneficiary(&i22);
	a.add_beneficiary(&r1);

	a.help(&v1, 10);
	a.help(&v2, 20);
	a.help(&i11, 30);
	a.help(&i13, 40);
	a.help(&i22, 50);
	a.help(&r1, 60);

	a.help_most_needed(100);
	std::cout << a.ask_total_received_help(&r1) << std::endl;
	std::cout << r1.received_help() << std::endl;

	std::cout << std::endl;
	std::cout << "After all interactions" << std::endl;
	std::cout << v1 << std::endl << v2 << std::endl << i11 << std::endl;
	std::cout << i13 << std::endl << i22 << std::endl << r1 << std::endl;

	return 0;
}