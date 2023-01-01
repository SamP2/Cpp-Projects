#include <iostream>
#include<string>
using namespace std;

int main(){
    
    string c  ;
     
    cout<< "Ky tumne kabhi kisi se payr kiya ?! "<<endl;
    cin >> c;
    if (c  == "ha"  )
    {
        cout << "Ky tumne kabhi kisi ko dil diya ?!"<<endl;
        cin >> c;
        if (c == "ha"  )
        {
            cout<<"To chutiye ho tum :D "<<endl;
        } 
        else if (c == "na")
        {
            cout <<"Ha to payr krne ka fayda ky !! "<<endl;
        }
    }
    else if (c =="na")
    {
        cout << "To kr na krta q nhi !!!"<<endl;
    }
    else
    {
        cout << "'ha' ya 'na' main jwab de !! "<<endl;
    }
    return 0;
}