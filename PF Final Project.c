#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct data
{
	int arn;
	char pw[16];
}rec;
COORD coord={0,0};

char per='%';
void gotoxy(int x,int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void loading();
int status(int *, int*);
int english(int*, int*);
int physics(int*, int*);
int maths(int*, int *);
int iq(int*, int *);

int main()
{
	FILE *fptr;
	
	 int x,y,j;
     system("COLOR F3");
     int countr=0,countw=0,i;
     int *cpr,*cpw;
     cpr=&countr;
     cpw=&countw;
     float score;
     char choice;
     char name[20];
     mainhome:
     system("cls");
     printf("\t\t\t");
     for(i=0;i<36;i++){

     printf("%c",177);
}

     printf("\n\t\t\t%c WELCOME TO FAST NUCES ENTRY TEST %c",177,177) ;
     printf("\n\t\t\t");
     for(i=0;i<36;i++){
     printf("%c",177);
     }
     printf("\n\t\t        %c    -------------------------     %c",177,177);
     printf("\n\t\t        %c        Enter 'S' to start        %c  ",177,177);
     printf("\n\t\t        %c        Enter 'Q' to quit         %c       ",177,177);
     printf("\n\t\t        %c    -------------------------     %c \n\t\t        ",177,177);
     for(i=0;i<36;i++){

     printf("%c",177);
}
    printf("\n\n\t\t");
     choice=toupper(getch());


	if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");
int arn,r;
char pw[16];
    printf("\n\n\n\n\n\n\n\n\n\n\t\tEnter your name:");
    scanf("%s",&name);
    system("cls");
    label:
    printf("Enter the ARN number and password :");
    scanf("%d %s",&rec.arn,rec.pw);
    if((fptr=fopen("data.txt","r"))==NULL)
    {
    	printf("record not found");
	}
	else
	{
	
	while(!feof(fptr))
	{
			fscanf(fptr,"%d %s",&arn,pw);
		for(j=0;j<16;j++)
		if (arn==rec.arn&&pw[j]==rec.pw[j])
		r=1;

	}
	
	fclose(fptr);
	}
if(r==1)	
    {
	loading();

    system("cls");
    printf("\n ------------------  Welcome %s to FAST NUCES ENTRY TEST ------------------",name);
	printf("\n\n\n 1.You are required to comply with the directions given by the head invigilator\n at the examination venue.");
	printf("\n\n 2.Mark the correct answer carefully. Once you Have Marked you cannot change it.");
	printf("\n\n 3.The test consists of four sections from which user must attempt all.");
	printf("\n\n 4.Students must complete the test within the 60 minute time frame\n allotted for the exam.");
	printf("\n\n 5.To answer the question press the alphabet that is correct and then 'Enter' \nto submit the answer.");
	printf("\n\n 6.Every student have his\her distinct questions.");
	printf("\n\n\n\t\t\t BEST OF LUCK.");
    printf("\n\n\t\t\t Press S to start the Test!\n");
    if (toupper(getch())=='S')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
    	}

    home:
    system("cls");
    countr=0;
    int ch=1,check[5]={0,0,0,0,0};
    countw=0;
    srand(time(0));
    for(i=1;i<=4;i++)
     {
		system("cls");
    	random:
		ch=rand()%4 + 1;
    	if(check[ch]==ch)
    	{
			goto random;
		}
    	check[ch]=ch;
      
	switch(ch)
		{
		case 1:{
			english(&countr , &countw);
			break;
		}
		case 2:{
			physics(&countr , &countw);
			break; 
			}
		case 3:{
			iq(&countr ,&countw);
			break;
		}
		case 4:{
			maths(&countr ,&countw);
			break;
		}
		}

	}
	loading();
	status(&countr, &countw);
	return 0;
	}
	else
	{
		puts("\nInvalid ARN or password!");
		goto label;
	}
	}
	}



