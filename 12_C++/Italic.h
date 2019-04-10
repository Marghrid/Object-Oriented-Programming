#pragma once

#include "Style.h"
#include "TextItem.h"
class Italic : public Style {
public:
	Italic(TextItem* textItem) : Style(textItem) {}
	
	std::string render() const override {
		return "<i>" + Style::render() + "</i>";
	}
};