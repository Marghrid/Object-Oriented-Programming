#include "TextItem.h"
#include "Span.h"
#include "Style.h"
#include "Bold.h"
#include "Italic.h"
#include "Underlined.h"

int main() {
	Span s1("um");
	Span s2("dois");
	Span s3("três");
	Span s4("quatro");

	Bold b(&s1);
	Italic i(&s2);
	Underlined u(&s3);
	Italic iu(&u);

	std::cout << b.render() << std::endl;
	std::cout << i.render() << std::endl;
	std::cout << iu.render() << std::endl;
	std::cout << s4.render() << std::endl;

	return 0;
}