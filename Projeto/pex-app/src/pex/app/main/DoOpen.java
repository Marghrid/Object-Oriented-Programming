/** @version $Id: DoOpen.java,v 1.1 2016/10/14 18:08:27 david Exp $ */
package pex.app.main;

import java.io.FileNotFoundException;
import java.io.IOException;

import pex.Manager;
import pt.tecnico.po.ui.Command;
import pt.tecnico.po.ui.Input;

/**
 * Open existing interpreter.
 */
public class DoOpen extends Command<Manager> {
	
	Input<String> _filename;
	/**
	 * @param receiver
	 */
	public DoOpen(Manager receiver) {
		super(Label.OPEN, receiver);
    	_filename = _form.addStringInput(Message.openFile());

	}

	/** @see pt.tecnico.po.ui.Command#execute() */
	@Override
	public final void execute() {
		ObjectInputStream in = new ObjectInputStream(
			new BufferedInputStream(
				new FileInputStream(_filename))); 
	}

}
