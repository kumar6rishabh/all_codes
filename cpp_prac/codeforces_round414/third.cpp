#include<iostream>
#include<string>
using namespace std;
char for_o(string st)
{
    int temp = 123;
    for(long long int i = 0 ; i<st.length() ; i++)
    {
        if(temp>(int)st[i])
            temp = (int)st[i];
    }
    return (char)temp;
}
char for_i(string st)
{
    int temp = 96;
    for(long long int i = 0 ; i<st.length() ; i++)
    {
        if(temp<(int)st[i])
            temp = (int)st[i];
    }
    return (char)temp;
}
int main(){
    string o_st,i_st;
    char x;
    cin>>o_st>>i_st;
    long long int o_len,i_len;
    o_len = o_st.length();
    i_len = i_st.length();
    string str = "";
    if((o_len == i_len) && (o_len>=1 && o_len<=300000) && (i_len>=1 && i_len<=300000))
    {
        if((o_len%2)==0)
        {
        for(long long int i = 0 ; i<o_len/2 ; i++)
        {
            x = for_o(o_st);
            str += x;
            for(long long int j = 0; j<o_len ; j++)
            {
                if((char)o_st[j]==x)
                {
                    o_st[j]='{';
                    break;
                }
            }
            
            x = for_i(i_st);
            //cout<<"here we have "<<x<<endl;
            str += x;
            for(long long int j = 0; j<o_len ; j++)
            {
                if(i_st[j]==x)
                {
                    i_st[j]=']';
                    break;
                }
            }
        }
        }
        else
        {
            for(long long int i = 0 ; i<((o_len/2)+1) ; i++)
            {
            x = for_o(o_st);
            str += x;
            for(long long int j = 0; j<o_len ; j++)
            {
                if((char)o_st[j]==x)
                {
                    o_st[j]='{';
                    break;
                }
            }
            if(i==o_len/2)
                break;
            x = for_i(i_st);
            str += x;
            for(long long int j = 0; j<o_len ; j++)
            {
                if(i_st[j]==x)
                {
                    i_st[j]=']';
                    break;
                }
            }
        }
        }
        
    }
    cout<<str;
}