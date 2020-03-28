#include "Define"
#include <iostream>
#include <fstream>
#include <string>
/*Code for developer web*/
out SourceWeb(text AddWebsite,text AddressFile){
	text Command;
	Command += "httrack "+AddWebsite;
	Command += " +* -r6";
	Command += " -O "+AddressFile;
	system Command.Cstr);
		opens openFile(AddressFile);
}
/*Test speed internet*/
in spinternet(text testURL){
	text Command;
	Command += "ping "+testURL;
	system Command.Cstr);
	reader
}
in SPinternet(text testURL){
	text Command;
	Command += "ping "+testURL;
	system Command.Cstr);
	reader
}
/*Dissconnect WIFI in Device*/
out DisconnectWifi(){
	system "ifconfig ens33 down");
	system "ifconfig wlan0 down");
	system "ifconfig eth0 down");
}
/*Connect WIFI in Device*/
out ConnectWifi(){
	system "ifconfig ens33 up");
	system "ifconfig wlan0 up");
	system "ifconfig eth0 up");
}
