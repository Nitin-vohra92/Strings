// input - given string

char highestOccurringChar(char input[])
{ 
  int len=0,count=0,i,j;
  int max1=0;
  char max;
 
 // calculating length
 
 for(i=0;input[i]!=0;i++)
  {
    len++;
  }
 for(i=0;i<len;i++)
  {
    count=0;
    for(j=0;j<len;j++)
    {  
       if(i==j)
        continue;
      if(i!=j)
      {
        if(input[i]==input[j])
        {
          count++;
        }
      }
      
    }
      if(max1<count)
      {
        max1=count;
        max=input[i];
      }
  }
  return max;
}
