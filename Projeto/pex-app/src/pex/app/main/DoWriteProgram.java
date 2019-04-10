/** @version $Id: DoWriteProgram.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.app.main;

import java.io.FileNotFoundException;

//FIXME import used core classes
import pex.Manager;
import pt.tecnico.po.ui.Command;
import pt.tecnico.po.ui.Input;

/**
 * Write (save) program to file.
 */
public class DoWriteProgram extends Command<Manager> {
  /** Input field. */
  Input<String> _programName;
  /** Input field. */
  Input<String> _filename;

  /**
   * @param receiver
   */
  public DoWriteProgram(Manager receiver) {
    super(Label.WRITE_PROGRAM, receiver);
    _programName = _form.addStringInput(Message.requestProgramId());
    _filename = _form.addStringInput(Message.programFileName());
  }

  /** @see pt.tecnico.po.ui.Command#execute() */
  @Override
  public final void execute() {
    //FIXME implement
  }

}
