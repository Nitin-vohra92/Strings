// input - given string

void reverseStringWordWise(char input[])
{
    int i,j,length=0,temp,s,e,count=0;
    //calculating length
    
    for( i=0;input[i]!='\0';i++)
   {
     lengthlength+1;
   }
 
 for( i=0,j=length-1;i<j;i++,j--)
   {
     temp=input[i];
     input[i]=input[j];
     input[j]=temp;
     
    }
    
  for(i=0;i<=length;i++)
  { 
    if(input[i]== ' '||input[i]== '\0')
    {
      for(s=count, e=i-1; s<e; s++,e--)
      {
        temp=input[s];
        input[s]=input[e];
        input[e]=temp;
      }
      
      count=i+1;
    }
   
  }
  
}
