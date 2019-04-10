/* FILE: Page.h   **   Margarida Ferreira   **   80832 */
#ifndef __PAGE__
#define __PAGE__

#include "XMLElement.h"
#include "XMLComposite.h"
#include <vector>
#include <iostream>

class Page : public XMLComposite {
public:
	std::string render() const override {
		std::string rendered = "<page>\n";
		std::vector<XMLElement*>::const_iterator it;
		for(it = _elements.begin(); it != _elements.end(); it++)
			rendered += (*it)->render() + "\n";
		rendered += "</page>";
		return rendered;
	}
};

#endif