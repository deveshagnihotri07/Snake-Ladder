 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 #include <windows.h>
 #include <stdio.h>
 #include <time.h>
 using namespace std;

 int arr[99],snake[]={99,3,95,75,93,88,80,26,62,18,64,35,54,34,17,7};
 int ladder[]={71,91,63,81,28,84,9,30,4,14,20,38,49,59};
 char player1[20],player2[20];
 int p1=-1,p2=-1,PLAYER=0,yo=0,p1jit=0,p2jit=0,tempo=0;
 HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

void line(int LINE)
{
    if(LINE==0)
    {
        for(int i=LINE;i<(LINE+10);i++)
        {
                    if(p1==i&&p2==i)
                    {
                    	SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    	cout<<"#,";
                        SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
                        SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
						cout<<"@";
						SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
						cout<<"  |   ";
					}
					else
					{
                    	if(i==p1)
						{
                    	    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    		cout<<"##";
                    	    SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
                    	}
                   		else if(i==p2)
                    	{
                     	   SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
							cout<<"@@";
							SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
				    	}
						else
						{
						if(i!=9)
							cout<<"0";
							cout<<arr[i];
				   		}
				   		cout<<"   |   ";
				    }
					
        }
    }
    else
    {
        if(LINE%2==0)
        {
            LINE=LINE*10;
            for(int i=LINE;i<(LINE+10);i++)
                {
                    /*if(arr[i]!=200)
                        cout<<arr[i];
                       else
                        cout<<"#";
                    cout<<"   |   ";*/
                    if(p1==i&&p2==i)
                    {
                    	SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    	cout<<"#,";
                        SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
                        SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
						cout<<"@";
						SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
						cout<<"  |   ";
					}
					else
					{
                    	if(i==p1)
						{
                    	    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    		cout<<"##";
                    	    SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
                    	}
                   		else if(i==p2)
                    	{
                     	   SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
							cout<<"@@";
							SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
				    	}
						else
						{
							cout<<arr[i];
				    	}
				    	cout<<"   |   ";
				    }				    
                }
        }
        else
        {
            LINE=LINE*10;
            for(int i=(LINE+10)-1;i>=LINE;i--)
                {
                    /*if(arr[i]!=200)
                        cout<<arr[i];
                       else
                        cout<<"#";
                        cout<<"   |   ";*/
                    if(p1==i&&p2==i)
                    {
                    	SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    	cout<<"#,";
                        SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
                        SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
						cout<<"@";
						SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
						cout<<"  |   ";
					}
					else
					{
                    	if(i==p1)
						{
                    	    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
                    		cout<<"##";
                    	    SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
                    	}
                   		else if(i==p2)
                    	{
                     	   SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
							cout<<"@@";
							SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
				    	}
						else
						{
							cout<<arr[i];
				    	}
				    	cout<<"   |   ";
				    }
                }
        }
    }
}
void start()
{
    cout<<"\t\tEnter first player name: ";
    cin>>player1;
    cout<<"\t\tEnter second player name: ";
    cin>>player2;
}
delay(unsigned int ms)
{
	clock_t goal=ms+clock();
	while(goal>clock())
	{
	}
}

void display()
{
    system("cls");//SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
    cout<<"\t\t\t\t\t\t     welcome \t\t  \t \t\t\t";cout<<player1<<":-> ";SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);cout<<"##";SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);cout<<"\n";
	cout<<"\t\t\t\t\t         Snake And Ladder \t\t\t\t\t";cout<<player2<<":-> ";SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);cout<<"@@";SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);cout<<"\n";
	cout<<"\n";
    cout<<"========================================================================================================================";
    cout<<"   ";line(9);cout<<"     =====================";
    cout<<"   -----------------------------------------------------------------------------------------       |       SNAKES:\n";
    cout<<"    ";line(8);cout<<"     |-------------------\n";
    cout<<"   -----------------------------------------------------------------------------------------       |\n";
    cout<<"    ";line(7);cout<<"     | 99->03  ||  95->75 \n";
    cout<<"   -----------------------------------------------------------------------------------------       | 93->88  ||  80->26 \n";
    cout<<"    ";line(6);cout<<"     | 62->18  ||  64->35 \n";
    cout<<"   -----------------------------------------------------------------------------------------       | 54->34  ||  17->07 \n";
    cout<<"    ";line(5);cout<<"     |\n";
    cout<<"   -----------------------------------------------------------------------------------------       |-------------------\n";
    cout<<"    ";line(4);cout<<"     |       LADDERS:\n";
    cout<<"   -----------------------------------------------------------------------------------------       |-------------------\n";
    cout<<"    ";line(3);cout<<"     | 71->91  ||  63->81 \n";
    cout<<"   -----------------------------------------------------------------------------------------       | 49->59  ||  28->84 \n";
    cout<<"    ";line(2);cout<<"     | 20->38  ||  09->30 \n";
    cout<<"   -----------------------------------------------------------------------------------------       | 04->14  \n";
    cout<<"    ";line(1);cout<<"     |\n";
    cout<<"   -----------------------------------------------------------------------------------------       |\n";
    cout<<"    ";line(0);cout<<"     =====================\n";
    cout<<"========================================================================================================================\n";
}

