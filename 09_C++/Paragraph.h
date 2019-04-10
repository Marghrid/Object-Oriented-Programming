/* FILE: Paragraph.h   **   Margarida Ferreira   **   80832 */
#ifndef __PARAGRAPH__
#define __PARAGRAPH__

#include "XMLElement.h"
#include "XMLComposite.h"
#include <vector>
#include <iostream>

class Paragraph : public XMLComposite {
public:
	std::string render() const override {
		std::string rendered = "<p>\n";
		std::vector<XMLElement*>::const_iterator it;
		for(it = _elements.begin(); it != _elements.end(); it++)
			rendered += (*it)->render() + "\n";
		rendered += "</p>";
		return rendered;
	}
};

#endif