int english(int *cpr,int *cpw){
	
	int i;
	for (i=1; i<=5; i++)
	{
	switch(i){
		case 1:
		system("cls");
		printf("\t\t\tSection: English\n\n\n");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
		printf("\n1. I haven't got  _____.");
		printf("\n\nA. no brothers or sisters \t\tB. brothers or sisters\n\nC. any brothers or sisters \t\tD. some brothers and sisters\n\n\n\n\t");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
				(*cpr)++;
			    getch();
			    break;
			}

		else
		    {
		    printf("\n\nWrong!!! The correct answer is C. any brothers or sisters");
		    (*cpw)++;
            getch();
	        break;
			}

        case 2:
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n2. I have Programming classes _________.");
		printf("\n\nA. on Saturday afternoons\t\tB. in Saturday afternoons \n\nC. at Saturday afternoons  \t\tD. by Saturday afternoons\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is A. on Saturday afternoons");
		    (*cpw)++;
			getch();
		    break;
			}

        case 3:
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
		printf("\n3. Suddenly, we heard a loud noise, but outside, there_______________there! ?");
		printf("\n\nA. was nobody \t\tB. is anybody \n\nC. wasn't nobody\t\tD. was somebody\n\n\n\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {printf("\n\nWrong!!! The correct answer is A. was nobody");
		    (*cpw)++;
			getch();
		    break;
			}

        case 4: 
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
		printf("\n\n4. She arrived _________ Victoria Station half an hour late");
		printf("\n\nA. in  \t\tB. at\n\nC. on\t\tD. by\n\n\n\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is B. at");
		    (*cpw)++;
			getch();
			break;
			}

        case 5:
        	system("cls");
			printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
        	printf("\n\n5. Jack ___________ English, Spanish and a bit of French");
        	printf("\n\nA. speak\t\tB. speaks\n\nC. is speaking\t\tD. speaking.\n\n\n\n");
        	if (toupper(getch())=='B')
            {
			printf("\n\nCorrect!!!");
			(*cpr)++;
            getch();
            break;
			}
        else
		    {
			printf("\n\nWrong!!! The correct answer is B. speaks");
		    (*cpw)++;
			getch();
		    break;
			}
		
		
}
}

}
int physics(int *cpr, int *cpw)
{
	int i;
	for (i=1; i<=5; i++)
	{
	switch(i){

        case 1:
        system("cls");
        printf("\t\t\tSection: Physics\n\n\n");
        printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
		printf("\n\n1. Work done will be maximum if the angle between the force F and displacement d is");
		printf("\n\nA. 45\t\tB. 90\n\nC. 180 \t\tD. 0 \n\n\n\n");
		if (toupper(getch())=='D' )
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is D. 0°");
		    (*cpw)++;
			getch();
		    break;
			}

		case 2:
		system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
		printf("\n\n2. A man travels a distance of 20 km from his home to office, and 10 km towards his house back.Then the displacement covered by the man in the whole trip is");
		printf("\n\nA.Zero km\t\tB.50 km\n\nC.30 km\t\t\tD.10 km\n\n\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;}
		else
		    {
			printf("\n\nWrong!!! The correct answer is D.10 km");
			(*cpw)++;
			getch();
		    break;
			}

		case 3:
		system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n\n\n3. Newton's laws of motion were published in the year of");
		printf("\n\nA.1787\t\tB.1887\n\nC.1987\t\tD.1687\n\n\n\n");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is D.1687");
			(*cpw)++;
			getch();
		    break;
		    }
	    case 4:
	    system("cls");
	    printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n\n\n4. Formula to find the average velocity of a body is given by ");
		printf("\n\nA.V=u+at\t\tB.S=ut+1/2at^2\n\nC.S={u+a/2(2n-1)}\t\tD.V=(u+v)/2\n\n\n\n");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is D.V=(u+v)/2");
			(*cpw)++;
			getch();

		    break;
			}

        case 5:
        system("cls");
        printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n\n\n5. The Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb\n\n\n\n");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
            printf("\n\nWrong!!! The correct answer is A.Faraday");
			(*cpw)++;
			getch();
			break;
		    }

}
}
}
int iq(int *cpr,int *cpw){
	
	int i;
	for (i=1; i<=5; i++)
	{
	switch(i){
		case 1:
		system("cls");
		printf("\t\t\tSection: IQ\n\n\n");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
		printf("\n1. If you rearrange the letters 'BARBIT', you would have the name of a:");
		printf("\n\nA. Ocean  \t\tB. Country\n\nC. Animal \t\tD. City\n\n\n\n\t");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
				(*cpr)++;
			    getch();
			    break;
			}

		else
		    {
		    printf("\n\nWrong!!! The correct answer is C. Animal");
		    (*cpw)++;
            getch();
	        break;
		    }

        case 2:
        system("cls");
        printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrongs: %d\n\n\n",*cpr,*cpw);
		printf("\n2. Nia,  twelve years old, is three times as old as her sister. How old will Nia be when sheis twice as old as her sister?");
		printf("\n\nA. 15\t\tB. 16 \n\nC. 17  \t\tD.18\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is B. 16");
		    (*cpw)++;
			getch();
		    break;
			}

        case 3:
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n3.  Two people can make 2 bicycles in 2 hours. How many people are needed to make 12 bicycles in 6 hours?");
		printf("\n\nA. 2\t\tB. 4\n\nC. 0  \t\tD.3\n\n\n\n");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;
			}
		else
		    {
			printf("\n\nWrong!!! The correct answer is B. 4");
		    (*cpw)++;
			getch();
		    break;
			}

        case 4: 
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n\n4.  Which number should come next in this series? 25,24,22,19,15");
		printf("\n\nA. 14  \t\tB. 5\n\nC. 30\t\tD. 10\n\n\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;}
		else
		    {
			printf("\n\nWrong!!! The correct answer is D. 10");
		    (*cpw)++;
			getch();
		    break;
			}

        case 5: 
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
        printf("\n\n5. Mary had a number of cookies. After eating one, she gave half the remainder to her sister. After eating another cookie, she gave half of what was left to her brother. Mary now had only five cookies left. How many cookies did she start with?");
        printf("\n\nA. 11\t\tB. 22\n\nC. is 23\t\tD. 45\n\n\n\n");
        if (toupper(getch())=='C')
            {
			printf("\n\nCorrect!!!");
			(*cpr)++;
            getch();
            break;
			}
        else
		    {
			printf("\n\nWrong!!! The correct answer is C. 23");
		    (*cpw)++;
			getch();
		    break;
			}
		
		
}
}
}
int maths(int *cpr,int *cpw){
	
	int i;
	for (i=1; i<=5; i++)
	{
	switch(i){
		case 1: 
		system("cls");
		printf("\t\t\tSection: Maths\n\n\n");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n1. If Logx (1 / 8) = - 3 / 2, then x is equal to ");
		printf("\n\nA. -4  \t\tB. 4\n\nC. 1/8 \t\tD. 10\n\n\n\n\t");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
				(*cpr)++;
			    getch();
			    break;
			}

		else
		    {
		    printf("\n\nWrong!!! The correct answer is B. 4");
		    (*cpw)++;
            getch();
	        break;
		       }

        case 2: 
        system("cls");
        printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n2. 20 %c of 2 is equal to:",per);
		printf("\n\nA. 20\t\tB. 4 \n\nC. 0.4 \t\tD.0.04\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C. 0.4");
		       (*cpw)++;
			   getch();
		       break;}

        case 3: 
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n3. When a parabola represented by the equation y - 2x 2 = 8 x + 5 is translated 3 units to the left and 2 units up, the new parabola has its vertex at ");
		printf("\n\nA. (-5,-1)\t\tB. (-5,-5)\n\nC. (-1,-3)  \t\tD.(-2,-3)\n\n\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A. (-5,-1)");
		       (*cpw)++;
			   getch();
		       break;}

        case 4: 
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
		printf("\n\n4.  If f(x) is an odd function, then | f(x) | is");
		printf("\n\nA. an odd function  \t\tB. an even function\n\nC. neither odd nor even\t\tD. odd and even\n\n\n\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");
			(*cpr)++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B. an even function");
		       (*cpw)++;
			   getch();
		       break;}

        case 5: 
        system("cls");
		printf("\t\t\t\t\tNo. of Rights: %d	No. of Wrong: %d\n\n\n",*cpr,*cpw);
        printf("\n\n5. The period of 2 sin x cos x is ");
        printf("\n\nA. 4pi^2\t\tB. 2pi\n\nC. 4pi\t\tD. pi\n\n\n\n");
        if (toupper(getch())=='D')
               {printf("\n\nCorrect!!!");
			   (*cpr)++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is D. pi");
		       (*cpw)++;
			   getch();
		       break;
			   }
		
		
}
}
} 

