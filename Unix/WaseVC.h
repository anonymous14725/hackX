#include "Define"
space 

out PlayMusic(text music){
	text Command;
	Command += "play "+music;
	system Command.Cstr);
	
}
out playmusic(text music){
	text Command;
	Command += "play "+music;
	system Command.Cstr);
	
}
out RecordVoice(text NameFile){
	text Command;
	Command += "arecord -f S16_LE -r 16000 "+NameFile;
	system Command.Cstr);
	text Command2;
	Command2 += "play "+NameFile;
	system Command2.Cstr);
}
out RecordVoice(text NameFile,text rate){
	text Command;
	Command += "arecord -f S16_LE -r "+rate;
	Command +=" "+NameFile;
	system Command.Cstr);
	text Command2s;
	Command2s += "play "+NameFile;
	system Command2s.Cstr);
}
in texttospeech(text Text){
	text Command;
	Command += "espeak "+Text;
	system Command.Cstr);
	reader
}
in TexttoSpeech(text Text){
	text Command;
	Command += "espeak "+Text;
	system Command.Cstr);
	reader
}
