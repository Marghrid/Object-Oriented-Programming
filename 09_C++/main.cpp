/* FILE: main.cpp   **   Margarida Ferreira   **   80832 */

#include "XMLElement.h"
#include "XMLComposite.h"
#include "Page.h"
#include "Paragraph.h"
#include "Span.h"
#include "Image.h"
#include <iostream>

int main() {
	Span s1;
	Span s2;
	Span s3;

	Image i1;
	Image i2;
	Image i3;

	Paragraph pr1;
	Paragraph pr2;

	Page pg1;
	Page pg2;

	pr1.add(&s1);
	pr1.add(&i1);
	pg1.add(&s2);
	pg1.add(&i2);
	pr1.add(&pg1);
	pr2.add(&s3);
	pr2.add(&i3);
	pg2.add(&pr2);

	std::cout << "Uma página com um parágrafo:" << std::endl;
	std::cout << pg2.render() << std::endl;
	std::cout << "Um parágrafo com uma página (e mais umas coisas):" << std::endl;
	std::cout << pr1.render() << std::endl;

	return 0;
}