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
in Notify(text Title,text Message){
	text Command;
	Command+="notify-send "+Title;
	Command+=" "+Message;
	system Command.Cstr);
	reader
}
in Notification(text Title,text Message,text icon){
	text Command;
	Command+="notify-send "+Title;
	Command+=" "+Message;
	Command+=" -i"+icon;
	system Command.Cstr);
	reader
}
in MessageBox(text Commands,text Text){
	text Command;
	Command += "zenity --"+Commands;
	Command += " --text=";
	Command += dq;
	Command += Text;
	Command += dq;
	system Command.Cstr);
	reader
}
in MessageBox(text Commands,text Title,text Text){
	text Command;
	Command += "zenity --"+Commands;
	Command += " --title=";
	Command +=dq;
	Command +=Title;
	Command +=dq;
	Command += " --text=";
	Command +=dq;
	Command +=Text;
	Command +=dq;
	system Command.Cstr);
	reader
}
in VideoGraphic(text Path){
	text Command;
	Command +="mplayer -vo caca ";
	Command +=Path;
	system Command.Cstr);
	reader
}
