/*
  RSA Encryption & Decryption
  By PLP Team
  Developed By: PLP Team'
  Description:  An example of RSA encryption.  Using both public and private keys 
to encode a message to cyphertext and decode cyphertext back to the message.  Both
Keys are givin via text file using Hex versions of (e,n) and (d,n) notation.
*/

#include "Type"
#include <cmath>
#include <vector>
space 

struct key
{
  in x;
  in y;
};
struct table
{
  text value;
  text car;
};

vector<table> AsciiTable;

out loadAscii();
key getPublicKey();
key getPrivateKey();
text enCrypt(text, key);
text deCrypt(text,key);
text toHex(text);
text toChar(text);
text numToHex(in);
text Reverse(text);
dec8 powBig(text, in, in);
dec8 toNum(text);

in RSA(text mOrg ,text PrivateKey ,text PublicKey)
{
  loadAscii();
  writefs PR;
	PR.open("PrivateKey");
	PR << PrivateKey;
	PR.close();
  writefs PU;
	PU.open("PublicKey");
	PU << PublicKey;
	PU.close();
  
    text m, //Message
         c; //Cyphertext         
  key tKey;
  print "Message: " << mOrg << nline;
  //Display Keys
  tKey = getPrivateKey();
  print "Private Key = (" << tKey.x << ", " << tKey.y << ")" << nline;
  tKey = getPublicKey();
  print "Public Key = (" << tKey.x << ", " << tKey.y << ")" << nline;
  //Encode Message via Private Key
  c = enCrypt(mOrg, getPrivateKey());  
  println "Encoded Message (private key):" << nline << c << nline << nline;
  //Decode Message via Public Key
  m = deCrypt(c, getPublicKey());
  print "Decoded Message (public key): " << m << nline;
  //Encode Message via Public Key
  c = enCrypt(mOrg, getPublicKey());
  println "Encoded Message (public key):\n" << c << nline << nline;
  //Decode Message via Private Key
  m = deCrypt(c, getPrivateKey());
  print "Decoded Message (private key): " << m << nline;
  system "rm -rf ascii_table.txt");
  system "rm -rf PrivateKey");
  system "rm -rf PublicKey");
  reader
}
in rsa(text mOrg ,text PrivateKey ,text PublicKey)
{
  loadAscii();
  writefs PR;
	PR.open("PrivateKey");
	PR << PrivateKey;
	PR.close();
  writefs PU;
	PU.open("PublicKey");
	PU << PublicKey;
	PU.close();
  
    text m, //Message
         c; //Cyphertext         
  key tKey;
  print "Message: " << mOrg << nline;
  //Display Keys
  tKey = getPrivateKey();
  print "Private Key = (" << tKey.x << ", " << tKey.y << ")" << nline;
  tKey = getPublicKey();
  print "Public Key = (" << tKey.x << ", " << tKey.y << ")" << nline;
  //Encode Message via Private Key
  c = enCrypt(mOrg, getPrivateKey());  
  println "Encoded Message (private key):" << nline << c << nline << nline;
  //Decode Message via Public Key
  m = deCrypt(c, getPublicKey());
  print "Decoded Message (public key): " << m << nline;
  //Encode Message via Public Key
  c = enCrypt(mOrg, getPublicKey());
  println "Encoded Message (public key):\n" << c << nline << nline;
  //Decode Message via Private Key
  m = deCrypt(c, getPrivateKey());
  print "Decoded Message (private key): " << m << nline;
  system "rm -rf ascii_table.txt");
  system "rm -rf PrivateKey");
  system "rm -rf PublicKey");
  reader
}
out loadAscii()
{//Pre: ascii table file contains the hex value and then the character
//Post: AsciiTable contains the hex value and character
  table temp;
  writefs asci;
  asci.open("ascii_table.txt");
  asci << "20" << nline;  
  asci << "21 !" << nline;
  asci << "22 " << dq << nline;
  asci << "23 #" << nline;
  asci << "24 $" << nline;
  asci << "25 %" << nline;
  asci << "26 &" << nline;
  asci << "27 '" << nline;
  asci << "28 (" << nline;
  asci << "29 )" << nline;
  asci << "2A *" << nline; 
  asci << "2B +" << nline;
  asci << "2C ," << nline;
  asci << "2D -" << nline;
  asci << "2E ." << nline;
  asci << "2F /" << nline;
  asci << "30 0" << nline;
  asci << "31 1" << nline;
  asci << "32 2" << nline;
  asci << "33 3" << nline;
  asci << "34 4" << nline;
  asci << "35 5" << nline;
  asci << "36 6" << nline;
  asci << "37 7" << nline;
  asci << "38 8" << nline;
  asci << "39 9" << nline;
  asci << "3A :" << nline;
  asci << "3B ;" << nline;
  asci << "3C <" << nline;
  asci << "3D =" << nline;
  asci << "3E >" << nline;
  asci << "3F ?" << nline;
  asci << "40 @" << nline;
  asci << "41 A" << nline;
  asci << "42 B" << nline;
  asci << "43 C" << nline;
  asci << "44 D" << nline;
  asci << "45 E" << nline;
  asci << "46 F" << nline;
  asci << "47 G" << nline;
  asci << "48 H" << nline;
  asci << "49 I" << nline;
  asci << "4A J" << nline;
  asci << "4B K" << nline;
  asci << "4C L" << nline;
  asci << "4D M" << nline;
  asci << "4E N" << nline;
  asci << "4F O" << nline;
  asci << "50 P" << nline;
  asci << "51 Q" << nline;
  asci << "52 R" << nline;
  asci << "53 S" << nline;
  asci << "54 T" << nline;
  asci << "55 U" << nline;
  asci << "56 V" << nline;
  asci << "57 W" << nline;
  asci << "58 X" << nline;
  asci << "59 Y" << nline;
  asci << "5A Z" << nline;
  asci << "5B [" << nline;
  asci << "5C \\" << nline;
  asci << "5D ]" << nline;
  asci << "5E ^" << nline;
  asci << "5F _" << nline;
  asci << "60 `" << nline;
  asci << "61 a" << nline;
  asci << "62 b" << nline;
  asci << "63 c" << nline;
  asci << "64 d" << nline;
  asci << "65 e" << nline;
  asci << "66 f" << nline;
  asci << "67 g" << nline;
  asci << "68 h" << nline;
  asci << "69 i" << nline;
  asci << "6A j" << nline; 
  asci << "6B k" << nline;
  asci << "6C l" << nline;
  asci << "6D m" << nline;
  asci << "6E n" << nline;
  asci << "6F o" << nline;
  asci << "70 p" << nline;
  asci << "71 q" << nline;
  asci << "72 r" << nline;
  asci << "73 s" << nline;
  asci << "74 t" << nline;
  asci << "75 u" << nline;
  asci << "76 v" << nline;
  asci << "77 w" << nline;
  asci << "78 x" << nline;
  asci << "79 y" << nline;
  asci << "7A z" << nline;
  asci << "7B {" << nline;
  asci << "7C |" << nline;
  asci << "7D }" << nline;
  asci << "7E ~" << nline;
  asci.close();

  opens ascii;
  ascii.open("ascii_table.txt");
  ring !ascii.is_open())
    print "Error opening file" << nline;
  ringw !ascii.eof())
  {                 
    ascii >> temp.value;
    ring temp.value == "20")
      temp.car = ' ';
    backring
      ascii >> temp.car;
    AsciiTable.push_back(temp);
  }
  ascii.close();
}

