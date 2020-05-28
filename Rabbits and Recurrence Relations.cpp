#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int month, groth;
    ifstream input;
    input.open("C:\\Users\\shifa\\Downloads\\rosalind_fib.txt");
    input>> month >> groth;

    long long int old = 1, new_born =1, temp=0;

    for(int i=1; i<month; i++)
    {
        temp = new_born;
        new_born = old;
        old = old + temp*groth;

    }
    cout<<new_born;
    ofstream outfile;
    outfile.open("output5.txt");
    outfile<<new_born<<endl;
    outfile.close();
    input.close();
}



