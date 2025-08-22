#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void adding(vector <string>& list);
void removing(vector <string>& list);
void displaying(const vector <string>& list);
int main()
{
 vector<string> item_list;
 int option;
 cout<<"\n\n\t\t\t\t\t\tLIST MANAGER: ";
 while (true)
       {
        cout<<"\n\n\t\t\t\tWhat You Want To Do; Choose It! ";
        cout<<"\n\t\t\t 1. Adding an Item to the List. ";
        cout<<"\n\t\t\t 2. Removing an Item from the List. ";
        cout<<"\n\t\t\t 3. Displaying all the Items in the List. ";
        cout<<"\n\t\t\t 4. Exit the Program.  ";
        cin>>option;
        switch (option)
        {
         case 1:
                adding(item_list);
                break;
         case 2:
                removing(item_list);
                break;
         case 3:
                displaying(item_list);
                break;
         case 4:
                return 0;
         default:
                 cout<<"\n\t\t\t\t\t\tERROR... ";
        }
       }
}
void adding(vector <string>& list)
{
 string item;
 cout<<"\n\t\t\tWrite the Item You wants to Add in your List. ";
 cin.ignore();
 getline(cin, item);
 list.push_back(item);
 cout<<"\n\t\t\tItem added successfully!! ";
}
void removing(vector<string>& list)
{
    if (list.empty())
    {
        cout << "\n\t\t\tList is empty... ";
    }
    else
    {
        cout << "\n\t\t\tWrite the Item You want to Remove from your List: ";
        string item;
        cin.ignore();
        getline(cin, item);
        auto it = find(list.begin(), list.end(), item);
        if (it != list.end())
        {
            list.erase(it);
            cout << "\n\t\t\tItem removed successfully!! ";
        }
        else
        {
            cout << "\n\t\t\tItem not found in the list... ";
        }
    }
}
void displaying(const vector<string>& list)
{
 if (list.empty())
    {
     cout<<"\n\t\t\tList is empty... ";
    }
 else
     {
      cout<<"\n\n\t\t\t\tList Contents: \n";
      for (const string& item : list)
          {
           cout<<"\t\t\t"<<item<<endl;
          }
     }
}    