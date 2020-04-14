#include <iostream>

using namespace std;

struct students{
    string name;  // Attribute
    int midOfSem;
    int assignment;
    int endOfSem;
    int project;
    int total;
};

int main()
{
    int numOfStudents=5,choice;
    struct students studentsList[numOfStudents];
    while(true){
    cout<< "\nPick an option to execute below:"<<endl;
    cout<< "1) Add New Student"<<endl;
    cout<< "2) View All students"<<endl;
    cout<< "3) Edit marks"<<endl;
    cout<< "4) Get average grade"<<endl;

    cout<<"Option >> ";
    cin>>choice;

    if(choice==1){
        int mid,ass,endsem,proj;
        string name;
        for(int i=0;i<numOfStudents;i++){
            cout<<"Enter user " + to_string(i+1) +" Details "<<endl;
            cout<<"Enter Student name >> ";
            cin>>name;
            cout<<"Enter Mid of Sem marks >> ";
            cin>>mid;
            cout<<"Enter Assignment marks >> ";
            cin>>ass;
            cout<<"Enter End of Sem marks >> ";
            cin>>endsem;
            cout<<"Enter Project marks >> ";
            cin>>proj;
            if((mid<=25)&&((ass+proj)<=45)&&(endsem<30)){
                studentsList[i].name=name;
                studentsList[i].midOfSem=mid;
                studentsList[i].assignment=ass;
                studentsList[i].endOfSem=endsem;
                studentsList[i].project=proj;
                studentsList[i].total=mid+ass+endsem+proj;
                cout<<"ALL STUDENTS SUCCESSFULLY ADDED"<<endl;
            }else{
                cout<<"Mid sem Marks should be below 25"<<endl;
                cout<<"End sem Marks should be below 25"<<endl;
                cout<<"Assignment and project Marks should be below 45"<<endl;

                break;
            }

        }

    }else if(choice==2){
        cout<<"id \t\t name \t\t midsem \t assignment \t endsem \t project \t total"<<endl;
        for(int i=0;i<numOfStudents;i++){
            cout<<"["+to_string(i+1)+"]\t\t " + studentsList[i].name +" \t\t "+ to_string(studentsList[i].midOfSem) + " \t\t " +to_string(studentsList[i].assignment)+" \t\t "+to_string(studentsList[i].endOfSem)+" \t\t "+to_string(studentsList[i].project)+" \t\t "+to_string(studentsList[i].total)<<endl;
        }
    }else if(choice==3){
        string name;
        cout<<"Enter Student name search >> ";
        cin>>name;
        for(int i=0;i<numOfStudents;i++){
            if(studentsList[i].name==name){
                cout<<"Edit Marks"<<endl;
                cout<<"Enter new mid sem marks >> ";
                cin >> studentsList[i].midOfSem;
                cout<<"Enter new assignment marks >> ";
                cin >> studentsList[i].assignment;
                cout<<"Enter new end sem marks >> ";
                cin >> studentsList[i].endOfSem;
                cout<<"Enter new project marks >> ";
                cin >> studentsList[i].project;
                studentsList[i].total=studentsList[i].midOfSem+studentsList[i].assignment+studentsList[i].endOfSem+studentsList[i].project;
                cout<<"Edit Successfull"<<endl;
                }
            }
        }else if(choice==4){
            int total=0;
            string grade;
            for(int i=0;i<=numOfStudents;i++){
                total+=studentsList[i].total;
              }

        if((total/numOfStudents)>=90){
            grade="A";
        }else if((total/numOfStudents)>=87){
            grade="A-";
        }else if((total/numOfStudents)>=84){
            grade="B+";
        }else if((total/numOfStudents)>=80){
            grade="B";
        }else if((total/numOfStudents)>=77){
            grade="B-";
        }else if((total/numOfStudents)>=74){
            grade="C+";
        }else if((total/numOfStudents)>=70){
            grade="C";
        }else if((total/numOfStudents)>=67){
            grade="C-";
        }else if((total/numOfStudents)>=64){
            grade="D+";
        }else if((total/numOfStudents)>=62){
            grade="D";
        }else if((total/numOfStudents)>=60){
            grade="D-";
        }else{
            grade="F";
        }
        cout<<total<<endl;
        cout<<"Average Performance was " + to_string((total/(numOfStudents)))<<endl;
        cout <<"Grade: "+ grade<<endl;


        }

    }


    //display
    return 0;
}
