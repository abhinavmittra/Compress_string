#include <iostream>
#include<string>
using namespace std;

string compress(string text)
{
    string ct="";
    int i,j,count=0;
    int n = strlen(text0
    for(i=0;i<n;i++)
   { count=1;
      for(j=i+1;j<n;j++)
     {
        if(text[i]==text[j])
        count++;
        else
        break;
     }
     ct+=text[i]+to_string(count);
     i=i+count-1;
   }
   return ct
       
}

int main()
{   string res;
    
    res=compress("hello world");
    cout<<res;
    return 0;
}
