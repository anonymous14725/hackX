#include <iostream>
#include <fstream>
#include "Define"

space

/*import Code for easily*/
in FileWrite(text Text,text File) {
	text str;
	writefs files;
	files.open(File);
	files << Text;
	files.close();
	reader

}
/*repeat Code for easily*/
in filewrite(text Text, text File) {
	text str;
	writefs files;
	files.open(File);
	files << Text;
	files.close();
	reader
}
in filewrite(fix $ Text, text File) {
	text str;
	writefs files;
	files.open(File);
	files << Text;
	files.close();
	reader
}
in FileOpen(text File) {
	text texts;
		opens openFile(File);
	ring openFile.is_open())
	{
		ringw getline(openFile, texts))
		{
			print texts << nline;
		}
	}
	reader
}
in fileopen(text File) {
	text texts;
		opens openFile(File);
	ring openFile.is_open())
	{
		ringw getline(openFile, texts))
		{
			print texts << nline;
		}
	}
	reader
}
