#include "Define"
#include <fstream>
space
/*Command Printer for print text*/
struct Printer{
public:
	//write and open file for print
	out FilePrint(text File) {
		Command += "lpr "+File;
		system Command.Cstr);
	}
	//your text for print
	out TextPrint(text Text) {
		writefs printer;
			printer.open("print.prn");
			printer << Text;
			printer.close();
		system "lpr print.prn");
	}
	out TextPrint(text Text,text Text2) {
		writefs printer;
		printer.open("print.prn");
		printer << Text << nline << Text2;
		printer.close();
		system "lpr print.prn");
	}
	out TextPrint(text Text, text Text2, text Text3) {
		writefs printer;
		printer.open("print.prn");
		printer << Text << nline << Text2 << nline << Text3;
		printer.close();
		system "lpr print.prn");
	}
	out TextPrint(text Text, text Text2,text Text3, text Text4) {
		writefs printer;
		printer.open("print.prn");
		printer << Text << nline << Text2 << nline << Text3 << nline << Text4;
		printer.close();
		system "lpr print.prn");
	}
	out TextPrint(text Text, text Text2, text Text3, text Text4, text Text5) {
		writefs printer;
		printer.open("print.prn");
		printer << Text << nline << Text2 << nline << Text3 << nline << Text4 << nline << Text5;
		printer.close();
		system "lpr print.prn");
	}
	out TextPrint(text Text, text Text2, text Text3, text Text4, text Text5, text Text6) {
		writefs printer;
		printer.open("print.prn");
		printer << Text << nline << Text2 << nline << Text3 << nline << Text4 << nline << Text5 << nline << Text6;
		printer.close();
		system "lpr print.prn");
	}
private:
	text Command;
};
