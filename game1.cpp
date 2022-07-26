#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<ctime>
#include<fstream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
using namespace std;
class game
{
private:
    int age;
    int age1,age2;
    int player_score,computer_score;
    char name1[50],name2[50];
    int player1_score,player2_score;
    char name[50];
public:
    game();
    void play();
    void show();
    void player_info();
    void play1();
    void player_info1();
    void show1();
    int toss();
    int storedata();
    void viewolddata();
    void show2();
    void deleterecord(char*);
    void display();


};
game::game()
{
    player_score=0;
    computer_score=0;
    player1_score=0;
    player2_score==0;
    age=0;
    age1=0;
    age2=0;
    strcpy(name,"no name");
    strcpy(name,"no name");
    strcpy(name,"no name");

}
void game::display()
{
   string var="\n======================================================================"
    "          \nRRRRRRRRR          OOOOOOOOOO       CCCCCCCCCCC       KK    K"
    "          \nRRRRRRRRR          OOOOOOOOOO       CCCCCCCCCCC       KK   K"
    "          \nRR     RR          OO      OO       CC                KK  K"
    "          \nRR     RR          OO      OO       CC                KK K"
    "          \nRRR   RRR          OO      OO       CC                KKK"
    "          \nRRRRRRRRR          OO      OO       CC                KKK"
    "          \nRR     RR          OO      OO       CC                KK K"
    "          \nRR      RR         OO      OO       CC                KK  K"
    "          \nRR       RR        OOOOOOOOOO       CCCCCCCCCCC       KK   K"
    "          \nRR        RR       OOOOOOOOOO       CCCCCCCCCCC       KK    K"

    "          \n=======================================================================\n";
    for(int i=0;i<var.size();i++)
    {
        Sleep(2);
        cout<<var[i];
    }
    string var1="\n======================================================================="
    "              \nPPPPPPPP       AA           PPPPPPPP     EEEEEEEEEE       RRRRRRRRRRR"
    "              \nPP    PP      AA AA         PP    PP     EE               RRRRRRRRRRR"
    "              \nPP    PP     AA   AA        PP    PP     EE               RR       RR"
    "              \nPPPPPPPP    AAAAAAAAA       PPPPPPPP     EE               RRR     RR"
    "              \nPP         AA       AA      PP           EEEEEEEEEE       RRRRRRRRR"
    "              \nPP        AA         AA     PP           EE               RR   RR"
    "              \nPP       AA           AA    PP           EE               RR     RR"
    "              \nPP      AA             AA   PP           EEEEEEEEEE       RR       RR"
    "\n==========================================================================\n";
    for(int i=0;i<var1.size();i++)
    {
        Sleep(2);
        cout<<var1[i];
    }
    string var2="\n======================================================================================="
    "\nSSSSSSSSS  CCCCCCCCCC   IIIIIIIIIIII  SSSSSSSSSSS  SSSSSSSSS   OOOOOOOOOO   RRRRRRRRR"
    "\nSSSSSSSSS  CCCCCCCCCC   IIIIIIIIIIII  SSSSSSSSSSS  SSSSSSSSS   OOOOOOOOOO   RRRRRRRRR"
    "\nSS         CC                II       SS           SS          OO      OO   RR     RR"
    "\nSS         CC                II       SS           SS          OO      OO   RR     RR"
    "\nSSSSSSSS   CC                II       SSSSSSSSSSS  SSSSSSSSS   OO      OO   RRRRRRRRR"
    "\n      SS   CC                II                SS         SS   OO      OO   RR   RR  "
    "\n      SS   CC                II                SS         SS   OO      OO   RR    RR"
    "\nSSSSSSSS   CCCCCCCCCC   IIIIIIIIIIII  SSSSSSSSSSS  SSSSSSSSS   00OOOOOOOO   RR      RR"
    "\nSSSSSSSS   CCCCCCCCCC   IIIIIIIIIIII  SSSSSSSSSSS  SSSSSSSSS   OOOOOOOOOO   RR       RR"
                "\n========================================================================================\n";
                for(int i=0;i<var2.size();i++)
                {
                    Sleep(2);
                    cout<<var2[i];
                }
}




