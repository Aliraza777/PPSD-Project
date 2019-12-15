#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

class hostel
{
    int sid[100],taka[100],c;
    string ch[100];
public:

    hostel()
    {
        this->c=0;
    }
    //software information function
    void header();
    void welcome();
    int idposition(int sid);
    void program_close();


    //report
    void available_room();


    //starting room engin
    vector<int>rnumber;
    vector<int>rfloor;
    vector<int>rcategory;

    //starting room function
    void get_roominfo();
    void add_room();
    void update_room();
    void display_room();
    void search_room();
    void delete_room();
    int room_position(int n);
    int greator_rnum();
    int cheikh_room(int roomid);
    int avi_room(int roomid);
    void room_close();

    //strarting student information enjin
    vector<int> studentid;
    vector<string>studentname;
    vector<int>studentroom;

    //student information function
    int student_id_maker();
    void get_studentinfo();
    void display_student();
    void search_student();
    void update_student();
    void add_student();
    void delete_student();
    void student_clear();
    void student_insert();
//end student information function

//strating room allotment

};



void hostel::delete_room()
{

    printf("\t\t\t\t\t\t\tDelete Room Information\n");
    printf("\t\t\t\t\t============================================");

    printf("\n\n");

    int rid,position,i,j,found=0;
    vector<int>rnumber1,rfloor1,rcategory1;
    cout << "\t\t\t\t\t\tEnter Room Number: ";
    while(cin >> rid)
    {
        if(rid==-1)break;
        position=room_position(rid);
        if(position!=-1)
        {
            found=1;
            for(i=0; i<position; i++)
            {
                rnumber1.push_back(rnumber[i]);
                rfloor1.push_back(rfloor[i]);
                rcategory1.push_back(rcategory[i]);
            }
            for(i=position; i<rnumber.size()-1; i++)
            {
                rnumber1.push_back(rnumber[i+1]);
                rfloor1.push_back(rfloor[i+1]);
                rcategory1.push_back(rcategory[i+1]);
            }
            rnumber=rnumber1;
            rfloor=rfloor1;
            rcategory=rcategory1;
            cout << "\t\t\t\t\tSucesully Delete This Room\n\n";
        }
        else
        {

            cout << "\t\t\t\t\t\tRoom Number Is Not Found\n";
            cout << "\t\t\t\t\t\tEnter Room Id or exit pres (-1): ";
        }
        if(found==1)break;
    }
}//end delete room function==================================



void hostel::program_close()
{
    student_clear();
    student_insert();
    room_close();
}

//display room info(display all student  information form array)=========================
void hostel::display_room()
{

    printf("\t\t\t\t\t\tDisplay All Room Information\n");
    printf("\t\t\t\t\t============================================");
    printf("\n\n");
    printf("\t\t   Room Number\t\t Floor Number \t\t Room Category \t\t Room Status\n");
    printf("\t\t  ============\t\t===============\t\t=============\t\t==============\n\n");
    for(int j=0; j<rnumber.size(); j++)
    {
        cout << right  << setw(25) <<  this->rnumber[j] << right << setw(22) << this->rfloor[j]  << setw(22) << rcategory[j] << setw(27) << "Available"<< '\n';
    }
    cout << "\n";
}//end display_room function============================

//start room_close function()=======================================================
void hostel::room_close()
{

    ofstream sclear ("room.txt", std::ios::out | std::ios::trunc);
    sclear.close();

    int i;
    ofstream sinsert;
    sinsert.open("room.txt", std::ios_base::app);
    for(i=0; i<rnumber.size()+2; i++)
    {
        if(i==0)
        {
            sinsert << "Rnum" << " " << "Floor"  << " " << "Category"<<  endl;
        }
        else if(i==1)
        {
            sinsert << "--" << " ------------" << " " << "------------";
        }
        else
        {
            sinsert << "\n" << rnumber[i-2] << " " << rfloor[i-2] << " " << rcategory[i-2];
        }
    }
    sinsert.close();
}
//end room_close() function=====================================================================
//starting delete_student() function===============================
void hostel::delete_student()
{
    printf("\t\t\t\t\t\tDelete Student Information\n");
    printf("\t\t\t\t\t============================================");

    printf("\n\n");

    int rid,position,i,j,found=0;
    vector<int>sid,room;
    vector<string>sname;
    cout << "\t\t\t\t\t\tEnter Student Number: ";
    while(cin >> rid)
    {
        if(rid==-1)break;
        position=idposition(rid);
        if(position!=-1)
        {
            found=1;
            for(i=0; i<position; i++)
            {
                sid.push_back(studentid[i]);
                room.push_back(studentroom[i]);
                sname.push_back(studentname[i]);
            }
            for(i=position; i<studentid.size()-1; i++)
            {
                sid.push_back(studentid[i+1]);
                room.push_back(studentroom[i+1]);
                sname.push_back(studentname[i+1]);
            }
            studentid=sid;
            studentroom=room;
            studentname=sname;
            cout << "\t\t\t\t\tSucesully Delete Student Information\n\n";
        }
        else
        {

            cout << "\t\t\t\t\t\tStudent  Id Is Not Found\n";
            cout << "\t\t\t\t\t\tEnter Student Id or exit pres (-1): ";
        }
        if(found==1)break;
    }

}
//end delete student=========================================

