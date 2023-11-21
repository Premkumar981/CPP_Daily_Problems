#include<iostream>
#include<cstring>
using namespace std;
class FindSubstring{
   private:
           char str[30];
   public:
          void input();
          void show();
          int operator/ (FindSubstring formal_parameter);
         
};

void FindSubstring::input()
{
  cin>>str;
}
void FindSubstring::show()
{
   cout<<"\n"<<str;
}
int FindSubstring::operator/ (FindSubstring formal_parameter)
{
   int flag=0,k,i,j,len=strlen(str),len1=strlen(formal_parameter.str)-1;
   for(i=0;i<len;i++)
    {
      if(str[i]==formal_parameter.str[0])
       {
        if(str[i+len1]==formal_parameter.str[len1])
          {
           for(j=i,k=0;j<i+len1+1,k<len1;j++,k++)
             {
              if(str[j]==formal_parameter.str[k])
                flag=1;
              else
                { 
                  flag=0;
                  break;
                } 
              }
           }
        }
    }
   if(flag==0)
     return 0; 
	 
     return 1; 
}

int main()
{
  
    FindSubstring a,b;
    int c;
    a.input();
    b.input();
    c=a/b;
    if(c==1)
        cout<<"Substring is present";
    else
    cout<<"substring is not present";
    return 0;
}
