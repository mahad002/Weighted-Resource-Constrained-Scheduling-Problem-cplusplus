#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <string>
#include <cmath>
#include <time.h>
#include <cctype>

using namespace std;

struct task{
    int id;
    int dur;
    int s_Time; //start time of each task
    int* dep; //array of tasks ID’s
    int skill_ID;
    int Ndep;
    int Es;
    int Ls;
    int Ef;
    int Lf;
    bool* depcheck;
};

struct Skill{
    int skill_ID;
    float proficiency;

};

struct project{
    int id;
    int t; //duration of project
    task* tasks;

};

struct Resource{
    int res_Id;
    bool res_Availability;
    Skill res_Skill;

};

addTasks()
{

}

setTaskDuration()  //change task duration of all tasks
{

}

set_nth_TaskDuration()  //change duration of a specific task
{

}

printTaskDependencyList()  //print dependencies of a specific task
{

}

calculateBasicSchedule() //Use Critical Path Method to calculate this schedule. print completion time of the project
{

}

printCriticalTasks() //returns array of critical tasks and displays them – sum of their duration should be equal to project completion time
{

}

completionTimeWithResources() //You can use basic schedule and depending on the resource availability a task can start.
{

}

completionTimeWithResourceProficiency() //You can use basic schedule and depending on the resource availability a task can start.
{

}


