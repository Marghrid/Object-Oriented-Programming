/** @version $Id: DoReadProgram.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.app.main;

import pex.Manager;
import pt.tecnico.po.ui.Command;
import pt.tecnico.po.ui.Input;

/**
 * Read existing program.
 */
public class DoReadProgram extends Command<Manager> {
  /** Input field. */
  Input<String> _filename;

  /**
   * @param receiver
   */
  public DoReadProgram(Manager receiver) {
    super(Label.READ_PROGRAM, receiver);
    _filename = _form.addStringInput(Message.programFileName());
  }

  /** @see pt.tecnico.po.ui.Command#execute() */
  @Override
  public final void execute() {
    //FIXME implement
  }

}
