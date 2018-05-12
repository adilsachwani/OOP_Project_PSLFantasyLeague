#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <windows.h>
#include <vector>

using namespace std;

#define KK "Karachi Kings"
#define IU "Islamabad United"
#define LQ "Lahore Qalandars"
#define PZ "Peshawar Zalmi"
#define QG "Quetta Gladiators"

#define DUB "Dubai"
#define SHA "Sharjah"

/*Concepts Implemented:
01-Constructor
02-Destructor
03-Encapsulation
04-Abstraction
05-Inheritance
06-Polymorphism
07-Overriding
08-Interface
09-Operator Overloading
10-Function Overloading
11-Constructor Overloading
12-Friend Functions
13-STL Library
*/

//-x-x-x-x-x-x-x-x-x-x-x-x-homepage-x-x-x-x-x-x-x-x-x-x-x-x-
class homepage
{
    private:
        int delay;

    public:
    void gethomepage(void)
    {
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      HOME"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t1- Play"<<endl<<endl;
        cout<<"\t2- Score"<<endl<<endl;
        cout<<"\t3- Fixtures"<<endl<<endl;
        cout<<"\t4- Team & Players"<<endl<<endl;
        cout<<"\tX- Exit"<<endl<<endl;

    }

   homepage(void)                      //CONSTURCTOR + CONSTRUCTOR OVERLOADING
   {
   system("cls");
   cout<<endl<<endl<<endl<<endl<<endl;
   cout<<"\t\t                      WELCOME TO         "<<endl<<endl;
   }

   homepage(int d)
   {
   delay=d;
   Sleep(delay);
   cout<<"\t\t*************       *************       *"<<endl;
   Sleep(delay);
   cout<<"\t\t*           *       *                   *"<<endl;
   Sleep(delay);
   cout<<"\t\t*           *       *                   *"<<endl;
   Sleep(delay);
   cout<<"\t\t*           *       *                   *"<<endl;
   Sleep(delay);
   cout<<"\t\t*           *       *                   *"<<endl;
   Sleep(delay);
   cout<<"\t\t*************       *************       *"<<endl;
   Sleep(delay);
   cout<<"\t\t*                               *       *"<<endl;
   Sleep(delay);
   cout<<"\t\t*                               *       *"<<endl;
   Sleep(delay);
   cout<<"\t\t*                               *       *"<<endl;
   Sleep(delay);
   cout<<"\t\t*                   *************       *************"<<endl<<endl<<endl;
   Sleep(delay);
   cout<<"\t\t                    FANTASY LEAGUE       "<<endl<<endl;
   cout<<"\t\t\tPress any key to continue..."<<endl;

   getch();

   }
};



//-x-x-x-x-x-x-x-x-x-x-x-x-play-x-x-x-x-x-x-x-x-x-x-x-x-
class play
{
private:
    string useremail;
    string userpassword;
    string email;
    string password;

public:
    play(string e, string p)
    {
        useremail=e;
        userpassword=p;
    }
    void login(void)
    {
        while(true)
    {
        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      LOGIN"<<endl<<endl<<endl<<endl<<endl;

        cout<<"\tEMAIL: ";
        cin>>email;
        cout<<endl<<endl<<endl;
        cout<<"\tPASSWORD: ";
        cin>>password;

        if(email==useremail&&password==userpassword)
        {
            cout<<"\n\tCorrect Password!"<<endl;
            Sleep(500);
            break;
        }
        else
        {
            cout<<"\n\tWrong Password!"<<endl;
            Sleep(500);
        }
     }
     }

     void getplaypage(void)
     {
        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      Play"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t1- Profile"<<endl<<endl;
        cout<<"\t2- Create Team"<<endl<<endl;
        cout<<"\t3- My Team"<<endl<<endl;
        cout<<"\t4- Rules"<<endl<<endl;
        cout<<"\t5- Calculate Points"<<endl<<endl;
        cout<<"\tX- Exit"<<endl<<endl;
     }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-play(profile)-x-x-x-x-x-x-x-x-x-x-x-x-
class profile
{
   protected:
    string firstname;
    string lastname;
    string favteam;
    string teamname;

