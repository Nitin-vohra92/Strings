// input1 - first input string
// input2 - second input string

bool isPermutation(char input1[], char input2[])
{
    int len1=0,len2=0;
  for(int i=0;input1[i]!=0;i++)
  {
    len1++;
  }
  for(int i=0;input2[i]!=0;i++)
  {
    len2++;
  }
  if(len1==len2)
  {
    for(int i=0;i<len1;i++)
    {
      for(int j=0;j<len2;j++)
      {
        if(input1[i]==input2[j])
        {
          input2[j]='S';
	  break;
        }
         
	 if(j==len2-1)
        return false;
     
      }
      
       
    }
  
  return true;
  }
  
  return false;
}


