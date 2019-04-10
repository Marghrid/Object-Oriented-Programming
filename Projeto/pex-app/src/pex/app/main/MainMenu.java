/** @version $Id: MainMenu.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.app.main;

import pex.Manager;
import pt.tecnico.po.ui.Command;
import pt.tecnico.po.ui.Menu;

/**
 * Menu builder.
 */
public class MainMenu extends Menu {

  /**
   * @param receiver
   */
  public MainMenu(Manager receiver) {
    super(Label.TITLE,
        new Command<?>[] { //
            new DoNew(receiver), //
            new DoOpen(receiver), //
            new DoSave(receiver), //
            new DoNewProgram(receiver), //
            new DoReadProgram(receiver), //
            new DoWriteProgram(receiver), //
            new DoManageProgram(receiver), //
        });
  }

}
