#include <stdio.h>
#include <string.h>
#include <conio.h>

main()
{
	char string2[200],str[200],string1[200];
    int b,tamanh1=0,tamanh2=0,c=0,l=0;
    
    printf("Digite o texto: ");
    gets(string2);
    
    tamanh1=strlen(string2);


    while(b!=tamanh1){
    	
		if(string2[b]=='d'){
			b++;
			if(string2[b]=='a'){
				string2[b]='!';
			}
			else
		    	if(string2[b]=='e'){
					string2[b]='$';
				}
			else
		    	if(string2[b]=='i'){
					string2[b]='#';
				}
			else
		    	if(string2[b]=='o'){
					string2[b]='%';
				}
		}
	else	
		if(string2[b]=='n'){
			b++;
			if(string2[b]=='a'){
				string2[b]='@';
			}
			else
		    	if(string2[b]=='e'){
					string2[b]='&';
				}
			else
		    	if(string2[b]=='i'){
					string2[b]='*';
				}
			else
		    	if(string2[b]=='o'){
					string2[b]='{';
				}
		}
	else
		if(string2[b]=='m'){
			b++;
			if(string2[b]=='a'){
				string2[b]='<';
			}
			else
		    	if(string2[b]=='e'){
					string2[b]='+';
				}
			else
		    	if(string2[b]=='i'){
					string2[b]='>';
				}
			else
		    	if(string2[b]=='o'){
					string2[b]='}';	
				}
		}
		str[c]=string2[b];
		c++;
		b++;
	}

printf("string compactada: %s \n", str);

	tamanh2=strlen(str);
	c=0;
	b=0;
    while(c!=tamanh2){
    	
		if(str[c]=='!'){
			str[c]='d';
			string1[b]=str[c];
			str[c]='a';
			b++;
		}
		else
			if(str[c]=='$'){
				str[c]='d';
				string1[b]=str[c];
				str[c]='e';
				b++;
			}
		else
			if(str[c]=='#'){
				str[c]='d';
				string1[b]=str[c];
				str[c]='i';
				b++;
			}
		else
			if(str[c]=='%'){
				str[c]='d';
				string1[b]=str[c];
				str[c]='o';
				b++;
			}
		else
			if(str[c]=='@'){
				str[c]='n';
				string1[b]=str[c];
				str[c]='a';
				b++;
			}
		else
			if(str[c]=='&'){
				str[c]='n';
				string1[b]=str[c];
				str[c]='e';
				b++;
			}
		else
			if(str[c]=='*'){
				str[c]='n';
				string1[b]=str[c];
				str[c]='i';
				b++;
			}
		else
			if(str[c]=='{'){
				str[c]='n';
				string1[b]=str[c];
				str[c]='o';
				b++;
			}
		else
			if(str[c]=='<'){
				str[c]='m';
				string1[b]=str[c];
				str[c]='a';
				b++;
			}
		else
			if(str[c]=='+'){
				str[c]='m';
				string1[b]=str[c];
				str[c]='e';
				b++;
			}
		else
			if(str[c]=='>'){
				str[c]='m';
				string1[b]=str[c];
				str[c]='i';
				b++;
			}
		else
			if(str[c]=='}'){
				str[c]='m';
				string1[b]=str[c];
				str[c]='o';
				b++;
			}
		string1[b]=str[c];
		b++;
		c++;

	}

printf("string descompactada: %s", string1);
}
