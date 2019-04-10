#pragma once

#include "Style.h"
#include "TextItem.h"
class Bold : public Style {
public:
	Bold(TextItem* textItem) : Style(textItem) {}
	
	std::string render() const override {
		return "<b>" + Style::render() + "</b>";
	}
};