/* $Id: Mul.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.operators;

import pex.Expression;

/**
 * Class for describing the multiplication ('*') operator
 */
public class Mul extends BinaryExpression {

  /** Serial number for serialization. */
  private static final long serialVersionUID = 201608281352L;

  /**
   * @param first
   * @param second
   */
  public Mul(Expression first, Expression second) {
    super(first, second);
  }

  //FIXME (possibly) add other methods: e.g. accept, toString, etc.
}