int main()
{
    task Task[10];
    Resource res[10];
    //int Task_Dep[10];
    Skill Skill1, Skill2 ;
    int Ntask=0, Nresourse=0;
    int x=0, j, n=0;
    int taskComp[10];

    char T[11]={'0','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};


    system("COLOR E");
    cout<<"----------------------------------------------\n";
    cout<<"Enter Resource: \n"<<Nresourse+1<<endl;
    res[Nresourse].res_Id=Nresourse+1;
    cout<<"Enter Resource SkillID(1=Analysis & 2=Development): \n";
    cin>>res[Nresourse].res_Skill.skill_ID;
    cout<<"Proficiency of Skill: \n";
    cin>>res[Nresourse].res_Skill.proficiency;
    Nresourse++;
    cout<<"To add more Tasks Enter '0'!\n";
    cin>>x;
    cout<<"----------------------------------------------\n";
    system("PAUSE");
    system("CLS");

    while(x==0)
    {
        cout<<"----------------------------------------------\n";
        cout<<"Sr\tResource\tSkill ID\tProficienciy\n\n";
        cout<<"----------------------------------------------\n\n";
        for(int i=0; i<Nresourse; i++)
        {
            cout<<i+1<<".\t"<<T[i+1]<<"\t\t"<<res[i].res_Skill.skill_ID<<"\t\t"<<showpoint<<setprecision(2)<<res[i].res_Skill.proficiency;
            cout<<endl<<endl;;
        }
        cout<<"----------------------------------------------\n";

        system("COLOR E");
        cout<<"----------------------------------------------\n";
        cout<<"Enter Resource: \n"<<Nresourse+1<<endl;
        res[Nresourse].res_Id=Nresourse+1;
        cout<<"Enter Resource Skill ID(1=Analysis & 2=Development): \n";
        cin>>res[Nresourse].res_Skill.skill_ID;
        cout<<"Proficiency of Skill: \n";
        cin>>res[Nresourse].res_Skill.proficiency;
        Nresourse++;
        cout<<"To add more Tasks Enter '0'!\n";
        cin>>x;
        cout<<"----------------------------------------------\n";
        system("PAUSE");
        system("CLS");
    }

    system("COLOR E");
    cout<<"----------------------------------------------\n";
    cout<<"Enter Task: \n"<<Ntask+1<<endl;
    Task[Ntask].id=Ntask+1;
    cout<<"Enter Task Duration: \n";
    cin>>Task[Ntask].dur;
    cout<<"Skill ID: \n";
    cin>>Task[Ntask].skill_ID;
    Ntask++;
    cout<<"To add more Tasks Enter '0'!\n";
    cin>>x;
    cout<<"----------------------------------------------\n";
    system("PAUSE");
    system("CLS");
    Task[0].Ndep=0;

    while(x==0)
    {
        system("COLOR E");
        cout<<"----------------------------------------------\n";
        cout<<"Sr\tTask\tDuration\tDependencies\n\n";
        cout<<"----------------------------------------------\n\n";
        for(int i=0; i<Ntask; i++)
        {
            cout<<i+1<<".\t"<<T[i+1]<<"\t"<<Task[i].dur<<"\t\t";
            for(int j=0; j<Task[i].Ndep; j++)
            {
                cout<<T[Task[i].dep[j]]<<"   ";
            }
            cout<<endl<<endl;;
        }
        cout<<"Enter Task: \n"<<Ntask+1<<endl;
        Task[Ntask].id=Ntask+1;
        cout<<"Enter Task Duration: \n";
        cin>>Task[Ntask].dur;
        cout<<"Skill ID: \n";
        cin>>Task[Ntask].skill_ID;
        cout<<"Enter the number of tasks it depends on: ";
        cin>>Task[Ntask].Ndep;
        j=Task[Ntask].Ndep;
        cout<<"Task Dependency: \n";
        Task[Ntask].dep = new int [j];
        for(int i=0; i<j; i++)
        {
            cin>>Task[Ntask].dep[i];
        }
        Ntask++;
        cout<<"To add more Tasks Enter '0'!\n";
        cin>>x;
        cout<<"----------------------------------------------\n";
        system("PAUSE");
        system("CLS");
        cin.ignore();
        cin.clear();
    }


    system("COLOR E");
    cout<<"----------------------------------------------\n";
    cout<<"Sr\tTask\tDuration\tDependencies\n\n";
    cout<<"----------------------------------------------\n\n";
    for(int i=0; i<Ntask; i++)
    {
        cout<<i+1<<".\t"<<T[i+1]<<"\t"<<Task[i].dur<<"\t\t";
        for(int j=0; j<Task[i].Ndep; j++)
        {
            cout<<T[Task[i].dep[j]]<<"   ";
        }
        cout<<endl<<endl;;
    }
    cout<<"----------------------------------------------\n";


    for(int i=0; i<Ntask; i++)
    {
        if((Task[i].Ndep)==0)
        {
            taskComp[n]=Task[i].id;
            n++;
        }
    }
    cout<<n<<endl<<endl;
    for(int i=0; i<n; i++)
        cout<<"------"<<taskComp[i]<<endl;

    /*for(int i=0; i<n; i++)
    {
        Task[taskComp[n]].Es=0;
        Task[taskComp[n]].Ef=Task[taskComp[n]].dur;
    }*/

    int Comp[n][10];
    int duration[n];
    /*int **Comp = new int*[n];
    for(int i=0; i<n; i++)
        Comp[i]=new int[10];

    for(int i=0; i<n; i++)
        for(int j=0; j<10; j++)
            *(*(Comp+i)+j)=0;

    for(int i=0; i<n; i++)
        *(*(Comp+i)+0)=taskComp[i];*/

    for(int i=0; i<n; i++)
        for(int j=0; j<Ntask; j++)
            Comp[i][j]=0;

    for(int i=0; i<n; i++)
        Comp[i][0]=taskComp[i];

    int increment[n];

    for(int i=0; i<n; i++)
        increment[i]=1;
    int v;

    v=n;

    for(int i=0; i<Ntask; i++)
    {
        for(int j=0; j<Task[i].Ndep; j++)
        {
            for(int k=0; k<n; k++)
            {
                if (taskComp[k]==Task[i].dep[j])
                {
                    //v=increment[k];
                    Comp[k][increment[k]]=Task[i].id;
                    increment[k]++;
                    taskComp[v++]=Task[i].id;
                }
            }
        }
    }



    for(int i=0; i<Ntask; i++)
        duration[i]=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<increment[i]; j++)
        {
                v=Comp[i][j];
                //cout<<Task[v].dur<<endl;
                duration[i]+=Task[v].dur;
        }
    }


    for(int i=0; i<n; i++){
        cout<<"Duration for Path "<<i+1<<": "<<duration[i]<<endl;
    }


    /*for(int i=0; i<n; i++)
        delete[]Comp[i];
    delete[]Comp;*/

    return 0;
}