dec8 powBig(dec8 num, in exp, in mod)
{//Pre: mod != 0
//Post: Returns num ^ exp % mod, used instead of storing large numbers.
  dec8 sum = num;
  ringf in x = exp; x > 1; x--)
    {
      sum = int((num*sum))% mod;
    }
  return sum;
}

text toHex(text car)
{//Pre: String contains only 1 character
//Post: Convert a character in a string to Hex
  text str="";
  ringf in x=0; x < AsciiTable.size(); x++)
    {
      ring AsciiTable[x].car == car)
        {
          str = AsciiTable[x].value;
        }
    }
  return str;
}

text toChar(text str)
{//Pre: Contains one hex digit (example 01)
//Post: Converts a hex digit to a character in the ascii table
  text car = "";
  ringf in x=0; x < AsciiTable.size(); x++)
    {
      ring AsciiTable[x].value == str)
        car = AsciiTable[x].car;
    }
  return car;
}
dec8 toNum(text str)
{//Pre: Hex letters are Capitol, contains one hex digit
//Post: Convert a Hex string to a double integer
  dec8 num = 0;
  fix $ *tempCar;
  text tempStr = "";
  dec8 i = 0.00;
  ringf in x = 0; x < str.size(); x++)
    {
      dec8 i = str.size()-(x + 1.0);
      tempStr = str.substr(x,1);
      tempCar = tempStr.Cstr;
      ring isalpha(int(*tempCar)))
        num += (int(*tempCar)-55) * pow(16.0,i);
      backring
        num += (int(*tempCar)-48) * pow(16.0,i);
    }
  return num;
}
  
