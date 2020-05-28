#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string text;
    ifstream input;
    input.open("C:\\Users\\shifa\\Downloads\\rosalind_rna.txt");
    getline(input, text);

    cout<<text.length();

    for(int i=0; text[i]; i++)
    {
        if(text[i]=='T')
        {
            text[i]='U';
        }

    }
    ofstream outfile;
    outfile.open("output2.txt");
    outfile<<text<<endl;
    outfile.close();
    input.close();
}