   public:
    displayprofile(string heading)
    {
        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"    \t                 "<<heading<<endl<<endl<<endl<<endl<<endl;
    }
};



//-x-x-x-x-x-x-x-x-x-x-x-x-profile(changeprofile)-x-x-x-x-x-x-x-x-x-x-x-x-
class changeprofile : public profile     //INHERITANCE
{
    public:
    void setprofile(void)
    {
        cout<<"\t\tFirst Name: ";
        cin>>firstname;
        cout<<endl<<endl;
        cout<<"\t\tLast Name: ";
        cin>>lastname;
        cout<<endl<<endl;
        cout<<"\t\tFavorite Team: ";
        cin>>favteam;
        cout<<endl<<endl;
        cout<<"\t\tTeam Name: ";
        cin>>teamname;
        cout<<endl<<endl;
    }

    void getprofile(void)
    {
        ofstream myProfile("profile.txt");
        myProfile<<firstname<<" "<<lastname<<" "<<favteam<<" "<<teamname<<endl;

        cout<<"\n\n\t\t-x-x-x-x-x-Profile Changed-x-x-x-x-x-"<<endl;
        Sleep(500);

    }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-profile(viewprofile)-x-x-x-x-x-x-x-x-x-x-x-x-
class myprofile : public profile          //INHERITANCE
{
    public:
    void viewprofile(void)
    {
        ifstream theProfile("profile.txt");

        theProfile>>firstname>>lastname>>favteam>>teamname;

        cout<<"\t\tName: "<<firstname<<" "<<lastname<<endl<<endl<<endl;
        cout<<"\t\tFavorite Team: "<<favteam<<endl<<endl<<endl;
        cout<<"\t\tMy Team: "<<teamname<<endl<<endl<<endl;

    }

    int checkprofile(void)
    {
        char selectprofile;

        cout<<"\n\n\n\t\t\t\t c - Change Profile";

        selectprofile=getch();

        if(selectprofile=='c')
        return 0;

        else
        return 1;
    }

};

//-x-x-x-x-x-x-x-x-x-x-x-x-createteam-x-x-x-x-x-x-x-x-x-x-x-x-
class createteam
{
    private:
    int batsman;
    int wk;
    int allrounder;
    int bowler;
    int num;

    public:
    createteam(int bat,int bwl,int all,int w,int n)   //CONSTRUCTOR
    {
        batsman=bat;
        bowler=bwl;
        allrounder=all;
        wk=w;
        num=n;
    }

    void getformationpage(void)
    {
        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PLAY FANTASY-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                  FORMATION"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\tSelect the formation:"<<endl<<endl;
    }

    void displayformation(void)
    {
        cout<<"\t "<<num<<"- "<<batsman<<" Batsman"<<endl;
        cout<<"\t    "<<bowler<<" Bowlers"<<endl;
        cout<<"\t    "<<allrounder<<" All-Rounders"<<endl;
        cout<<"\t    "<<wk<<" Wicket-Keeper"<<endl<<endl;
    }

    int getformation(void)
    {
        int selectf;
        cout<<"\n\t\t\tSelect Formation: ";
        cin>>selectf;

        if(selectf==1)
        return 1;
        else if(selectf==2)
        return 2;
        else
        return 3;
    }

    int removeteam()
    {
        system("cls");
        char removeteam;

        cout<<"\n\n\n\n\n\tDo you want to remove your previously saved team? (y/n)"<<endl;
        removeteam=getch();

        if(removeteam=='y')
        { remove("myteam.txt");
          return 1;
        }

        else
        return 0;
    }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-teamplayers-x-x-x-x-x-x-x-x-x-x-x-x-
class teamplayers
{
    protected:
    string name;
    string team;
    string role;
    int price;
    int num;
    int budget;

    public:
    virtual void displayplayers()=0;     //INTERFACE

