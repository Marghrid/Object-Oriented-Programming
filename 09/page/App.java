public class App {
	public static void main(String[] args) {
		Page p = new Page();
		Paragraph p1 = new Paragraph();
		Paragraph p2 = new Paragraph();

		Span t1 = new Span("azul azul azul");

		Image i1 = new Image();
		Image i2 = new Image();

		p1.add(t1);
		p2.add(i1);
		p2.add(i2);

		p.add(p1);
		p.add(p2);

		System.out.println(p.render());
	}
}