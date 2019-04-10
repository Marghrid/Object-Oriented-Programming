/* FILE: Span.h   **   Margarida Ferreira   **   80832 */

#ifndef __SPAN__
#define __SPAN__

#include "XMLElement.h"
#include <iostream>

class Span : public XMLElement {
public:
	std::string render() const override { return "<span>TXT</span>"; }
};

#endif