    int checkbudget(int b)
    {
        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PLAY FANTASY-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t              Team Confirmation"<<endl<<endl<<endl<<endl<<endl;

        if(b>=0)
        {
            cout<<"\tWell done! You have made your fantasy team according"<<endl;
            cout<<"\t               to the budget!"<<endl<<endl;
            cout<<"\t     (You can view your team from MY TEAM menu)"<<endl;
            getch();
            return 1;
        }
        else
        {
            remove("myteam.txt");
            cout<<"\tYou have over budgeted your fantasy team!"<<endl<<endl;
            cout<<"\t(Click any key to make your team again)"<<endl;
            getch();
            return 0;
        }
    }
};



//-x-x-x-x-x-x-x-x-x-x-x-x-batsman-x-x-x-x-x-x-x-x-x-x-x-x-
class batsman : public teamplayers
{
    protected:
    int runs;

    public:
    void displayplayers(void)
    {
        system("cls");
        int i=1;
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PLAY FANTASY-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t       Batsman - Initial Budget(100 Cr)"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\tSelect your Batsman(s):"<<endl<<endl;

        ifstream fullSquad("teamplayers.txt");

        while(fullSquad>>num>>role>>name>>team>>runs>>price)
        {
            if(role=="Batsman")
            {
               cout<<"\t\t"<<i<<"- "<<name<<" ("<<team<<")"<<endl;
               cout<<"\t\t"<<"   "<<"Runs: "<<runs<<endl;
               cout<<"\t\t"<<"   "<<"Price: "<<price<<" Cr"<<endl<<endl;
               i++;
            }
        }

    }

    int getbatsman(int b,int t)
    {
        int budget=t;
        int i,a,number;

        if(b==1||b==2)
        i=4;
        else if(b==3)
        i=2;

        for(a=1;a<=i;a++)
        {

            cout<<"\tEnter batsman number "<<a<<":";
            cin>>number;

            ifstream fullSquad("teamplayers.txt");
            ofstream mySquad("myteam.txt",std::ios::app);

            while(fullSquad>>num>>role>>name>>team>>runs>>price)
            {
            if(role=="Batsman"&&num==number)
            {
                budget=budget-price;
                cout<<"\t"<<name<<"\t\t\tTotal Budget Left: "<<budget<<endl<<endl;

                mySquad<<name<<" "<<role<<" "<<team<<" "<<price<<endl;

            }
            }
        }

        cout<<endl<<endl<<"\t\t\tPress any key for NEXT...";
        getch();
        return budget;
    }


};



//-x-x-x-x-x-x-x-x-x-x-x-x-wicketkeeper-x-x-x-x-x-x-x-x-x-
class wicketkeeper : public teamplayers
{
    protected:
    int catches;

    public:
    void displayplayers(void)
    {
        system("cls");
        int i=1;
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PLAY FANTASY-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                Wicket-Keeper"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\tSelect your Wicket-Keeper:"<<endl<<endl;

        ifstream fullSquad("teamplayers.txt");

        while(fullSquad>>num>>role>>name>>team>>catches>>price)
        {
            if(role=="WK")
            {
               cout<<"\t\t"<<i<<"- "<<name<<" ("<<team<<")"<<endl;
               cout<<"\t\t"<<"   "<<"Wickets: "<<catches<<endl;
               cout<<"\t\t"<<"   "<<"Price: "<<price<<" Cr"<<endl<<endl;
               i++;
            }
        }

    }

    int getwk(int b,int t)
    {
        int i=1,a,number;
        budget=t;

        for(a=1;a<=i;a++)
        {

            cout<<"\tEnter Wicket-keeper number: ";
            cin>>number;

            ifstream fullSquad("teamplayers.txt");
            ofstream mySquad("myteam.txt",std::ios::app);

            while(fullSquad>>num>>role>>name>>team>>catches>>price)
            {
            if(role=="WK"&&num==number)
            {
                budget=budget-price;
                cout<<"\t"<<name<<"\t\t\tTotal Budget Left: "<<budget<<endl<<endl;
                mySquad<<name<<" "<<role<<" "<<team<<" "<<price<<endl;

            }
            }
        }

        cout<<endl<<endl<<"\t\t\tPress any key for NEXT...";
        getch();
        return budget;
    }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-all-rounder-x-x-x-x-x-x-x-x-x-
class allrounder : public teamplayers
{
    protected:
    int runs;

