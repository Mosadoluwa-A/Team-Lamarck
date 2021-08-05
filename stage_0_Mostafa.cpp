#include <iostream>
using namespace std;
int CalulateHamming (string twitter, string slack)
{
    int counter = 0;
    for(int i = 0,j= 0; static_cast<void>(i<twitter.length()),j<slack.length();i++,j++)
    {
        if(twitter[i]!=slack[j])
            counter++;
    }
    return  counter;
}
int main() {
    string name = "Mostafa", email = "mostafa.batesta@gmail.com", username = "@Mostafa", biostack = "Data Science", twitterhandle = "@Mostafa5739201081", slackhandle = "@Mostafa.slack.com";
    int hammingdis = CalulateHamming(twitterhandle, slackhandle);
    
    cout << name<<"  "<< email<<"  "<< username <<"  "<< biostack<<"  "<< twitterhandle<<"  "<< hammingdis<< endl;
    return 0;
}

