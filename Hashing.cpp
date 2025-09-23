#include <iostream>
using namespace std;
int main() {
    int n,m;
    char s;
    cout << "Enter number of servers: ";
    cin >> n;
    m=0;
    int arr[n];
    int h_val[n]; 
    while(1) {
cout<<"Enter '1' to add clients and '0' to Exit:";
cin>>s;
    if (s=='1'){ 
cout << "Enter the client ids:\n";
        cin >> arr[m];
        h_val[m] = arr[m] % n;
        cout << "Server No: " << h_val[m] << " Client id: " << arr[m] << endl;
        m++;
    } else if(s=='0'){
cout<<"Exited";
break;
}
else{
cout<<"Invalid Input";
break;
}
} return 0;
}
