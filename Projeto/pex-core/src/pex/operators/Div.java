package pex.operators;

import pex.Expression;

/**
 * Class for describing the division ('/') operator
 */
public class Div extends BinaryExpression {

  /** Serial number for serialization. */
  private static final long serialVersionUID = 201611110909L;

  /**
   * @param first
   * @param second
   */
  public Div(Expression first, Expression second) {
    super(first, second);
  }

  public void accept(OperatorVisitor v) {
  	v.visitDiv(this)
  }
}