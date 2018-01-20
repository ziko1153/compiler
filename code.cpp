#include <bits/stdc++.h>

char s[9][10] = {"if","double","else","goto","int","return","char","float","main()"};
using namespace std;
  ofstream outfile;
  string ziko,num="",nextnum = "";
string findsymbol(string prgm)
{
   int n = prgm.length();
    string word,ret,space=" ";
    char arr[100];

    for(int i=0;i<n;i++)
    {
         outfile.open("output.txt",ios::app);

if(prgm[i]>='0'&&prgm[i]<='9')
{
   while(prgm[i]!='.')
   {   if(prgm[i]==')'||prgm[i]==';'||prgm[i]==',' || prgm[i]==' ')
          break;
       num +=prgm[i];
       i++;
   }
    if(prgm[i]=='.')
    {  i++;
        while((prgm[i]>='0')&&(prgm[i]<='9'))
        {    if(prgm[i]==')'||prgm[i]==';'||prgm[i]==',' || prgm[i]==' ')
              break;
            nextnum+=prgm[i];
            i++;
        }
     num = num + "." +nextnum;
    outfile<<num<<"  |  Number     |     Constant                  |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
   num = "";
    }
    else{

    outfile<<num<<"  |  Number     |     Constant                  |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
 num = "";
    }

}

if(prgm[i]=='(')
{
    outfile<<"  (     |  Special Symbol     |     Opening Braces   |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}
else if(prgm[i]==')')
{
    outfile<<"  )     |  Special Symbol     |     Closing Braces   |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}
else if(prgm[i]=='{')
{
    outfile<<"  {     |  Special Symbol     |  Left curly Braces   |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}
else if(prgm[i]=='}')
{
    outfile<<"  }     |  Special Symbol     |  Right curly Braces  |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}
else if(prgm[i]=='[')
{
    outfile<<"  [     |  Special Symbol     |  left Square Braces  |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}
else if(prgm[i]==']')
{
    outfile<<"  ]     |  Special Symbol     |  Right Square Braces |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}
else if(prgm[i]==',')
{
    outfile<<"  ,     |  Special Symbol     |         Comma        |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}
else if(prgm[i]==';')
{
    outfile<<"  ;     |  Special Symbol     |         Semicolon    |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
}



        else if(prgm[i]=='+' )
        {
    outfile<<"  +     |       Operator      |        Addition      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }
                else if(prgm[i]=='-' )
        {
    outfile<<"  -     |       Operator      |        Subtraction   |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }
            else if(prgm[i]=='*' )
        {
    outfile<<"  *     |       Operator      |     Multiplication   |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }
                        else if(prgm[i]=='/' )
        {
    outfile<<"  /     |       Operator      |        Division      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }
                                else if(prgm[i]=='/' )
        {
    outfile<<"  /     |       Operator      |        Division      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }
                         else if(prgm[i]=='<' )
        {
    outfile<<"  <     |       Operator      |    Is less Than   |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }
                         else if(prgm[i]=='>' )
        {
    outfile<<"  <     |       Operator      |    Is Greater Than   |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }
         else if(prgm[i]=='='&&prgm[i+1]=='=' )
        {
    outfile<<"  ==    |       Operator      |    Equal  Equal      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
i++;
        }
                           else if(prgm[i]=='=' )
        {
    outfile<<"  =     |       Operator      |    Equal             |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;

        }

        /*else if(prgm[i]>='0'&&prgm[i]<='9')
        {
   outfile<<prgm[i]<<"       |       number        |    Constant          |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
        }*/



        else{
                ziko = "";
            while(prgm[i]!= ' ')
            {  if(prgm[i]==';'||prgm[i]==',')
            {     i--;
                     break;
            }
            if(prgm[i]=='\n')
                break;

                ziko += prgm[i];
                  i++;
            }
            if(ziko=="int")
               {
    outfile<<"   int  |         keyword     |                      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
               }
                                else if(ziko=="char")
               {
    outfile<<"  char  |         keyword     |                      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
               }
                 else if(ziko=="float")
               {
    outfile<<"  float |         keyword     |                      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
               }
               else if(ziko=="double")
               {
    outfile<<"  double|         keyword     |                      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
               }
           else if(ziko=="main()")
        {
    outfile<<"   main |         -           |                      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
               }
                   else if(ziko=="return")
        {
    outfile<<" return |        return       |          -           |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
        }
            else if(ziko!="")
               {
outfile<<ziko<<"       |         id          |                      |"<<endl;
    outfile<<"________|_____________________|______________________|"<<endl;
               }


        }
        outfile.close();
    }

return ret;
}

string findvariable(string prgm)
{
outfile.open("output.txt",ios::app);

    int n = prgm.length();
    string word,ret,space;
    char arr[100];
    int first = 0,x=0,flag,m;
    int static count;
    for(int i=0;i<n;i++)
    {
        if(prgm[i]==' '||prgm[i]==';'||prgm[i]==',')
        {
            for(int j=first;j<i;j++)
            {
                 word+= prgm[j];


            }
            if(word=="int"||word=="float"||word=="double"||word=="long"||word=="char")
            {   space = word;
            word = "";
                for(int k =i+1;;k++)
                {
                    if(prgm[k]==';')
                    {
                       //cout<<count++<<"."<<word<<endl;
                       ret+= word;
                       outfile<<++count<<"----------- "<<ret<<"------------"<<space<<endl;
                       outfile<<"______________________________________"<<endl;
                       ret = "";
                        i = k;
                        word="";

                        break;
                    }
                    else if(prgm[k]==',')
                    {
                        //cout<<count++<<"."<<word<<endl;
                            ret+= word;
                       outfile<<++count<<"----------- "<<ret<<"------------"<<space<<endl;
                       outfile<<"______________________________________"<<endl;
                             ret = "";
                        word ="";

                        continue;
                    }
                    else if(prgm[k]=='('||prgm[k]==')')

                {
                    word="";
                    i = k;
                    break;
                }
                else if(prgm[k]==' ')
                    continue;

                    else
                    {
                        word+= prgm[k];
                    }

                }
            }

                word = "";

            first = i+1;



        }




    }
outfile.close();
return ret;
}
string addkeyword(string prgm)
{
    int n = prgm.length();
    string word,ret,space=" ";
    char arr[100];
    int first = 0,x=0,flag,m;
    for(int i=0;i<n;i++)
    {
        if(prgm[i]==' '||prgm[i]==';'||prgm[i]==',')
        {
            for(int j=first;j<i;j++)
            {
                 word+= prgm[j];


            }
             for(int k=0;k<9;k++)
                {
                strcpy(arr, word.c_str());

             m = strcmp(arr,s[k]);

                if(m==0)
                {
                  //cout<<s[k]<<endl;

                ret = ret+s[k]+space;
                }

                }
                word = "";

            first = i+1;



        }




    }
 return ret;
}

string removeComments(string prgm)
{
    int n = prgm.length();
    string res;

    // Flags to indicate that single line and multpile line comments
    // have started or not.
    bool s_cmt = false;
    bool m_cmt = false;


    // Traverse the given program
    for (int i=0; i<n; i++)
    {
        // If single line comment flag is on, then check for end of it
        if (s_cmt == true && prgm[i] == '\n')
            s_cmt = false;

        // If multiple line comment is on, then check for end of it
        else if  (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
            m_cmt = false,  i++;

        // If this character is in a comment, ignore it
        else if (s_cmt || m_cmt)
            continue;

        // Check for beginning of comments and set the approproate flags
        else if (prgm[i] == '/' && prgm[i+1] == '/')
            s_cmt = true, i++;
        else if (prgm[i] == '/' && prgm[i+1] == '*')
            m_cmt = true,  i++;

        // If current character is a non-comment character, append it to res
        else  res += prgm[i];
    }
    return res;
}

// Driver program to test above functions
int main()
{
    string prgm = "   /* Test program */ \n"
                  "   int main()  \n"
                  "   {           \n"
                  "      // variable declaration \n"
                  "      int a, b, c;    \n"
                  "      char a[20],za,ba;    \n"
                  "      float x;    \n"
                  "      double z;    \n"
                  "     if ( a == b )    \n"
                  "      /* This is a test  \n"
                  "          multiline     \n"
                  "          comment for   \n"
                  "          testing */      \n"
                  "         if (1)      \n"
                  "      a = b + 12.92;       \n"
                  "   return 0;           \n"
                  "   }           \n",x(""),y,keyword,variable,symbol;

  ofstream outfile,outfile2;
    outfile.open("input.txt");
    outfile<<prgm;
    outfile.close();

    ifstream infile;
    infile.open("input.txt");
    if(infile.fail())
    {
        cout<<"Can't Open";
    }
while(getline(infile,x))
{
    //cerr<<x;
    y+= x;
}
infile.close();
prgm = removeComments(prgm);
outfile2.open("output.txt");
    outfile2<<"The Modified Program is: "<<endl<<prgm;
    outfile2.close();
//cout<<y;

    //cout<<"The List OF keyword: \n";
      //addkeyword(y);
      //cout<<"The List Of Variables: \n";
      //findvariable(y);
keyword  = addkeyword(y);


//cout<<"Ziko:"<<findvariable(y);
    outfile.open("output.txt",ios::app);
    outfile<<"The List Of Keyword: "<<endl<<keyword<<endl;
    outfile.close();
    outfile.open("output.txt",ios::app);
    outfile<<"The List Of variable: "<<endl;
    outfile<<"______________________________________"<<endl;
    outfile<<"No.      Variable       Datatype"<<endl;
    outfile<<"______________________________________"<<endl;
    findvariable(y);
    //outfile.close();
        outfile<<"______________________________________________________"<<endl;
    outfile<<"Lexems          Token Name         Attribute Value  "<<endl;
    outfile<<"______________________________________________________"<<endl;
    outfile.close();
findsymbol(prgm);

cout<<"Successfully Created Input Output File!! Please Check it out!!";
getchar();

   return 0;
}
