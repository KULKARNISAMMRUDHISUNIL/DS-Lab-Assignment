#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter number of cards:";
    cin>>n;
    int card[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter card "<<i+1<<":";
        cin>>card[i];
    }
    int p,j,temp=0;
    for(p=0;p<n;p++)
    {
        temp=card[p];
        j=p-1;
        while(j>=0 && temp<card[j])
        {
            card[j+1]=card[j];
            j--;
            card[j+1]=temp;
            cout << "\nAfter inserting card " << p + 1 << ": ";
        for (int k = 0; k <= p; k++)
        {
            cout << card[k] << "\t";
        }
        }
    }
    cout<<"\n sorted cards are: ";
    for(i=0;i<n;i++)
    {
        cout<<card[i]<<"\t";
    }
}
