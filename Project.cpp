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


  void add_room();
  int greator_rnum();

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
