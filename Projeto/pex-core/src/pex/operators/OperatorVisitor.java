public interface OperatorVisitor {
	
	// Binary operators:
	void visitAdd(Add add);
	void visitSub(Sub sub);
	void visitMul(Mul mul);
	void visitDiv(Div div);
	void visitMod(Mod mod);
	
	void visitSequence(Sequence s);

}