    public:
    void displayplayers(void)
    {
        system("cls");
        int i=1;
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PLAY FANTASY-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                 All-Rounder"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\tSelect your All-Rounder(s):"<<endl<<endl;

        ifstream fullSquad("teamplayers.txt");

        while(fullSquad>>num>>role>>name>>team>>runs>>price)
        {
            if(role=="All-Rounder")
            {
               cout<<"\t\t"<<i<<"- "<<name<<" ("<<team<<")"<<endl;
               cout<<"\t\t"<<"   "<<"Runs: "<<runs<<endl;
               cout<<"\t\t"<<"   "<<"Price: "<<price<<" Cr"<<endl<<endl;
               i++;
            }
        }

    }

    int getallrounder(int b,int t)
    {
        int i,a,number,x=1;
        budget=t;

        if(b==2||b==3)
        i=4;
        else if(b==1)
        i=2;

        for(a=1;a<=i;a++)
        {

            cout<<"\tEnter all-rounder number "<<x<<":";
            cin>>number;

            ifstream fullSquad("teamplayers.txt");
            ofstream mySquad("myteam.txt",std::ios::app);

            while(fullSquad>>num>>role>>name>>team>>runs>>price)
            {
            if(role=="All-Rounder"&&num==number)
            {
                budget=budget-price;
                cout<<"\t"<<name<<"\t\t\tTotal Budget Left: "<<budget<<endl<<endl;

                mySquad<<name<<" "<<role<<" "<<team<<" "<<price<<endl;

            }
            }
        }

        cout<<endl<<endl<<"\t\t\tPress any key for NEXT...";
        getch();
        return budget;
    }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-bowler-x-x-x-x-x-x-x-x-x-x-x-x-
class bowler : public teamplayers
{
    protected:
    int wkts;

    public:
    void displayplayers(void)
    {
        system("cls");
        int i=1;
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PLAY FANTASY-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                   Bowler"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\tSelect your Bowler(s):"<<endl<<endl;

        ifstream fullSquad("teamplayers.txt");

        while(fullSquad>>num>>role>>name>>team>>wkts>>price)
        {
            if(role=="Bowler")
            {
               cout<<"\t\t"<<i<<"- "<<name<<" ("<<team<<")"<<endl;
               cout<<"\t\t"<<"   "<<"Wickets: "<<wkts<<endl;
               cout<<"\t\t"<<"   "<<"Price: "<<price<<" Cr"<<endl<<endl;
               i++;
            }
        }

    }

    int getbowler(int b,int t)
    {
        int i,a,number,x=1;
        budget=t;

        if(b==1||b==3)
        i=4;
        else if(b==2)
        i=2;

        for(a=1;a<=i;a++)
        {

            cout<<"\tEnter bowler number "<<x<<":";
            cin>>number;

            ifstream fullSquad("teamplayers.txt");
            ofstream mySquad("myteam.txt",std::ios::app);

            while(fullSquad>>num>>role>>name>>team>>wkts>>price)
            {
            if(role=="Bowler"&&num==number)
            {
                budget=budget-price;
                cout<<"\t"<<name<<"\t\t\tTotal Budget Left: "<<budget<<endl<<endl;
                mySquad<<name<<" "<<role<<" "<<team<<" "<<price<<endl;
            }

            }
        }

        cout<<endl<<endl<<"\t\tPress any key to confirm team...";
        getch();
        return budget;
    }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-myteam-x-x-x-x-x-x-x-x-x-x-x-x-
class myteam : public teamplayers
{
    public:
    void displayplayers(void)
    {
        int i=1;
        int budget=0;

        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                  My Fantasy Team"<<endl<<endl<<endl<<endl<<endl;

        ifstream displaySquad("myteam.txt");

        while(displaySquad>>name>>role>>team>>price)
        {
            if(i>=1&&i<=9)
            cout<<"\t0"<<i<<"- "<<name<<" ("<<role<<") "<<team<<" "<<price<<" Cr"<<endl<<endl;

            else
            cout<<"\t"<<i<<"- "<<name<<" ("<<role<<") "<<team<<" "<<price<<" Cr"<<endl<<endl;

            budget=budget+price;

            i++;
        }

        cout<<"\n\n\t\tTeam Budget = "<<budget<<" Cr / 100 Cr"<<endl;

        getch();
    }
};



//-x-x-x-x-x-x-x-x-x-x-x-x-play(rules)-x-x-x-x-x-x-x-x-x-x-x-x-
class rules
{
    friend void getrules(rules r);           //FRIEND FUNCTION
};

