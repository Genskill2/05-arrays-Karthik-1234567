/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>


float average(int a[] ,int b){
   int f=0;
   
   for(int x=0;x<b;x++){
    
     f+=a[x];
     
   }
   return (float)f/b;
 }

int factors(int a , int b[]){
  int e;
  
  int x=2;
  int r=0;
  
  while(x<=a){
    
    while(a%x==0){
     
     //printf("%d\n",x);
      
      a=a/x;
      b[r]=x;
      r++;
      
    }
  x++;
    
    
  }
  
  return r;
  
  
}

int max(int a[], int b){
 
 
  int c = a[0];
 
    for(int count=1;count<b;count++){
      
      if(a[count]>c){
        
        c=a[count];
        
        
      }
      
     
      
      
    
      
    }
    
  
    return c;
  
  
}

int min(int a[], int b){
 
 
  int c = a[0];
 
    for(int count=1;count<b;count++){
      
      if(a[count]<c){
        
        c=a[count];
        
        
      }
      
      else{
        c=c;
      }
      
      
    
      
    }
    
  
    return c;
  
  
}

int mode(int a[] , int b){
  
  int count = 0;
  int  sum = 0;
  int r=0;
  for(int x =0; x<b; x++ ){
    for(int y=0; y<b;y++){
      
      if(a[x]==a[y]){
        count++;
      }
      
      if(count>sum){
        
        sum = count;
        r = a[x];
      }
      
    }
    
    
    
  }
  
  return r;
  
  
}