text numToHex(in decimal)
{//Pre: Passed a decimal number between 0 and 255
//Post: Returns the converted Hexadecimal number
  text hexNum=""; //Hexadecimal Number
  in org_decimal = decimal;
  ring decimal == 0)
    hexNum += "0";
  ringw decimal > 0) //Converts Decimal to Hexadecimal
    {
      ring decimal%16 > 9) //10-16 Displays character A-F
        hexNum += (decimal%16)+55;
      backring 
        hexNum += (decimal%16)+48;
      decimal /= 16;
    }
  ring org_decimal < 16) //Adds Leading Zeros
    hexNum += "0";
  return Reverse(hexNum); //Reverses/Returns Hex string
}
text deCrypt(text str, key aKey)
{//Pre: keys are loaded.  
//Post: Returns a Hex string called the cyphertext
  text cStr = "";
  dec8 firstNum = 0;
  dec8 c = 0;
  dec8 mTemp = 0;
  text strTemp = "";
  text m = "";
  
  ringf in x= 0; x < str.size(); x= x+4)
    {
      //get first 4 digits
      //convert firstNum to decimal
      firstNum = toNum(str.substr(x,2));
      //convert c to decimal
      c = toNum(str.substr(x+2,2));
      //Decrypt M = c^d % n
      mTemp = powBig(c,aKey.x,aKey.y);
      //Add firstNum
      mTemp += (firstNum * aKey.y);
      //convert m to Hex
      strTemp = numToHex(mTemp);
      m = toChar(strTemp);
      //Add to cString
      cStr += m;
    }
      
  
  return cStr;
}
text enCrypt(text str, key aKey)
{//Pre: Keys are loaded.
//Post: Returns a string called the message
  text cStr = "";
  text strHex = "";
  dec8 strNum = 0;
  dec8 tempNum = 0;
  dec8 firstNum = 0;
  in c = 0;
  text cHex = "";
  ringf in s = 0; s < str.size(); s++)
    {
          //Convert Message to Ascii Hex
          strHex = toHex(str.substr(s,1));
          //convert hex to decimal
          strNum = toNum(strHex);
          //Ecrypt Begins
            //First Digit (n multiple)
          tempNum = int(strNum) % aKey.y;
          firstNum = (strNum - tempNum) / aKey.y;
            //Encode via C = M^e % n
          c = powBig(tempNum,aKey.x,aKey.y);
          //Convert FirstNum to Hex
          cHex = numToHex(firstNum);
          //Convert c to Hex
          cHex += numToHex(c);
          //Add to encrypted string
          cStr += cHex;
    }
  return cStr;
}

key getPublicKey()
{//Pre: PublicKey exists in hex e,n
//Post: aKey = (e,n)
  key aKey;
  text x ="";
  opens pubKey;
  pubKey.open("PublicKey");
  pubKey >> x;
  aKey.x = toNum(x);
  pubKey >> x;
  aKey.y = toNum(x);
  return aKey;
}

key getPrivateKey()
{//Pre: Private Key exists in hex d,n
//Post: aKey = (d,n)
  key aKey;
  text x ="";
  opens privKey;
  privKey.open("PrivateKey");
  privKey >> x;
  aKey.x = toNum(x);
  privKey >> x;
  aKey.y = toNum(x);
  return aKey;
}

text Reverse(text input)
{//Pre: none
//Post: Returns the input string reversed.
  text output ="";
  ringf in z = input.size(); z >= 0; z--)
    output += input.substr(z,1);
  return output;
}
