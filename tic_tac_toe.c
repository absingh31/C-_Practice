#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define start int main()
#define winning_logic char checkwin()
#define draw return 'd'
#define bye return 0
#define read scanf
#define check if
#define terminate exit(0)
#define print printf
#define checking else if
#define last_check else
#define intermediate return 'i'

char row1[4], row2[4], row3[4];    // one memory cell for 'NULl'
char *conf_string;

winning_logic
{
    check(conf_string[0] == conf_string[1] && conf_string[1] == conf_string[2])
        return conf_string[0];

    checking(conf_string[3] == conf_string[4] && conf_string[4] == conf_string[5])
        return conf_string[3];

    checking(conf_string[6] == conf_string[7] && conf_string[7] == conf_string[8])
        return conf_string[6];

    checking(conf_string[0] == conf_string[3] && conf_string[3] == conf_string[6])
        return conf_string[0];
    
    checking(conf_string[1] == conf_string[4] && conf_string[4] == conf_string[7])
        return conf_string[1];
    
    checking(conf_string[2] == conf_string[5] && conf_string[5] == conf_string[8])
        return conf_string[2];
    
    checking(conf_string[0] == conf_string[4] && conf_string[4] == conf_string[8])
        return conf_string[0];
    
    checking(conf_string[2] == conf_string[4] && conf_string[4] == conf_string[6])
        return conf_string[2];

    last_check
    	draw;

    check(strchr(row1,'0') && strchr(row2,'0') && strchr(row3,'0'))
		intermediate;
}

start
{
	print("\tEnter '1' for Player1\n");
	print("\tEnter '2' for Player2\n");
	print("\tEnter '0' if cell is empty\n");
	print("Enter the configuration of 1st row ");
	read("%s", row1);
	print("Enter the configuration of 2nd row ");
	read("%s", row2);
	print("Enter the configuration of 3rd row ");
	read("%s", row3);
	print("The board configuration looks like: \n");
	print("\t\t%s\n", row1);
	print("\t\t%s\n", row2);
	print("\t\t%s\n", row3);
	
	char drw[]="000000000";
	conf_string = strcat(row1, row2);
	conf_string = strcat(conf_string,row3);
			
	check(!strcmp(conf_string, drw))
	{
		print("The board is Empty\n");
		terminate;
	}

	char w=checkwin();

	check(w=='d')
		print("The match is drawn\n");

	checking(w=='i')
		print("Game is in Intermediate state\n");

	last_check
		print("\nPlayer%c won\n", w);
	
	bye;
}	