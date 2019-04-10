/* FILE: XMLElement.h   **   Margarida Ferreira   **   80832 */
#ifndef __XMLELEMENT__
#define __XMLELEMENT__

#include <stdexcept>
#include <iostream>

class XMLElement {
public:
	virtual std::string render() const = 0;

	virtual void add(XMLElement* element) {
		throw std::runtime_error("function add(XMLElement) not supported");
	}

	virtual void remove(XMLElement* element) {
		throw std::runtime_error("function remove(XMLElement) not supported");
	}
};

#endif