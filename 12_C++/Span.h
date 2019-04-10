/* FILE: Span.h   **   Margarida Ferreira   **   80832 */
#ifndef __SPAN__
#define __SPAN__

#include <iostream>
#include "TextItem.h"

class Span : public TextItem {
private:
	std::string _text;
public:
	Span(std::string text) { _text = text; }

	std::string render() const override { return "<span>" + _text + "</span>"; }
	
	std::string text() const override { return _text; }
};

#endif