     void getrules(rules r)
    {
        system("cls");

        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      Rules"<<endl<<endl<<endl<<endl<<endl;

        cout<<"\t1- You have to select your own fantasy team using the players"<<endl;
        cout<<"\t   in the CREATE TEAM option."<<endl<<endl;

        cout<<"\t2- You have to select players according to the FORMATION you"<<endl;
        cout<<"\t   have selected."<<endl<<endl;

        cout<<"\t3- You have to select players according to the BUDGET i.e 100 CR"<<endl<<endl;

        cout<<"\t4- If you fail to form team according to the BUDGET. You'll have"<<endl;
        cout<<"\t   to do another selection."<<endl<<endl;

        cout<<"\t5- There are 3 types of FORMATION to select from."<<endl<<endl<<endl<<endl;

        cout<<"\t\t\tPress any key to go back...";

        getch();

    }


//-x-x-x-x-x-x-x-x-x-x-x-x-play(calculatepoints)-x-x-x-x-x-x-x-x-x-x-x-x-

class calculatepoints
{
    private:
    int totalpoints;
    int matchpoints;

    public:
    void getpoints(string s)
    {
    system("cls");
    cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
    cout<<"\t                  "<<s<<endl<<endl<<endl<<endl<<endl;

    cout<<"\t\t1- "<<PZ<<" vs "<<IU<<" at "<<DUB<<endl;
    cout<<"\t\t2- "<<LQ<<" vs "<<QG<<" at "<<SHA<<endl;
    cout<<"\t\t3- "<<KK<<" vs "<<PZ<<" at "<<DUB<<endl;
    cout<<"\t\t4- "<<IU<<" vs "<<LQ<<" at "<<DUB<<endl;
    cout<<"\t\t5- "<<QG<<" vs "<<KK<<" at "<<SHA<<endl;
    cout<<"\t\tc- Remove Last Match Entered"<<endl;
    cout<<"\t\tp- Calculate Points"<<endl<<endl;
    }

    void getpoints()
    {
        char selectPoints;
        int i;
        bool loop=true;

        vector<int> points;                      //STL LIBRARY
        vector<int>::iterator pointIt;


    while(loop)
    {

    selectPoints=getch();

    switch(selectPoints)
    {
    case '1':
    matchpoints=553;
    points.push_back(matchpoints);
    cout<<"\tMatch 1 added"<<endl;
    break;

    case '2':
    matchpoints=240;
    points.push_back(matchpoints);
    cout<<"\tMatch 2 added"<<endl;
    break;

    case '3':
    matchpoints=410;
    points.push_back(matchpoints);
    cout<<"\tMatch 3 added"<<endl;
    break;

    case '4':
    matchpoints=545;
    points.push_back(matchpoints);
    cout<<"\tMatch 4 added"<<endl;
    break;

    case '5':
    matchpoints=305;
    points.push_back(matchpoints);
    cout<<"\tMatch 5 added"<<endl;
    break;

    case 'c':
    points.pop_back();
    cout<<"\tLast match deleted."<<endl;
    break;

    case 'p':
    loop=false;
    totalpoints=0;

    for (int i = 0; i < points.size(); i++)
    {
        totalpoints=points[i]+totalpoints;
    }

    cout<<"\n\n\t\t-x-x-x-x-x-x- Points : "<<totalpoints<<" -x-x-x-x-x-x-";
    points.clear();
    break;
    }
    }
    }

    void setpoints(void)
    {
        totalpoints=1000;
    }

