#pragma once

#define ESCAPE "\033["
#define END "m"

#define RESET 		ESCAPE "0" END
#define BOLD 		ESCAPE "1" END
#define FAINT 		ESCAPE "2" END
#define ITALIC		ESCAPE "3" END
#define UNDERLINE	ESCAPE "4" END
#define SLOW_BLINK	ESCAPE "5" END
#define RAPID_BLINK 	ESCAPE "6" END
#define REVERSE 	ESCAPE "7" END
#define HIDDEN 		ESCAPE "8" END
#define CROSSED		ESCAPE "9" END

#define FONT0 		ESCAPE "10" END
#define FONT1 		ESCAPE "11" END
#define FONT2 		ESCAPE "12" END
#define FONT3 		ESCAPE "13" END
#define FONT4 		ESCAPE "14" END
#define FONT5 		ESCAPE "15" END
#define FONT6 		ESCAPE "16" END
#define FONT7 		ESCAPE "17" END
#define FONT8 		ESCAPE "18" END
#define FONT9 		ESCAPE "19" END 

#define NORMAL 		ESCAPE "22" END

#define BLACK 		ESCAPE "30" END
#define RED 		ESCAPE "31" END
#define GREEN 		ESCAPE "32" END
#define YELLOW 		ESCAPE "33" END
#define BLUE 		ESCAPE "34" END
#define MAGENTA 	ESCAPE "35" END
#define CYAN 		ESCAPE "36" END
#define WHITE 		ESCAPE "37" END

#define BBLACK		ESCAPE "40" END
#define BRED		ESCAPE "41" END
#define BGREEN		ESCAPE "42" END
#define BYELLOW		ESCAPE "43" END
#define BBLUE 		ESCAPE "44" END
#define BMAGENTA	ESCAPE "45" END
#define BCYAN 		ESCAPE "46" END
#define BWHITE 		ESCAPE "47" END

#define RGB(r,g,b) 	ESCAPE "38;2;"#r";"#g";"#b END
#define COLOR8(n) 	ESCAPE "38;5;"#n END

#define BRGB(r,g,b) 	ESCAPE "48;2;"#r";"#g";"#b END
#define BCOLOR8(n) 	ESCAPE "48;5;"#n END
