string pigLatin(string s)
{
    if(s[0]>='a'&&s[0]<='z')
    {
    if(s[0]=='u' || s[0]=='e' || s[0]=='o' || s[0]=='a' || s[0]=='i')
    {
        s+="way";
    }
    else
    {
        s+=s[0];
        s.erase(s.begin() + 0);
        s+="ay";
    }
    }
    return s;
}