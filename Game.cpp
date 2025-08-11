
#include<iostream>
using namespace std;
int main()
{
	cout<<"Kulkarni Sammrudhi Sunil\n";
	cout<<"PRN:B24CE1125\n";
int i,n;
cout<<"Enter number of rounds: ";
cin>>n;
int player1[n];
int player2[n];

cout<<"PLAYER 1 SCORES ARE:\n ";
for(i=0;i<n;i++)
{
cout<<"round "<<i+1<<" score: ";
cin>>player1[i];
}
cout<<"PLAYER 2 SCORES ARE:\n ";
for(i=0;i<n;i++)
{
cout<<"round "<<i+1<<" score: ";
cin>>player2[i];
}
int p,l,temp=0;
for(p=0;p<n;p++)
{
   for(l=0;l<n-p-1;l++)
   {
       if(player1[l]<player1[l+1])
       {
           temp=player1[l];
           player1[l]=player1[l+1];
           player1[l+1]=temp;
           }
   }
}
cout<<"After sorting the scores of player 1 is:";
for(i=0;i<n;i++)
{
   cout<<"\t"<<player1[i];
}
for(p=0;p<n;p++)
{
   for(l=0;l<n-p-1;l++)
   {
       if(player2[l]<player2[l+1])
       {
           temp=player2[l];
           player2[l]=player2[l+1];
           player2[l+1]=temp;
           }
   }
}
cout<<"\n After sorting the scores of player 2 is:";
for(i=0;i<n;i++)
{
cout<<"\t"<<player2[i];
}
if (player1[0]>player2[0])
{
cout<<"\n ----PLAYER 1 IS THE WINNER----";
}
else if(player2[0]>player1[0])
{
cout<<"\n---- PLAYER 2 IS THE WINNER----";
}
else
{
	
cout<<"\n ----IT'S A TIE ^^----";

}
return 0;
}
