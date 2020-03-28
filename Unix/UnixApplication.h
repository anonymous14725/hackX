#include "Define"
space

in Dialog(text Commands,text Message,text Width,text Height){
	text Command;
	Command += "dialog --"+Commands;
	Command += " "+Message;
	Command += " "+Width;
	Command += " "+Height;
	system Command.Cstr);
	reader
}
in dialog(text Commands,text Message,text Width,text Height){
	text Command;
	Command += "dialog --"+Commands;
	Command += " "+Message;
	Command += " "+Width;
	Command += " "+Height;
	system Command.Cstr);
	reader
}
