#ifndef __STYLE
#define __STYLE 
#include "Span.h"

class Style : public TextItem {
private:
	TextItem* _textItem;
public:
	Style(TextItem* textItem) { _textItem = textItem; }

	virtual std::string render() const { return _textItem->render(); }
	std::string text() const { return _textItem->text(); }
	
};
#endif