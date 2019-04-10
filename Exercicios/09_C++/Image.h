/* FILE: Image.h   **   Margarida Ferreira   **   80832 */

#ifndef __Image__
#define __Image__

#include "XMLElement.h"
#include <iostream>

class Image : public XMLElement {
public:
	std::string render() const override { return "<Image src=\"IMG\"/>"; }
};

#endif