void game::player_info()
{
    cout<<"\t\t\t\t\t\tWELCOME TO THE GAME WORLD"<<endl;
    cout<<"\t\t\t\t\t\t\tFWU NEPAL"<<endl;
    cout<<"\t\t\t**__Enter Your name:__**"<<endl;
    cin.ignore();
    cin.getline(name,50);
    cout<<"\t\t\t**__Enter Your age__**"<<endl;
    cin>>age;
}
void game::show()
{
    cout<<"Name:"<<name<<"\tAge="<<age<<"\tScore\t="<<player_score<<endl;
    cout<<"Computer score:"<<computer_score<<endl;
    if(player_score>computer_score)
        cout<<"You won with:"<<player_score<<"score."<<endl;
    else if(computer_score>player_score)
        cout<<"Computer won with:=>"<<computer_score<<"\tscore."<<endl;
        else
            cout<<"It's draw:"<<endl;

}

void game:: play()
{
    cout<<"How many round do you want to play:"<<endl;
    int rounds;
    cin>>rounds;

    for(int round=1;round<=rounds;round++)
        {

int player_choice;
int computer_choice;
cout<<round<<"/"<<rounds<<endl;

cout<<"                                  ***||||SELECT >>1 FOR PAPER:|||***"<<endl;
cout<<"                                  "<<endl;
cout<<"                                  "<<endl;
cout<<"                                  ***|||SELECT >>2 FOR ROCK:|||***  "<<endl;
cout<<"                                  "<<endl;
cout<<"                                  "<<endl;
cout<<"                                  ***|||SELECT >>3 FOR SCISSOR:|||***"<<endl;
cin>>player_choice;
srand(time(0));
computer_choice=(rand()%3)+1;
system("cls");
if(player_choice==1&&computer_choice==3)
    {
    cout<<"\t\t\tComputer won::"<<endl;
    computer_score++;
}
else if(player_choice==1&&computer_choice==2)
{
    cout<<"\t\t\tYou won::"<<endl;
    player_score++;
}

else if(player_choice==1&&computer_choice==1)
{
    cout<<"\t\t\tIt's draw:"<<endl;
}
else if(player_choice==2&&computer_choice==1)
{
    cout<<"\t\t\t\t computer won"<<endl;
    computer_score++;
}
else if(player_choice==2&&computer_choice==2)
{
    cout<<"\t\t\tIt's draw:"<<endl;
}
else if(player_choice==2&&computer_choice==3)
{
    cout<<"\t\t\tComputer won:"<<endl;
    computer_score++;
}
else if(player_choice==3&&computer_choice==1)
{
    cout<<"\t\t\tYou won:"<<endl;
    player_score++;
}
else if(player_choice==3&&computer_choice==2)
{
    cout<<"\t\t\tComputer won:"<<endl;
    computer_score++;
}
else if(player_choice==3&&computer_choice==3)
{
   cout<<"\t\t\tIT's draw:"<<endl;
}
else
    cout<<"\t\t\tEnter valid choice:"<<endl;

         }


  }
  /*int game toss()
  {
      int head=1 ,tail=2;
      int x;
      x=rand()/2;


  }*/
  void game::player_info1()
  {
      cout<<"Enter the name of the first player:"<<endl;
      cin.ignore();
      cin.get(name1,50);
      cout<<"Enter the age ::"<<endl;
      cin>>age1;

      cout<<"\nEnter the name of the second player:"<<endl;
      cin.ignore();
      cin.get(name2,50);
      cout<<"Enter the age::"<<endl;
      cin>>age2;

  }
  void game::show1()
  {
      cout<<name1<<endl;
      cout<<age;
      cout<<"\n"<<name2<<endl;
      cout<<age;
      if(player1_score>player2_score)
      {
          cout<<"\nThe winner is::>>"<<name1<<endl;
          cout<<age;
      }
      if(player1_score<player2_score)
      {
          cout<<"\nThe winner is::>>"<<name2<<endl;
          cout<<age;
      }
      if(player1_score==player2_score)
      {
          cout<<"It's draw"<<endl;
      }
  }

  void game:: play1()
  {
      int rounds;
      int player1_choice,player2_choice;
      cout<<"How many rounds do you wan to play::"<<endl;
      cin>>rounds;
      for(int round=1;round<=rounds;round++)
      {
         int player1_choice,player_choice2;
         cout<<round<<"/"<<rounds<<endl;
         cout<<"                              |||***ENTER 1 FOR PAPER::  ***|||"<<endl;
         cout<<"                                 "<<endl;
         cout<<"                                 "<<endl;
         cout<<"                              |||***ENTER 2 FOR ROCK ::  ***|||"<<endl;
         cout<<"                                 "<<endl;
         cout<<"                                 "<<endl;
         cout<<"                              |||***ENTER 3 FOR SCISSOR::***|||"<<endl;

         cout<<"                              ******|||||||||||||||||||||||*******"<<endl;
         cout<<"                              Its turn of ::"<<name1<<endl;
         cin>>player1_choice;
         cout<<"\n                            Its turn of::"<<name2<<endl;
         cin>>player2_choice;

         if(player1_choice==1&&player2_choice==1)
         {
             cout<<"Its draw"<<endl;
         }
         else if(player1_choice==1&&player2_choice==2)
         {
             cout<<name1<<"\tWon"<<endl;
             player1_score++;
         }
         else if(player1_choice==1&&player2_choice==3)
         {
             cout<<name2<<"\twon"<<endl;
             player2_score++;
         }
         else if(player1_choice==2&&player2_choice==1)
         {
             cout<<name1<<"/tWon"<<endl;
             player1_score++;
         }
         else if(player1_choice==2&&player2_choice==2)
         {
                 cout<<"Its draw"<<endl;
         }
         else if(player1_choice==2&&player2_choice==3)
         {
             cout<<name2<<"\tWon"<<endl;
             player2_score++;
         }
         else if(player1_choice==3&&player2_choice==1)
         {
             cout<<name2<<"\tWon"<<endl;
             player2_score++;

         }
         else if(player1_choice==3&&player2_choice==2)
         {
             cout<<name2<<"\twon"<<endl;
             player2_score++;
         }
         else if(player1_choice==3&&player2_choice==3)
         {
             cout<<"Its draw"<<endl;
         }
         else
            cout<<"Enter valid choice"<<endl;

      }
  }
  void game::show2()
  {
      cout<<"The record of the old games::"<<endl;
      cout<<name<<endl;
      cout<<age<<endl;
      cout<<player_score<<endl;
      cout<<"|||||||||||||||||||||||||||||||||||||||"<<endl;
      cout<<name1<<endl;
    cout<<age1<<endl;
    cout<<player1_score <<endl;
    cout<<name2<<endl;
    cout<<age2<<endl;
    cout<<player2_score<<endl;
  }
  int game:: storedata()

  {
      ofstream fout;
      fout.open("file.dat",ios::app|ios::binary);
      fout.write((char *)this,sizeof(*this));
      fout.close();
      return 1;
  }
  void game::viewolddata()
  {
      ifstream fin;
      fin.open("file.dat",ios::in|ios::binary);
      fin.read((char *)this,sizeof(*this));
      while(!fin.eof())
        {
            show2();
            fin.read((char *)this,sizeof(*this));


        }
        fin.close();
  }
  void game::deleterecord(char *t)
  {
     ifstream fin;
     ofstream fout;
     fin.open("file.dat",ios::in|ios::binary);
     if(!fin)
     {
         cout<<"\n\tFile is not found"<<endl;
     }
     else
     {
         fout.open("tempfile.dat",ios::out|ios::binary);
         fin.read((char *)this,sizeof(*this));
         while(!fin.eof())
         {
                          if(strcmp(name,t))
                fout.write((char *)this,sizeof(*this));
             fin.read((char *)this,sizeof(*this));
         }
         fin.close();
         fout.close();
         remove("file.dat");
         rename("tempfile.dat","file.dat");
     }

  }



