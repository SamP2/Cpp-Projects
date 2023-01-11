#include<iostream>
#include<string>

using namespace std;
int main()
{

string ans ;

cout << "Ky tumne kabhi kisi se payr kiya ?!"<<endl;
cin>>ans;
if (ans == "ha")
{
    cout<<"Ky tumne kabhi kisi ko dil diya ?!"<<endl;
    cin>>ans;
    if (ans == "ha")
    {
        cout << "To chutiye ho tum!! :)"<<endl;
    }
    else if (ans == "na")
    {
        cout << "To payr krne ka fayda ky "<<endl;
    }
    
    
}
else if (ans== "na")
    {
        cout<<"To kr na krta q nhi!!"<<endl; 
    }
    else
    {
        cout << "'ha' ya 'na' main jwab de "<<endl;
    }
    
}