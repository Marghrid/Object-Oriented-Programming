#ifndef __TEXTITEM
#define __TEXTITEM

#include <iostream>

class TextItem {
public:
	virtual ~TextItem() {}

	virtual std::string text() const = 0;

	virtual std::string render() const = 0;	
};
#endif