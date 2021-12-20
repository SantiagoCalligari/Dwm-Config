//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "/home/santiago/.blocks/volume.sh",                                 0,             10},
	{"", "/home/santiago/.blocks/battery.sh",                                5,             0},
	{"", "/home/santiago/.blocks/brightness.sh",                             0,             12},
	{"", "/home/santiago/.blocks/date.sh", 				         30,		0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
