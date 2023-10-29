const char far ascii[128] =
{
	0  ,27 ,'1','2','3','4','5','6','7','8','9','0','-','=',8  ,9  ,
	'q','w','e','r','t','y','u','i','o','p','[',']',13 ,0  ,'a','s',
	'd','f','g','h','j','k','l',';',39 ,'`',0  ,92 ,'z','x','c','v',
	'b','n','m',',','.','/',0  ,'*',0  ,' ',0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,'7','8','9','-','4','5','6','+','1',
	'2','3','0',127,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0
};

const char far ascii_shifted[128] =
{
	0  ,27 ,'!','@','#','$','%','^','&','*','(',')','_','+',8  ,9  ,
	'Q','W','E','R','T','Y','U','I','O','P','{','}',13 ,0  ,'A','S',
	'D','F','G','H','J','K','L',':',34 ,'~',0  ,'|','Z','X','C','V',
	'B','N','M','<','>','?',0  ,'*',0  ,' ',0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,'7','8','9','-','4','5','6','+','1',
	'2','3','0',127,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0
};

const char far ascii_special[128] =
{
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,13 ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,'/',0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,
	0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0
};

const char far* key_names[256] =
{         
    "","Esc","1","2","3","4","5","6","7","8","9","0","Minus",
    "Equal","Backspace","Tab","Q","W","E","R","T","Y","U","I","O",
    "P","L Bracket","R Bracket","Enter","L Ctrl","A","S","D","F",
    "G","H","J","K","L","Semicolon","R Apostrophe","L Apostrophe",
    "R Shift","Slash","Z","X","C","V","B","N","M","Comma",
    "Period","Divide","L Shift","Pad Multiply","L Alt","Spacebar",
    "Caps Lock","F1","F2","F3","F4","F5","F6","F7","F8","F9",
    "F10","Num Lock","Scroll Lock","Pad 7","Pad 8","Pad 9","Pad Minus",
    "Pad 4","Pad 5","Pad 6","Pad Plus","Pad 1","Pad 2","Pad 3","Pad 0",
    "Pad Period","","","","F11","F12","","","","","","","","","",
    "","","","","","","","","","","","","","","","","","","","",
    "","","","","","","","","","","","","","","","","","","","",
    "","","","","","","","","","","","","","","","","","",
    "Pad Enter","R Ctrl","","","","","","","","","","","","","",
    "","","","","","","","","","","Pad Divide","","","R Alt","",
    "","","","","","","","","","","","","","Home","Up","Page Up",
    "","Left","","Right","","End","Down","Page Down","Insert",
    "Delete","","","","","","","","","","","","","","","","","",
    "","","","","","","","","","","","","","","","","","","","",
    "","","","","","",""
};
