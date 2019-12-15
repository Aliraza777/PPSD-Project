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

  vector<int>rnumber;
  vector<int>rfloor;
  vector<int>rcategory;


  void add_room();
  int greator_rnum();

};

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
