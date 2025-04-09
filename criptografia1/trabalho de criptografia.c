#include <stdlib.h>
#include <stdio.h>
#include <string.h>


main ()
{
     char string1[200];
     int v,t;
     
	 printf("Digite o texto: ");
     gets(string1);
     t=strlen(string1);
     
     t=strlen(string1);
	 
    
	 for(v=0;v!=t;v++){
	     	
		 if (string1[v]=='a'){
	          string1[v]='b';                      
			} 
		 else
		    if(string1[v]=='b'){
		 	  string1[v]='a';
		 	}
		 else
		    if(string1[v]=='e'){
		 	  string1[v]='t';
		 	}
		 else
		    if(string1[v]=='t'){
		 	  string1[v]='e';
		 	}
		 else
		    if(string1[v]=='i'){
		 	  string1[v]='n';
		 	}
		 else
		    if(string1[v]=='n'){
		 	  string1[v]='i';
		 	}
		 else
		    if(string1[v]=='u'){
		 	  string1[v]='s';
		 	}
		 else
		    if(string1[v]=='s'){
		 	  string1[v]='u';
		 	}
		 else
		    if(string1[v]=='o'){
		 	  string1[v]='r';
		 	}
		 else
		    if(string1[v]=='r'){
		 	  string1[v]='o';
		 	
		 	}
			
		}

	printf("resultado cripitografado e : %s \n", string1);
	    
	for(v=0;v!=t;v++){
	     	
		 if (string1[v]=='a'){
	          string1[v]='b';                      
			} 
		 else
		    if(string1[v]=='b'){
		 	  string1[v]='a';
		 	}
		 else
		    if(string1[v]=='e'){
		 	  string1[v]='t';
		 	}
		 else
		    if(string1[v]=='t'){
		 	  string1[v]='e';
		 	}
		 else
		    if(string1[v]=='i'){
		 	  string1[v]='n';
		 	}
		 else
		    if(string1[v]=='n'){
		 	  string1[v]='i';
		 	}
		 else
		    if(string1[v]=='u'){
		 	  string1[v]='s';
		 	}
		 else
		    if(string1[v]=='s'){
		 	  string1[v]='u';
		 	}
		 else
		    if(string1[v]=='o'){
		 	  string1[v]='r';
		 	}
		 else
		    if(string1[v]=='r'){
		 	  string1[v]='o';
		 	
		 	}
			
	}
	printf("resultado descripitografado e : %s \n", string1);
}