    bool operator <(const calculatepoints& c)    //Operator Overloading
    {
    if(totalpoints < c.totalpoints)
    return true;

    else
    return false;
    }
};



//-x-x-x-x-x-x-x-x-x-x-x-x-score-x-x-x-x-x-x-x-x-x-x-x-x-
class score
{
    protected:
    int runs;
    int wkts;
    string team1;
    string team2;
    string venue;


    public:
    virtual void getscore()=0;                    //INTERFACE

    void setscore(string a,string b,string v,int r,int w)
    {
    runs=r;
    wkts=w;
    team1=a;
    team2=b;
    venue=v;
    }

    void getscorepage(void)
    {
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      SCORE"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t1- Live Score"<<endl<<endl;
        cout<<"\t2- Results"<<endl<<endl;
        cout<<"\tX- Exit"<<endl<<endl;

    }

    void print(string name)                //FUNCTION OVERLOADING
    {
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      "<<name<<endl<<endl<<endl<<endl<<endl;
    }

    void print(void)
    {
        cout<<"\n\n\n\n\n\n\tx-Exit";
        getch();
    }
};



//-x-x-x-x-x-x-x-x-x-x-x-x-livescore(score)x-x-x-x-x-x-x-x-x-x-x-x-
class livescore : public score
{
     public:
     void getscore()
     {
         cout<<"\t"<<team1<<" v "<<team2<<" at "<<venue<<endl;
         cout<<"\t"<<team1<<" need "<<runs<<" runs to win with "<<wkts<<" wickets in hand"<<endl<<endl;
     }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-results(score)x-x-x-x-x-x-x-x-x-x-x-x-
class results : public score
{
     public:
     void getscore()
     {
         cout<<"\t"<<team1<<" v "<<team2<<" at "<<venue<<endl;
         cout<<"\t"<<team1<<" won by "<<runs<<" runs"<<endl<<endl;
     }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-fixture-x-x-x-x-x-x-x-x-x-x-x-

class fixture
{
private:
    string t1;
    string t2;
    string date;
    string venue;
public:
    fixture(string a,string b,string v,string d)          //CONSTRUCTOR
    {
        t1=a;
        t2=b;
        date=d;
        venue=v;
    }
    void getfixture(void)
    {
        cout<<"\t\tVenue: "<<venue<<endl;
        cout<<"\t"<<t1<<" v "<<t2<<endl;
        cout<<"\t\tDate: "<<date<<endl<<endl;
    }
    void printheader(void)
    {
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      FIXTURES"<<endl<<endl<<endl<<endl<<endl;
    }
    void printfooter(void)
    {
        cout<<"\n\n\n\n\n\n\tx-Exit";
        getch();
    }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-players-x-x-x-x-x-x-x-x-x-x-x-
class players
{
    protected:
    string name;
    string team;
    string role;
    int innings;
    int runs;
    int wkts;

    public:
    virtual void getdisplay(void)     //POLYMORPHISM
    {
        system("cls");

        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      Team & Players"<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t1- All Players"<<endl<<endl;
        cout<<"\t2- Search Player"<<endl<<endl;
        cout<<"\tX- Exit"<<endl<<endl;
    }


};



//-x-x-x-x-x-x-x-x-x-x-x-x-playerlist(players)-x-x-x-x-x-x-x-x-x-x-x-
class playerlist : public players
{
    public:
    void getlist(void)
    {
        int i=1;
        ifstream theFile("players.txt");

        while(theFile>>name>>team>>role>>innings>>runs>>wkts)
        {
            cout<<i<<"- "<<name<<"("<<role<<")"<<endl;
            cout<<"Team: "<<team<<endl;
            cout<<"Inn:  "<<innings<<endl;
            cout<<"Runs: "<<runs<<endl;
            cout<<"Wkts: "<<wkts<<endl<<endl;
            i++;
        }
        getch();
    }

    void getdisplay(void)
    {
        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      All Players"<<endl<<endl<<endl<<endl<<endl;
    }

};



//-x-x-x-x-x-x-x-x-x-x-x-x-playersearch(players)-x-x-x-x-x-x-x-x-x-x-x-
class playersearch : public players
{
    private:
    string searchname;

