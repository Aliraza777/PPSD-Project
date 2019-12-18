#include<iostream>
using namespace std;
class Hostel{
private:
int  Room[10]={-1};
public:

};
class User{
private:
  int i=0;
  string name[20];
  string city[20];
  string number[20];
  string email[20];
public:
    void userdata(string n,string c,string num,string e)
    {
       name[i]=n;
       city[i]=c;
       number[i]=num;
       email[i]=e;
        i++;
    }
    void search(string n,string c,string num,string e,int key)
    {
      if(key==1)
      {
        for(int k=0; k<=i; k++)
        {
          if(name[k]==n)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';
              return;
            }
        }
      }
      if(key==2)
      {
        for(int k=0; k<=i; k++)
        {
          if(city[k]==c)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';
              return;
            }
        }
      }
      if(key==3)
      {
        for(int k=0; k<=i; k++)
        {
          if(number[k]==num)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';
              return;
            }
        }
      }
      if(key==4)
      {
        for(int k=0; k<=i; k++)
        {
          if(email[k]==e)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';
              return;
            }
        }
      }
      std::cout << "No data has been found:" << '\n';
    }
    void Display()
    {
      for(int k=0; k<=i; k++)
      {
        std::cout << "Name of Student: " << name[k]<<'\n';
        std::cout << "Address of Student: " << city[k]<<'\n';
        std::cout << "Phone NO# of Student: " << number[k]<<'\n';
        std::cout << "Email of Student: " << email[k]<<'\n';

      }
    }
    void deleteById(string n,string c,string num,string e,int key)
{
      if(key==1)
      {
        for(int k=0; k<=i; k++)
        {
          if(name[k]==n)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';

              cout<<"Deleting..."<<endl;
              name[k]=-1;
              city[k]=-1;
              number[k]=-1;
              email[k]=-1;
         cout<<"Data has been deleted!"<<endl;
        Shifting(1);
              return;
            }
        }

      }
      if(key==2)
      {
        for(int k=0; k<=i; k++)
        {
          if(city[k]==c)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';
              cout<<"Deleting..."<<endl;
              name[k]=-1;
              city[k]=-1;
              number[k]=-1;
              email[k]=-1;
         cout<<"Data has been deleted!"<<endl;

              return;
            }
        }
      }
      if(key==3)
      {
        for(int k=0; k<=i; k++)
        {
          if(number[k]==num)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';

               cout<<"Deleting..."<<endl;
              name[k]=-1;
              city[k]=-1;
              number[k]=-1;
              email[k]=-1;
             cout<<"Data has been deleted!"<<endl;

                return;
            }
        }
      }
      if(key==4)
      {
        for(int k=0; k<=i; k++)
        {
          if(email[k]==e)
            {
              std::cout << "Match has been found......" << '\n';
              std::cout << "" << '\n';
              std::cout << "" << '\n';

              std::cout << "Name of Student: " << name[k]<<'\n';
              std::cout << "Address of Student: " << city[k]<<'\n';
              std::cout << "Phone NO# of Student: " << number[k]<<'\n';
              std::cout << "Email of Student: " << email[k]<<'\n';

               cout<<"Deleting..."<<endl;
              name[k]=-1;
              city[k]=-1;
              number[k]=-1;
              email[k]=-1;
                cout<<"Data has been deleted!"<<endl;
              return;
            }
        }

      }
      std::cout << "No data has been found:" << '\n';
    }
 void Shifting(int key){
    int index;
    if(key == 1){

         for(int k=0; k<=i; k++){

            if(name[k]== -1){
                name[k]=name[k+1];
                cout<<"Data has been shifted!"<<endl;
                break;
            }


         }
    }
         if(key==2){

            for(int k=0; k<=i; k++){
                if(city[k]==-1){
                    city[k]=city[k+1];
                    cout<<"Data has been shifted!"<<endl;
                }

            }
         }
        if(key==3){

            for(int k=0 ; k<=i ; k++){
                if(number[k]==-1){
                    number[k]=number[k+1];
                cout<<"Data has been shifted!"<<endl;
                }

            }
        }
        if(key==4){
            for(int k=0 ; k<=i ; k++){

                if(email[k]==-1){
                    email[k]=email[k+1];
                cout<<"Data has been shifted!"<<endl;
                }
            }


        }
        cout<<"No data To shift!"<<endl;

         }







};
int main()
{
 User obj;
 int condition,key,key2;
 string name,city,number,email;
obj.Display();
 do {
   std::cout << "Press 1 to Add Data of User:" << '\n';
   std::cout << "Press 2 to search User:" << '\n';
   std::cout << "Press 3 to Display Users:" << '\n';
   cout<<"Press 4 to delete any data:"<<endl;
   std::cin >> condition;
   switch (condition) {
     case 1:
     std::cout << "Give name:" << '\n';
     std::cin >> name;
     std::cout << "Give city:" << '\n';
     std::cin >> city;
     std::cout << "Give number:" << '\n';
     std::cin >> number;
     std::cout << "Give email:" << '\n';
     std::cin >> email;
     obj.userdata(name,city,number,email);
     std::cout << "Your data has been stored:" << '\n';
     break;
     case 2:
     std::cout << "Press 1 if u want to search by name:" << '\n';
     std::cout << "Press 2 if u want to search by city:" << '\n';
     std::cout << "Press 3 if u want to search by number:" << '\n';
     std::cout << "Press 4 if u want to search by email:" << '\n';
     std::cin >> key;
     if(key==1)
     {
       std::cout << "Give the name u want to search:" << '\n';
       std::cin >> name;
       obj.search(name,"","","",1);
     }
     else if(key==2)
     {
       std::cout << "Give the city u want to search:" << '\n';
       std::cin >> city;
       obj.search("",city,"","",2);
     }
     else if(key==3)
     {
       std::cout << "Give the number u want to search:" << '\n';
       std::cin >> number;
       obj.search("","",number,"",3);
     }
     else   if(key==4)
     {
       std::cout << "Give the number u want to search:" << '\n';
       std::cin >> email;
       obj.search("","","",email,4);
     }
     else
     std::cout << "You have Given wrong input:" << '\n';
     break;
     case 3:
     obj.Display();
     break;
     case 4:
     std::cout << "Press 1 if u want to delete by name:" << '\n';
     std::cout << "Press 2 if u want to delete by city:" << '\n';
     std::cout << "Press 3 if u want to delete by number:" << '\n';
     std::cout << "Press 4 if u want to delete by email:" << '\n';
     std::cin >> key2;
     if(key2==1)
     {
       std::cout << "Give the name u want to delete:" << '\n';
       std::cin >> name;
       obj.deleteById(name,"","","",1);
     }
     else if(key2==2)
     {
       std::cout << "Give the city u want to delete:" << '\n';
       std::cin >> city;
       obj.deleteById("",city,"","",2);
     }
     else if(key2==3)
     {
       std::cout << "Give the number u want to delete:" << '\n';
       std::cin >> number;
       obj.deleteById("","",number,"",3);
     }
     else   if(key2==4)
     {
       std::cout << "Give the number u want to delete:" << '\n';
       std::cin >> email;
       obj.deleteById("","","",email,4);
     }
     else
     std::cout << "You have Given wrong input:" << '\n';
     break;
     default:
     std::cout << "Given wrong input:" << '\n';
     break;
   }
   std::cout << "Press 0 to exit else Press any number:" << '\n';
   std::cin >> condition;
 } while(condition!=0);
  return(0);
}
