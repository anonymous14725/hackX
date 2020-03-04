#include "Define"
#include <iostream>
#include <fstream>
#include <string>
space
/*Code for developer web*/
out testHTML(text Code){
	ofstream myfile;
	myfile.open ("out.html");
	myfile << Code;
	myfile.close();
	system "firefox out.html");
}

out TestHTML(text Code){
	ofstream myfile;
	myfile.open ("out.html");
	myfile << Code;
	myfile.close();
	system "firefox out.html");
}
out SourceWeb(text AddWebsite,text AddressFile){
	text Command;
	Command += "httrack "+AddWebsite;
	Command += " +* -r6";
	Command += " -O "+AddressFile;
	system Command.Cstr);
		opens openFile(AddressFile);
}
/*Search in web*/
out SearchWeb(text whattheSearch){
	text Command;
	Command += "firefox https://www.google.com/search?q="+whattheSearch;
	system Command.Cstr);
}
out searchweb(text whattheSearch){
	text Command;
	Command += "firefox https://www.google.com/search?q="+whattheSearch;
	system Command.Cstr);
}

/*open Website*/
out OpenURL(text URL){
	text Command;
	Command += "firefox "+URL;
	system Command.Cstr);
}
out openURL(text URL){
	text Command;
	Command += "firefox "+URL;
	system Command.Cstr);
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
/*Check Internet Connection*/
in CheckInternetConnection(){
     FILE * output;
     ring !(output = popen("/sbin/route -n | grep -c '^0\\.0\\.0\\.0'","r"))){
            return 1;
     }
    UIN i;
    fscanf(output,"%u",&i);
    ring i == 1){
        print "Your device is connected to the Internet";
    }
    backring ring i == 0){
        print "Your device is not connected to the Internet";
    }
    reader
}