    public:
    void searchplayer(void)
    {
        bool p=false;
        char c;

        while(true)
        {

        cout<<"\n\tEnter player to search:  ";
        cin>>searchname;

        ifstream theFile("players.txt");

        while(theFile>>name>>team>>role>>innings>>runs>>wkts)
        {
            if(searchname==name)
            {
            cout<<"\n\t\t"<<name<<"( "<<role<<" ) "<<endl<<endl<<endl;
                                                                                                                                      cout<<"\tTeam: "<<team<<endl<<endl;
            cout<<"\tInn:  "<<innings<<endl<<endl;
            cout<<"\tRuns: "<<runs<<endl<<endl;
            cout<<"\tWkts: "<<wkts<<endl<<endl<<endl;
            p=true;
            }
        }

        if(p==false)
        cout<<"\n\tNO PLAYER FOUND!"<<endl;

        cout<<"\n\tDo you want to search another player? (y/n)"<<endl;
        c=getch();

        if(c!='y')
        break;
        }

        if(c!='n')
        getch();

    }

        void getdisplay(void)
    {
        system("cls");
        cout<<"\n\n\t-x-x-x-x-x-x-x-x-PSL FANTASY LEAGUE-x-x-x-x-x-x-x-x-"<<endl<<endl;
        cout<<"\t                      Search Player"<<endl<<endl<<endl<<endl<<endl;
    }
};

class exitpsl
{
private:
    int delay;

public:

exitpsl(int d)
{
    delay=d;
}
~exitpsl()
{
    system("cls");
    int i;
    char tagline[20]=" CLEAN BOWLED !";
    char bye[10]="Bye! Bye!";

    cout<<"\t\t\t** ***** ** ***** **"<<endl;
    Sleep(delay);

    for(i=0;i<=14;i++)
    {
    cout<<"\t\t\t**       **       ** "<<tagline[i]<<endl;
    Sleep(delay);
    }
    cout<<"\t\t\t********************"<<endl;
    cout<<"\t\t\t     ";

    for(i=0;i<=8;i++)
    {
     cout<<bye[i];
     Sleep(200);
    }
}
};







