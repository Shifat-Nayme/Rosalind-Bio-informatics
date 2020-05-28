#include<bits/stdc++.h>
using namespace std;


double getratio(string dna)
{

    double len=0,gc=0;
    for(int j=0; dna[j]; j++)
    {
        len++;
        if(dna[j]=='C' || dna[j]=='G')
        {
            gc++;
        }
    }
    return (gc/len);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string parser;
    ifstream input;
    string filename ="C:\\Users\\shifa\\Downloads\\rosalind_gc.txt";
    input.open(filename);

    vector <string> dnaseq;
    int cnt=-1;

    while(input>>parser)
    {
        if(parser[0]=='>' && cnt == -1)
        {
            cnt=0;
            dnaseq.emplace_back(parser.substr(1, parser.length())+" ");
        }
        else if(parser[0]=='>' && cnt!=-1)
        {
            cnt++;
            dnaseq.emplace_back(parser.substr(1,parser.length())+" ");
        }
        else
        {
            dnaseq[cnt]+=parser;
        }
    }
    vector <double> parcent;
    map <string, double> mp;


    for (int i = 0; i < dnaseq.size(); i++)
    {
        string text = dnaseq[i];
        string temp = text.substr(0,text.find(" "));
        string dna = text.substr(text.find(" ")+1, text.size());

        double ans = getratio(dna);
        parcent.push_back(ans);
        mp.insert({temp,ans});
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    sort(parcent.begin(), parcent.end(), greater<double>());
    ofstream outfile;
    outfile.open("output6.txt");

    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if(itr->second == parcent[0])
        {
          outfile<<itr->first<<"\n"<<fixed << setprecision(6) <<itr->second*100<<endl;

        }

    }

    outfile.close();
    input.close();


}









