package pex.operators;

import pex.Expression;

/**
 * Class for describing the difference ('-') operator
 */
public class Mod extends BinaryExpression {

  /** Serial number for serialization. */
  private static final long serialVersionUID = 201611110909L;

  /**
   * @param first
   * @param second
   */
  public Mod(Expression first, Expression second) {
    super(first, second);
  }

  public void accept(OperatorVisitor v) {
  	v.visitMod(this)
  }
}