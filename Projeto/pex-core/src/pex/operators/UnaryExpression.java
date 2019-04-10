/* $Id: UnaryExpression.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.operators;

import pex.Expression;

/** Class for describing unary operators. */
public abstract class UnaryExpression extends Expression {

  /** Serial number for serialization. */
  private static final long serialVersionUID = 201608281352L;

  /** The argument expression. */
  Expression _argument;

  /**
   * @param argument
   */
  public UnaryExpression(Expression argument) {
    _argument = argument;
  }

  /**
   * @return the argument
   */
  public Expression argument() {
    return _argument;
  }

}
