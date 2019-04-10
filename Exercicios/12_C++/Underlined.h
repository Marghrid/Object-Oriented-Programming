#pragma once

#include "TextItem.h"
#include "Style.h"
class Underlined : public Style {
public:
	Underlined(TextItem* textItem) : Style(textItem) {}
	
	std::string render() const override {
		return "<u>" + Style::render() + "</u>";
	}
};