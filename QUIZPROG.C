#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void check();
void record();
void mainpage();
void test();
void qualify();
void help();
void score();
int count,i,j,countr=0;
long int prize;
char playername[20];
int main()
{
	mainpage();
	return 0;
}
void mainpage()
{
	char choice,cr,hc;
	system("cls");

	printf("\t\t\t\t QUIZ GAME \n");
	printf("\n\t\t_______________________________________________");
	printf("\n\t\t\t\t  WELCOME ");
	printf("\n\t\t\t\t    to  ");
	printf("\n\t\t\t\t THE GAME  ");
	printf("\n\t\t_______________________________________________");
	printf("\n\t\t_______________________________________________");
	printf("\n\t\t  DO U WANT TO BECOME A MILLIONAIRE? ! ! ! ! !");
	printf("\n\t\t_______________________________________________");
	printf("\n\t\t_______________________________________________");
	printf("\n\t\t -> Press S to start the game ");
	printf("\n\t\t -> Press V to view the highest score");
	printf("\n\t\t -> Press H for help");
	printf("\n\t\t -> Press Q to quit ");
	printf("\n\t\t_______________________________________________\n\t\t");
	scanf(" %c",&choice);
	if(toupper(choice)=='V')
	{
		record();
	}
	if(toupper(choice)=='H')
	{
		help();
		repeat:
		printf("\nPress B to go back to home...");
		scanf(" %c",&hc);
		if(toupper(hc)=='B')
			mainpage();
		else
			goto repeat;
	}
	else if(toupper(choice)=='Q')
		return;
	else if(toupper(choice)=='S')
	{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
		scanf("%s",playername);
		system("cls");
		printf("\n -----------------  Welcome %s to the Game  ----------------------",playername);
		printf("\n\n Here are some tips you might know before playing:");
		printf("\n -> There are 2 rounds in this Quiz Game ,QUALIFIER ROUND & CHALLENGE ROUND");
		printf("\n -> In qualifier round you will be asked a total of 4 questions to test your");
		printf("\n    general knowledge. You are eligible to play the game if you give at least 2");
		printf("\n    right answers, otherwise you can't proceed further to the challenge Round.");
		printf("\n -> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
		printf("\n    total of 8 questions. Each right answer will be awarded Rs100,000!");
		printf("\n    By this way you can win upto Rs 8,00,000 cash prize!!!!!...........");
		printf("\n -> You will be given 4 options and you have to press A, B, C or D for the");
		printf("\n    right option.");
		printf("\n -> You will be asked questions, till  right answers are given");
		printf("\n -> No negative marking for wrong answers!!");
		printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
		printf("\n\n\n Press Y to start the game!\n");
		printf("\n Press any other key to return to the main menu!");
		scanf(" %c",&cr);
		if(cr=='Y'||cr=='y')
			qualify();
		else
			mainpage();
	}
}
void record()
{
	char c2;
	system("cls");
	printf("\n--------------------------------Leaderboard--------------------------");
	printf("\n\n\t1. Yash\t\t\tRs.700000\n\t2. Jignesh\t\tRs.600000\n\t3.Utkarsh\t\tRs.400000");
	go:
	printf("\n\n\tPress B to go back to Mainhome...");
	scanf(" %c",&c2);
	if(toupper(c2)=='B')
		mainpage();
	else
		goto go;
}
void check()
{
    char cn;
    if(count>=2)
    {
	i=4;
	printf("\nYou are eligible for the quiz");
	cont:
		printf("\n\nPress C to move to next round...");
		scanf(" %c",&cn);
		if(toupper(cn)=='C')
			test();
		else
		{
			printf("\n\nPlease enter C for next round...");
			goto cont;
		}
    }
    else
	printf("\nYou are not eligible for the quiz");
}

void help()
{
    //char hc;
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .........................Quiz Game.......................................");
    printf("\n >> There are two rounds in the game, QUALIFIER ROUND & CHALLANGE ROUND");
    printf("\n >> In qualifier round you will be asked a total of 4 questions to test your ");
    printf("\n    general knowledge. You will be eligible to play the game if you can give");
    printf("\n    atleast 2 right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 8 questions each right answer will be awarded Rs.100,000.");
    printf("\n    By this way you can win upto Rs.8,00,000 cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving right answers.");
    printf("\n >> No negative marking for wrong answers");
    printf("\n\n*******************************BEST OF LUCK*********************************");
}
void test()
{
	int r2;
	char ans2[8];
	system("cls");
	printf("\n\n-----------------WELCOME TO CHALLENGE ROUND-----------------------");
	for(j=1;j<=8;j++)
	{
		r2=j;
		system("cls");
		switch(r2)
		{
			case 1:
			       printf("\n\n1) Who won the 'Rajiv Gandhi Khel Ratna Award in 2018 for cricket ?");
			       printf("\n\nA. Rohit Sharma\t\tB. Virat Kohli\n\nC. M S Dhoni\t\tD. Yuvraj Singh\n\n");
			       qn1:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[0]);
			       if(toupper(ans2[0])>=65&&toupper(ans2[0])<=68)
			       {
			       if(toupper(ans2[0])=='B')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is B. Virat Kohli");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto qn1;
				}
			case 2:
			       printf("\n\n2) Who partenered with TSAF to launch \"Mission Gange\" ?");
			       printf("\n\nA. Natinal Mission for Clean Ganga(NMCG)\nB. Indian Agricultural Research Institute\nC. Indian Institute of Science\nD. UNICEF\n\n");
			       qn2:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[1]);
			       if(toupper(ans2[1])>=65&&toupper(ans2[1])<=68)
			       {
			       if(toupper(ans2[1])=='A')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is A. National Mission For Clean Ganga(NMCG)");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto qn2;
				}
			case 3 :
				printf("\n\n3) Surdas was a disciple of which of the following saints ?");
			       printf("\n\nA. Guru Nanak\t\tB. Guru Ramdas\n\nC. Nimbarkacharya\tD. Vallabhacharya\n\n");
			       qn3:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[2]);
			       if(toupper(ans2[2])>=65&&toupper(ans2[2])<=68)
			       {
			       if(toupper(ans2[2])=='D')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is D. Vallabhacharya");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto qn3;
				}
			case 4 :
				printf("\n\n4) Galileo was an astronomer who....");
			       printf("\n\nA. developed the telescope\nB. discovered four satelites of Jupitar\nC. discovered that the moment of pendulum produces a regular time measurement\nD. All of above\n\n");
			       qn4:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[3]);
			       if(toupper(ans2[3])>=65&&toupper(ans2[3])<=68)
			       {
			       if(toupper(ans2[3])=='D')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is D. All of above");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto qn4;
				}
			case 5 :
			       printf("\n\n5) Which of the following is a complete function ?");
			       printf("\n\nA. int funct();\t\tB. int fun(int x){return x=x+1;}\n\nC. void funct(int x){printf(\"Hi\");}\t\tD. void fun(x){printf(\"Hi\");}\n\n");
			       q5:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[4]);
			       if(toupper(ans2[4])>=65&&toupper(ans2[4])<=68)
			       {
			       if(toupper(ans2[4])=='B')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is B. int fun(int x){return x=x+1;}");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto q5;
				}
			case 6 :
				printf("\n\n6) Who is the father of geometry ?");
			       printf("\n\nA. Aristotole\t\tB. Euclid\n\nC. Pythagaurus\t\tD. Kepier\n\n");
			       q6:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[5]);
			       if(toupper(ans2[5])>=65&&toupper(ans2[5])<=68)
			       {
			       if(toupper(ans2[5])=='B')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is B. Euclid");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto q6;
				}
			case 7 :
				printf("\n\n7) Who is called the Iron Man of India ?");
			       printf("\n\nA. Subhash Chandra Bose\t\tB. Sardar Patel\n\nC. Jawaharlal Nehru\t\tD. Govind Ballabh Pant\n\n");
			       q7:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[6]);
			       if(toupper(ans2[6])>=65&&toupper(ans2[6])<=68)
			       {
			       if(toupper(ans2[6])=='B')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is B. Sardar Patel");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto q7;
				}
			case 8 :
			       printf("\n\n8) Which of the folowing item was introduced by James Watt ?");
			       printf("\n\nA. Hot Air Balloon\t\tB. Steam Boat\n\nC. Diving Bell\t\tD. Steam Engine\n\n");
			       q8:
			       printf("\nYour Responce:");
			       scanf(" %c",&ans2[7]);
			       if(toupper(ans2[7])>=65&&toupper(ans2[7])<=68)
			       {
			       if(toupper(ans2[7])=='D')
			       {
					printf("\n\nCorrect!!!!");
					countr++;
					score();
					break;
				}
				else
				{
					printf("\n\nWrong!!!!  The correct answer is D. Steam Engine");
					score();
					getch();
					break;
				}
				}
				else
				{
					printf("\r\t\tPlese enter correct option!!!");
					goto q8;
				}

		}
	}
}
void score()
{
	j=9;
	prize=countr*100000;
	if(prize==0)
		printf("\n\nSORRY......BETTER LUCK NEXT TIME......");
	else
	{
		printf("\n\n..........CONGRATULATIONS..........");
		printf("\n\tYou have won Rs. %li in this Quiz...",prize);
		printf("\n\n\t...Hope you enjoyed the Quiz...");
	}
}
void qualify()
{
	int r1;
	char ans[4];
	system("cls");
	count=0;
	for(i=1;i<=4;i++)
	{
		system("cls");
		r1=i;
		switch(r1)
		{
			case 1 :
				printf("\n\n1) Which of the following is a palindrome number?");
				printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234\n\n");
				q1:
				printf("\nYour Responce:");
				scanf(" %c",&ans[0]);
				if(toupper(ans[0])>=65&&toupper(ans[0])<=68)
				{
					if(toupper(ans[0])=='C')
					{
					printf("\n\n\tCorrect!!!! %c %c",1,1);
					printf("\n\tPress any key for next question...");
					getch();
					count++;
					break;
					}
					else
					{
					printf("\n\n\tWrong!!!!  The correct answer is C.23232");
					printf("\n\tPress any key for next question...");
					getch();
					break;
					}
				}
				else
				{
					printf("\t\tPlese enter correct option!!!");
					goto q1;
				}
			 case 2 :
				printf("\n\n2) Who becames the first indian women to win gold in World Junior Athletics Championship?");
				printf("\n\nA. P.T Usha\t\tB.Hima Das\n\nC Srbani Nanda\t\tD.Niramala\n\n");
				q2:
				printf("\nYour Responce:");
				scanf(" %c",&ans[1]);
				if(toupper(ans[1])>=65&&toupper(ans[1])<=68)
				{
				if(toupper(ans[1])=='B')
				{
					printf("\n\n\tCorrect!!!! %c %c",1,1);
					printf("\n\tPress any key for next question...");
					getch();
					count++;
					break;
				}
				else
				{
					printf("\n\n\tWrong!!!!  The correct answer is B.Hima Das");
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				}
				else
				{
					printf("\t\tPlese enter correct option!!!");
					goto q2;
				}
			case 3 :

				printf("\n\n3) Which is the third highest mountain in the world?");
				printf("\n\nA. Mt. K2\t\tB. Mt. Kanchanjungha\n\nC. Mt. Makalu\t\tD. Mt. Kilimanjaro\n\n");
				q3:
				printf("\nYour Responce:    ");
				scanf(" %c",&ans[2]);
				if(toupper(ans[2])>=65&&toupper(ans[2])<=68)
				{
				if(toupper(ans[2])=='B')
				{
					printf("\n\n\tCorrect!!!! %c %c",1,1);
					printf("\n\tPress any key for next question...");
					getch();
					count++;
					check();
					break;
				}
				else
				{
					printf("\n\n\tWrong!!!!  The correct answer is B. Mt. Kanchanjungha");
					printf("\n\tPress any key for next question...");
					getch();
					break;
				}
				}
				else
				{
					printf("\t\tPlese enter correct option!!!");
					goto q3;
				}
			case 4 :
				printf("\n\n4) The Indian Institute of Science is located at ....?");
				printf("\n\nA.Madras\t\tB.Kerala\n\nC.New Delhi\t\tD.Bangalore\n\n");
				q4:
				printf("Your Responce:");
				scanf(" %c",&ans[3]);
				if(toupper(ans[3])>=65&&toupper(ans[3])<=68)
				{
				if(toupper(ans[3])=='D')
				{
					printf("\n\n\tCorrect!!!! %c %c",1,1);
					getch();
					count++;
					check();
					break;
				}
				else
				{
					printf("\n\n\tWrong!!!!  The correct answer is D.Bangalore");
					printf("\n\tPress any key for next question...");
					check();
					getch();
					break;
				}
				}
				else
				{
					printf("\t\tPlese enter correct option!!!");
					goto q4;
				}
		}
	}
}
