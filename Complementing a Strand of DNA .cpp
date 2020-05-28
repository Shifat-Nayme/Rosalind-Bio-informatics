#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string text;
    ifstream input;
    input.open("C:\\Users\\shifa\\Downloads\\rosalind_revc.txt");
    getline(input, text);

    cout<<text.length();

    reverse(text.begin(), text.end());

    for(int i=0; text[i]; i++)
    {
        if(text[i]=='A') text[i]='T';
        else if(text[i]=='T') text[i]='A';
        else if(text[i]=='C') text[i]='G';
        else if(text[i]=='G') text[i]='C';

    }
    ofstream outfile;
    outfile.open("output3.txt");
    outfile<<text<<endl;
    outfile.close();
    input.close();
}

