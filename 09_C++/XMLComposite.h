/* FILE: XMLComposite.h   **   Margarida Ferreira   **   80832 */
#ifndef __XMLComposite__
#define __XMLComposite__

#include "XMLElement.h"
#include <vector>
#include <algorithm>

class XMLComposite : public XMLElement {
protected:
	std::vector<XMLElement*> _elements;

public:
	void add(XMLElement* element) override {
		_elements.push_back(element);
	}

	void remove(XMLElement* element) override {
		_elements.erase(std::find(_elements.begin(), _elements.end(), element));
	}	
};

#endif