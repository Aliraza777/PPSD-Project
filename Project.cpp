#include<iostream>
#include<fstream>
#include<vector>
class hostel
{
private:
    int sid[100],taka[100],c;
    string ch[100];
public:
  hostel()
  {
      this->c=0;
  }
  void header();
  void welcome();
  int idposition(int sid);
  void program_close();

void available_room();

  vector<int>rnumber;
  vector<int>rfloor;
  vector<int>rcategory;


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

};
void hostel::program_close()
{
    student_clear();
    student_insert();
    room_close();
}
void hostel::add_room()
{


    printf("\t\t\t\t\t\t\tAdded New Room\n");
    printf("\t\t\t\t\t============================================");

    printf("\n\n");
    int num,floor,category;
    num=greator_rnum();
    cout << "\t\t\t\t\t\tNew Room Number is: " << num << "\n";
    cout <<"\t\t\t\t\t\tEnter New Room Floor: ";
    cin >> floor;
    cout << "\t\t\t\t\t\tEnter New Room Category Number: ";
    cin >> category;
    rnumber.push_back(num);
    rfloor.push_back(floor);
    rcategory.push_back(category);
    cout << "\n\t\t\t\t\t\tSucessfully Added New Data\n\n";
}//end this function=============================================================end p02
int hostel::greator_rnum()
{
    sort(rnumber.begin(), rnumber.end(),greater<int>());
    return rnumber[0]+1;
}
void hostel::header()
{
    printf("\n");
    printf("\t\t\t\t\t\tHostel Management Dashboard\n");
    printf("\t\t\t\t\t============================================");

    printf("\n\n");
    printf("\t\t      Student Info\t\t\t Room Info\t\t\t    Report\n");
    printf("\t\t    ==================\t\t      ================\t\t\t  ============\n\n");
    printf("\t\t11) All Student Information    |     21) All Room Information    |      31) Available Room\n");
    printf("\t\t12) Add Information\t       |     22) Add Room\t \t |\t32) Student Info\n");
    printf("\t\t13) Search Information\t       |     23) Search Room\t \t \n");
    printf("\t\t14) Edit Information\t       |     24) Edit Room\t \t \t\n");
    printf("\t\t15) Delete Information\t       |     25) Delete Room\t\t \n\n");
    printf("\t\t\t\t\t0) Press '0' for Quit This Software\n\n");

}
void hostel::welcome()
{
    int i;
    cout << "\n\n\t\t\t";
    for(i=0; i<59; i++)
    {
        cout << "*";
    }
    cout << "\n";
    cout << "\t\t\t*\t\t\t\t\t\t\t  *\n";
    cout << "\t\t\t*\t\t\tWELCOME\t\t\t\t  *\n";
    cout << "\t\t\t*\t\tHostel Management System\t\t  *\n";
    cout << "\t\t\t*\t\t\t\t\t\t\t  *\n";
    cout << "\t\t\t";
    for(i=0; i<59; i++)
    {
        cout << "*";
    }
    cout << "\n";
    system("pause");
    system("cls");
}
int hostel::idposition(int sid)
{

    int i,position=-1;
    for(i=0; i<studentid.size(); i++)
    {
        if(studentid[i]==sid)
        {
            position=i;
            break;
        }
    }
    return position;
}//end position cheikh=====
void hostel::available_room()
{
    int i,status;

    printf("\t\t\t\t\t\tAll Available Room Information\n");
    printf("\t\t\t\t\t============================================");
    printf("\n\n");

    printf("\t\t   Room Number\t\t Floor Number \t\t Room Category \t\t Room Status\n");
    printf("\t\t  ============\t\t===============\t\t=============\t\t==============\n\n");
    for(i=0; i<rnumber.size(); i++)
    {
        int j=i;
        status=avi_room(rnumber[i]);
        if(status==0)
        {
            cout << right  << setw(25) <<  this->rnumber[j] << right << setw(22) << this->rfloor[j]  << setw(22) << rcategory[j] << setw(28) << "Available"<< '\n';
        }
    }
}
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
void hostel::update_room()
{
    printf("\t\t\t\t\t\tUpdate Room Information\n");
    printf("\t\t\t\t\t=========================================");

    printf("\n\n");
    int found=0;
    int num,floor,category;
    cout << "\t\t\t\t\t\tEnter Room Number: ";
    while(cin >> num)
    {
        if(num==-1)break;
        int i,position,found=0;
        position=room_position(num);

        if(position!=-1)
        {
            cout << "\t\t\t\t\t\tEnter Room Floor: ";
            cin >> floor;
            rfloor[position]=floor;
            cout << "\t\t\t\t\t\tEnter Room Category:";
            cin >> category;
            rcategory[position]=category;
            cout << "\n\t\t\t\t\tSucessfully Update Room Information Info\n\n";
            found=1;
        }
        else
        {
            cout << "\n\t\t\t\t\tSorry No user id found for name update\n\n";
            cout << "\t\t\t\t\tEnter Room Number or exit press (-1): ";
        }
        if(found==1)break;

    }
}
void hostel::get_roominfo()
{
    int flag=0;
    int rnum,rfloor1,rcat;
    int c1=0;
    ifstream info;
    info.open("room.txt");
    while(!info.eof())
    {
        string name1[2],name2[2],name3[3];

        if(c1==0 || c1==1)
        {
            info >> name1[0] >> name2[0] >> name3[0];
        }
        else
        {
            info >> rnum >> rfloor1 >> rcat;
            rnumber.push_back(rnum);
            rfloor.push_back(rfloor1);
            rcategory.push_back(rcat);
        }
        c1++;
    }
    info.close();
}
