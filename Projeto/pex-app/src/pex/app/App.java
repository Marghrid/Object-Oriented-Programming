/** @version $Id: App.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.app;

import static pt.tecnico.po.ui.Dialog.IO;

//FIXME import used core classes
import pex.Manager;
import pex.ParserException;
import pex.app.main.MainMenu;
import pt.tecnico.po.ui.Menu;

/**
 * This is a sample client for the expression evaluator.
 * It uses a text-based user interface.
 */
public class App {
  /**
   * @param args
   */
  public static void main(String[] args) {
    Manager _manager = new Manager();

    String datafile = System.getProperty("import"); //$NON-NLS-1$
    if (datafile != null) {
      try {
        //FIXME read import file into core object (use Parser instance)
      } catch (ParserException e) {
        // no behavior described: just present the problem
        e.printStackTrace();
      }
    }

    Menu menu = new MainMenu(_manager);
    menu.open();
    
    IO.close();
  }

}
