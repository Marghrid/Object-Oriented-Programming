/** @version $Id: DoManageProgram.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.app.main;

import pex.Manager;
import pex.app.evaluator.EvaluatorMenu;
import pt.tecnico.po.ui.Command;
import pt.tecnico.po.ui.Input;
import pt.tecnico.po.ui.Menu;

/**
 * Open menu for managing programs.
 */
public class DoManageProgram extends Command<Manager>{
  /** Input field. */
  Input<String> _program;

  /**
   * @param receiver
   */
  public DoManageProgram(Manager receiver) {
    super(Label.MANAGE_PROGRAM, receiver);
    _program = _form.addStringInput(Message.requestProgramId());
  }

  /** @see pt.tecnico.po.ui.Command#execute() */
  @Override
  public final void execute() {
    //FIXME implement
  }

}
