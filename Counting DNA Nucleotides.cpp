#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string text;
    ifstream input;
    input.open("C:\\Users\\shifa\\Downloads\\rosalind_dna.txt");
    getline(input, text);

    cout<<text.length();
    int a=0, c=0,g=0,t=0;

    for(int i=0; text[i]; i++)
    {
        if(text[i]=='A') a++;
        if(text[i]=='C') c++;
        if(text[i]=='G') g++;
        if(text[i]=='T') t++;
    }
    ofstream outfile;
    outfile.open("output1.txt");
    outfile<<a<<" "<<c<<" "<<g<<" "<<t<<endl;
    outfile.close();
    input.close();
}
