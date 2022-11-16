#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int std_id=0;
vector<string>mess_ids;
struct Studentdata{
   string first_name;
   string last_name;
   string branch;
   string mess_allocated;
   string prn_num;

};
map<string,Studentdata> student_list;
Studentdata student_detail()
{
    
}
void mess_id()
{
    
    mess_ids[0]="Nilgiri_1";
    mess_ids[1]="Himalaya_2";
    mess_ids[2]="Northern_3";
    mess_ids[3]="sahyadri_4";
    mess_ids[4]="Vindya_5";
    mess_ids[5]="Gujrat_6";


}
void assign_id(Studentdata student)
{
    string id_str=student.first_name;

    ++id;
    student.prn_num=id_str+id;
    student_list.first=student.prn_num;
    student_list.second=student;
    
}
void asign_mess(Studentdata student)
{
    if()
}
int main()
{
   Studentdata student=new Studentdata;
   string f_name;
   string l_name;
   cin>>f_name;
   cin>>l_name;
   
   student.first_name=f_name;
   student.last_name=l_name;
   int choice;
   cout<<"Choose your Branch : "<<end;
   cout<<"############################# "<<endl;
   cout<<"1) CSE \n 2) IT \n 3) Electronics"<<endl;
   cin>>choice;
   while(1)
   {
   if(choice>=1&&choice<=3)
   {
       switch(choice)
       {
         case 1:
         {
            student.branch="CSE";
            break;
            

         }
          case 2:
         {
            student.branch="IT";
            break;
         }
          case 3:
         {
            student.branch="Electronics";
            break;
         }
         default:
         {
            exit(1);
         }
       }
   }
   else
   {
      cout<<"Invalid choice!!"<<endl;
   }
   }
   
   assign_id(student);

   


   

}