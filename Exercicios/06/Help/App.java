public class App {
	public static void main(String[] args) {
		Region r1 = new Region();

		Village v1 = new Village();
		Village v2 = new Village();
		Village v3 = new Village();

		Individual i11 = new Individual();
		Individual i12 = new Individual();
		Individual i13 = new Individual();
		Individual i14 = new Individual();
		Individual i15 = new Individual();

		Individual i21 = new Individual();
		Individual i22 = new Individual();
		Individual i23 = new Individual();
		Individual i24 = new Individual();
		Individual i25 = new Individual();

		Individual ii1 = new Individual();
		Individual ii2 = new Individual();

		v1.addIndividual(i11);
		v1.addIndividual(i12);
		v1.addIndividual(i13);
		v1.addIndividual(i14);
		v1.addIndividual(i15);

		v2.addIndividual(i21);
		v2.addIndividual(i22);
		v2.addIndividual(i23);
		v2.addIndividual(i24);
		v2.addIndividual(i25);

		r1.addVillage(v1);
		r1.addVillage(v2);

		r1.receiveHelp(100);
	}
}