int check()
{
    if(p1>99)
    {
        p1jit=1;
        return 0;
    }
    else if(p2>99)
    {
        p2jit=1;
		return 0;
	}
	else
        return 1;
}
int dice()
{
    srand(time(NULL));
    return (rand()%6+1);
}
void input(int p1,int p2)
{
    if(PLAYER==0)
    	PLAYER=1;
    else if(PLAYER==1)
		PLAYER=0;
}

void re_fill(int p1,int p2)
{
    for(int i=0;i<=99;i++)
    {
        if(i==p1-1){
		}
            //arr[i]=200;
        if(i==p2-1){
		}
            //arr[i]=200;
        else
            arr[i]=i+1;
    }
}
int p1_entery=0,p2_entery=0;
void enterycheck()
{
	if(PLAYER==0&&p1_entery==0)
	{
		int temp;
            cout<<player1<<"'s turn .... PRESS ANY KEY TO ROLL THE DICE";
			_getch();
            temp=dice();
            cout<<"\n"<<temp;
            _getch();
        if(temp==6)
		{
			p1_entery=1;
			cout<<"\nCONGRATS!!!! YOU HAVE ENTERED THE GAME";
			_getch();	
		}    
		else
		{
			cout<<"\nSORRY TRY AGAIN ";
			_getch();
		}	
	}
	if(PLAYER==1&&p2_entery==0)
	{
		int temp;
            cout<<player2<<"'s turn .... PRESS ANY KEY TO ROLL THE DICE";
			_getch();
            temp=dice();
            cout<<"\n"<<temp;
            _getch();
        if(temp==6)
		{
			p2_entery=1;
			cout<<"\nCONGRATS!!!! YOU HAVE ENTERED THE GAME";
			_getch();	
		}    
		else
		{
			cout<<"\nSORRY TRY AGAIN ";
			_getch();
		}	
	}
}
int main()
{
    for(int i=0;i<=99;i++)
    {
       arr[i]=i+1;
    }
    display();
    start();
    while(check())
    {
        arr[99]=100;
        display();
        enterycheck();
        display();
        if(PLAYER==0&&p1_entery==1)
        {
            int temp;
            cout<<player1<<"'s turn .... PRESS ANY KEY TO ROLL THE DICE";
			_getch();
            temp=dice();
            tempo=temp;
            SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
            cout<<"\n"<<temp;
            SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
            p1=p1+temp;
            for(int i=0;i<16;i++)
            {
            	if(i%2==0)
            	{
            		if(p1==snake[i]-1)
            		{
            			p1=snake[i+1];
            			p1--;
            		}
            	}
			}
			for(int i=0;i<14;i++)
			{
				if(i%2==0)
				{
					if(p1==ladder[i]-1)
					{
						p1=ladder[i+1];
						p1--;
				    }
				}
			}
			if(p1==p2)
			{
				p2=-1;
				SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
				cout<<"\n"<<player1<<" CRUSHED "<<player2;
				SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
				Beep(500,900);
            	delay(200);
            	Beep(500,900);
            	delay(200);
            	Beep(500,900);
			}
        }
        if(PLAYER==1&&p2_entery==1)
        {
            int temp;
            cout<<player2<<"'s turn .... PRESS ANY KEY TO ROLL THE DICE";            
			_getch();
            temp=dice();
            tempo=temp;
            SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
            cout<<"\n"<< temp;
            SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
            p2+=temp;
            for(int i=0;i<16;i++)
            {
            	if(i%2==0)
            	{
            		if(p2==snake[i]-1)
            		{
            			p2=snake[i+1];
            			p2--;
            		}
            	}
			}
			for(int i=0;i<14;i++)
			{
				if(i%2==0)
				{
					if(p2==ladder[i]-1)
					{
						p2=ladder[i+1];
						p2--;
					}
				}
			}
			if(p1==p2)
			{
				p1=-1;
				SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
				cout<<"\n"<<player2<<" CRUSHED "<<player1;
				SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
			}
        }
        if(tempo!=6)
        	{
				input(p1,p2);
			}
		else 
		{
		    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"\n(6)GOT ONE MORE CHANCE!!!!!!!";
			SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);	
		}
        _getch();
     re_fill(p1,p2);
	}
display();	
if(p1jit==1)
{
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout<<"\n\t\t\t\t"<<player1<<" WON THIS GAME!!!!!!";
	SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
}
if(p2jit==1)
{
	SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout<<"\n\t\t\t\t"<<player2<<" WON THIS GAME!!!!!!";
	SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
}
SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
cout<<"\t\t\t\t\n THANKS FOR PLAYING\n\t\t\t\tPress any two keys to exit";
SetConsoleTextAttribute(h,15|FOREGROUND_INTENSITY);
Beep(500,900);
delay(200);
Beep(500,900);
delay(200);
Beep(500,900);
_getch();	
}