int main()
  {
      game g;
      int k;
      int n;
      g.display();
      getch();
      system("cls");
      cout<<"                        ***|||ENTER 1 FOR PLAY GAME    |||***"<<endl;
      cout<<"                                     "<<endl;
      cout<<"                                     "<<endl;
      cout<<"                        ***|||ENTER 2 FOR VIEW OLD DATA|||***"<<endl;cout<<"                                           "<<endl;
      cout<<"                                           "<<endl;
      cout<<"                                           "<<endl;
      cout<<"                         ***|||SELECT 3 FOR DELETE RECORD     |||***"<<endl;

      cin>>n;
      system("cls");
     //switch(n)
     if(n==1)
      {
          //case 1:
              {
cout<<"***|||SELECT 1 FOR PLAY WITH COMPUTER|||***"<<endl;
cout<<"                                           "<<endl;
cout<<"                                           "<<endl;
cout<<"***|||SELECT 2 FOR PLAY WITH PLAYER  |||***"<<endl;
cin>>k;
system("cls");

if(k==1)

    {
        g.player_info();
        system("cls");
        g.play();
        system("cls");
        g.show();
        g.storedata();
    }

    if(k==2)
    {
        g.player_info1();
       system("cls");
        g.play1();
        system("cls");
        g.show1();
        g.storedata();
    }
      }
      }

          //case 2:
          if(n==2)
            {
                g.viewolddata();
            }
            if(n==3){

            g.deleterecord("dilendra singh thagunna");
            cout<<"DELETED:"<<endl;

           // remove("file.dat");
            }





return 0;
      }