                 // MAIN PROGRAM


int main()
{
    char select,selectplay;
    int format,removekey,totalBudget,checkBudget,checkProfile;


    //-x-x-x-x-x-x-x-x-x-objects-x-x-x-x-x-x-x-


    //homepage-objects
    homepage home1;
    homepage home2(300);

    //playmenu-objects
    play play1("adil","scit");

    createteam formation1(4,4,2,1,1),formation2(4,2,4,1,2),formation3(2,4,4,1,3);
    batsman batsman1;
    wicketkeeper wk1;
    bowler bowler1;
    allrounder allrounder1;

    myteam myteam1;

    changeprofile changeprofile1;
    myprofile myprofile1;

    rules rules1;

    calculatepoints calcpoints;
    calculatepoints calcpoints1;

    //scoremenu-objects
    livescore scorepage;
    livescore live1,live2;
    results result1,result2,result3;

    //fixturemenu-objects
    fixture fix1(PZ,IU,DUB,"9th Feb'17"),fix2(LQ,QG,DUB,"10th Feb'17"),fix3(KK,PZ,DUB,"10th Feb'17"),fix4(IU,LQ,DUB,"11th Feb'17"),fix5(QG,KK,DUB,"11th Feb'17"),fix6(PZ,LQ,DUB,"12th Feb'17"),fix7(IU,QG,DUB,"15th Feb'17"),fix8(LQ,KK,SHA,"16th Feb'17"),fix9(PZ,QG,SHA,"17th Feb'17"),fix10(KK,IU,SHA,"17th Feb'17");

    //team&playersmenu-objects
    players players1;
    playerlist playerlist1;
    playersearch playersearch1;
    players *ply1 = &players1;
    players *ply2 = &playerlist1;
    players *ply3 = &playersearch1;

//--------------------------------------------HOME--------------------------------------------------
    home:
    system("cls");
    home1.gethomepage();


                                    //MAIN

    select=getch();

    switch(select)
    {


//------------------------------------------1-PLAY--------------------------------------------------
    case '1':

    play1.login();

    play:

    play1.getplaypage();
    selectplay=getch();
    switch(selectplay)
    {
//--------------------------------------------Play(Profile)--------------------------------------------------
    case '1':

    myprofile1.displayprofile("My Profile");
    myprofile1.viewprofile();
    checkProfile=myprofile1.checkprofile();

    if(checkProfile==0)
    {
    changeprofile1.displayprofile("Change Profile");
    changeprofile1.setprofile();
    changeprofile1.getprofile();
    }

    goto play;

//--------------------------------------------Play(Create Team)--------------------------------------------------
    case '2':
    removekey=formation1.removeteam();

    createteam:
    if(removekey==0)
    { goto play; }

    else if(removekey==1)
    {
    formation1.getformationpage();
    formation1.displayformation();
    formation2.displayformation();
    formation3.displayformation();
    format=formation1.getformation();

    batsman1.displayplayers();
    totalBudget=batsman1.getbatsman(format,100);

    wk1.displayplayers();
    totalBudget=wk1.getwk(format,totalBudget);

    allrounder1.displayplayers();
    totalBudget=allrounder1.getallrounder(format,totalBudget);

    bowler1.displayplayers();
    totalBudget=bowler1.getbowler(format,totalBudget);

    checkBudget=batsman1.checkbudget(totalBudget);

    if(checkBudget==1)
    goto play;

    else
    goto createteam;

    }

//------------------------------------------Play(My Team)--------------------------------------------------
    case '3':
    myteam1.displayplayers();
    goto play;

//------------------------------------------Play(Rules)---------------------------------------------
    case '4':
    getrules(rules1);
    goto play;

//------------------------------------------Play(Calculate Points)---------------------------------------------
    case '5':
    calcpoints1.getpoints("Calculate Points");
    calcpoints1.getpoints();
    calcpoints.setpoints();

    //Operator Overloading
    if(calcpoints<calcpoints1)
    cout<<"\n\t\t\tYou are playing well!";
    else
    cout<<"\n\t\t\tYou have to work hard!";
    getch();

    goto play;

//------------------------------------------Play(Exit)---------------------------------------------
    case 'x':
    goto home;

    }
//------------------------------------------2-SCORE--------------------------------------------------
    case '2':

    score:
    char scoreselect;
    system("cls");
    scorepage.getscorepage();

    scoreselect=getch();

    switch(scoreselect)
    {
    case '1':
    system("cls");
    live1.print("LIVE SCORE");

    live1.setscore(IU,PZ,DUB,rand()%200,rand()%10);
    live1.getscore();
    live2.setscore(LQ,QG,SHA,rand()%200,rand()%10);
    live2.getscore();

    live1.print();
    goto score;

    case '2':
    system("cls");
    live1.print("RESULTS");

    result1.setscore(KK,LQ,SHA,rand()%101,6);
    result1.getscore();
    result1.setscore(IU,PZ,DUB,rand()%101,6);
    result1.getscore();
    result1.setscore(KK,IU,SHA,rand()%101,6);
    result1.getscore();

    result1.print();
    goto score;

    case 'x':
    goto home;
    }



//------------------------------------------3-FIXTURES--------------------------------------------------
    case '3':
    system("cls");
    fix1.printheader();

    fix1.getfixture();
    fix2.getfixture();
    fix3.getfixture();
    fix4.getfixture();
    fix5.getfixture();
    fix6.getfixture();
    fix7.getfixture();
    fix8.getfixture();
    fix9.getfixture();
    fix10.getfixture();

    fix1.printfooter();
    goto home;



//------------------------------------------4-TEAM & PLAYERS--------------------------------------------------
    case '4':

    players:
    char playerselect;

    ply1->getdisplay();

    playerselect=getch();

    switch(playerselect)
    {

      case '1':

          ply2->getdisplay();
          playerlist1.getlist();
          goto players;

      case '2':

          ply3->getdisplay();
          playersearch1.searchplayer();
          goto players;

      case 'x':
           goto home;
    }


//------------------------------------------X-EXIT--------------------------------------------------
     case 'x':
     exitpsl exit1(300);
    }

}
