#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <deque>
#include <array>
#include <list>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    deque<char> d;
    int lastnum[n];
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        string str;
        getline(cin, str);

        if(str[0]=='1')
        {
            d.push_back(str[2]);
            lastnum[i]=1;
        }
        else if(str[0]=='2')
        {
            d.push_front(str[2]);
            lastnum[i]=2;
        }
        else if(str[0]=='3')
        {

            if(d.size()!=0 && i>0)
            {
                if(lastnum[i-1]==1)
                {
                    d.pop_back();
                    lastnum[i-1]=5;
                }
                else if(lastnum[i-1]==2)
                {
                    d.pop_front();
                    lastnum[i-1]=5;
                }
                else if(lastnum[i-1]==3)
                {
                    for(int j=i-2; j>=0; j--)
                    {
                        if(lastnum[j]!=3 && lastnum[j]!=-5)
                        {
                            if(lastnum[j]==1)
                            {
                                d.pop_back();
                                lastnum[j]=-5;
                                break;

                            }
                            else if(lastnum[j]==2)
                            {
                                d.pop_front();
                                lastnum[j]=-5;
                                break;

                            }
                        }
                    }
                }
                lastnum[i]=3;

            } //



        }
    }
    if(d.size()==0){
        printf("0");
    }
    else{
    for(int i=0; i<d.size(); i++)
    {
        cout << d[i];
    }
    }

    return 0;
}