void loading()
{
	int i,j;
	system("cls");
    printf("\n\n\n\n\n\t\t\tLOADING...\n\t\t\t\n\t\t\t");
    for(i=0;i<20;i++)//1st
    {
    	printf("%c",287);
	}
    printf("\n\t\t\t");
    printf("%c\t\t   %c\n\t\t\t",272,273);//left corner
    for(i=0;i<20;i++)//2nd
    {
    	printf("%c",286);
	}

    gotoxy(25,8);
	for(i=0;i<19;i++)//loading
	{
		for(j=0;j<20000000;j++);
		printf("%c",177);
	}

	printf("%c \n\t\t",273);

	for(j=0;j<20;j++)
    {
    	printf("%c",286);
	}
}

int status(int *cpr,int *cpw)
{
	float score;
    system("cls");
	score=(float)(*cpr)*5;
	if(score>0.00 && score<50)
	{
		printf("\n\n\t\t*****************Test Result*******************\n\n");
		printf("\n\t\t Number of Rights: %d\n", *cpr);
   		printf("\n\t\t Number of Wrongs: %d\n", *cpw);
	    printf("\n\t\t Your Score %.2f %",score);
		printf("\n\n\t\t Status: Fail");
		getch();
	}

	 else if(score>=50 && score<=100)
	{
	    printf("\n\n\t\t**************** Test Result *****************\n\n");
	    printf("\n\t\t Number of Rights: %d\n", *cpr);
   		printf("\n\t\t Number of Wrongs: %d\n", *cpw);
	    printf("\n\t\t Your Score %.2f %c",score,per);
	    printf("\n\n\t\t Status: Pass\n\n\t\t Congratulation!!");
	    getch();
	}

}


