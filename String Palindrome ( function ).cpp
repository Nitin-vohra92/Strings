
bool checkPalindrome(char str[])
{
  int i,n,length=0;
  
  char revs[10000],temp;
  
  for(i=0; str[i]!='\0'; i++)
  {
    length=length+1;
    revs[i]=str[i];
  }
  int j=length-1;
  for(i=0; i<length/2; i++)
  {
  
    temp=revs[i];
    revs[i]=revs[j];
    revs[j]=temp;
    j=j-1;
  }
  
  for(i=0;str[i]!='\0';i++)
  {
  if(revs[i]==str[i])
  {
    continue;
  }
  else return 0;
  }
  return 1;

}
