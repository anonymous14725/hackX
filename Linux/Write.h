#include <iostream>
#include <string>
#include "Define"
space

/*Write for print*/
out Write(text STR) {
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += dq;
	Command += " ";
	system Command.Cstr);
	readers;
}

out Write(text STR, text STR2){
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += STR2;
	Command += dq;
	system Command.Cstr);
	readers;
}
/*Counter for Write*/
in Write(text STR, in INT, text STR3) {
	print STR << INT << STR3;
	readers;
		reader
}
in write(in INT, text STR, text STR3) {
	print INT << STR << STR3;
		reader
}
in Write(text STR, text STR2, in INT) {
	print STR << STR2 << INT;
	reader
}
out write(text STR, text STR2, text STR3) {
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += STR2;
	Command += STR3;
	Command += dq;
	system Command.Cstr);
	readers;
}
out Write(text STR, text STR2, text STR3) {
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += STR2;
	Command += STR3;
	Command += dq;
	system Command.Cstr);
	readers;
}
out Write(text STR, text STR2, text STR3, text STR4) {
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += STR2;
	Command += STR3;
	Command += STR4;
	Command += dq;
	system Command.Cstr);
	readers;
}
out write(text STR, text STR2, text STR3, text STR4) {
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += STR2;
	Command += STR3;
	Command += STR4;
	Command += dq;
	system Command.Cstr);
	readers;
}
/*Number for int*/
in Write(in INT) {
	print INT;
		reader
}
in Write(text STR, in INT) {
	print STR << " " << INT;
		reader
}
in Write(in INT, text STR) {
	print INT << " " << STR;
		reader
}

/*Repeat Code for Easily*/
out write(text STR) {
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += dq;
	Command += " ";
	system Command.Cstr);
}

out write(text STR, text STR2) {
	text Command;
	Command += "echo ";
	Command += dq;
	Command += STR;
	Command += "\n";
	Command += STR2;
	Command += dq;
	system Command.Cstr);
		
}

in write(in INT) {
	print INT << " ";
		reader
}

in write(text STR, in INT) {
	print STR << " " << INT;
		reader
}
in write(in INT, text STR) {
	print INT << " " << STR;
		reader
}
/*This Code for Every Number*/

in write(text STR, dec8 Double) {
	print STR << " " << Double;
		reader
}
in Write(dec8 Double, dec8 Double2) {
	print Double << Double2;
	reader
}
