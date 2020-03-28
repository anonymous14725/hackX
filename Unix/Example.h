#include "Define"
space
namespace Example{
out Triangle(){
	ringf in i =0 ;i <= 5;i++){
	ringf in d=0;d <= i;d++){
		Cursor(i,d);
		print "*";
		}
	}
}
out ASCII(){
	print "[1]Change Text to ASCII" << nline << " [2]Change ASCII to Text" << nline;
	print "Please Enter Number:";
	in as;
	sent as;
	ring as == 1){
		ringw true){
		print "Please Enter Character:";
		$ a;
		sent a;
		print in(a) << nline;
		}
	}
	ring as == 2){
		ringw true){
		print "Please Enter Number:";
		in s;
		sent s;
		print $(s) << nline;
		}
	}
}
out Animation(){
	system "sl");
}
out OS(){
	text Com;
	$ d = Cursor(1800,1);
	Cursor(1800,1);
	ringw true){
	
	println ">";
	sent Com;
	text str;		
	ring Com == "echo" && sent str){
		Cursor(1800,1);
		print str;
		
		}
	backring ring Com == "Triangle"){
		Triangle();
			}
	backring ring Com == "clear"){
		clears
		cursor(1800,1);
			}
	backring ring Com == "ls"){
		ls
			}
	backring ring Com == "help"){
		println "::ls";
		println "::clear";
		println "::exit";
		println "::Triangle";
		println "::echo [Text]";
	}
	backring{
		print Com << " not word in Command";
	}
		}
	
	}
}
