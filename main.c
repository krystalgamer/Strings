#include <stdio.h>

int strlenb(char* string)
{
	int a = 0;
	while(string[a])
	{
		a++;
	}
	return a;
}
char* strcatb(char* dest, char* orig)
{
	int i = strlenb(dest);
	printf("%s %s\n", dest, orig);
	int b = 0;
	while(orig[b])
	{
		//printf("%c\n", orig[b]);
		//printf("%d\n", strlenb(dest)+b);
		dest[i]=orig[b];
		//printf("%s\n", dest);
		b++;
		i++;
	}
	dest[i] = '\0';
	
	//printf("aqui %s\n", dest);
	return dest;
}
char *strcpym(char* dest, char* orig)
{
	int b = 0;
	while(orig[b] != '\0')
	{
		dest[b] = orig[b];
		b++;
	}
	dest[b] = '\0';
	return dest;
}
int strcount(char* string, char ch)
{
	int i = 0;
	int c = 0;
	while(string[c])
	{
		if(string[c] == ch)
			i++;
		c++;
	}
	return i;
	
}
int indchar(char* string, char ch)
{
	int i = 0;
	while(string[i])
	{
		if(string[i] == ch)
			return i;
		i++;
		
	}
	return -1;
}
int strcapi(char* s)
{
	int a = strlenb(s);
	int i = 0;
	if(a%2 != 0)
	{
		while(s[i])
		{
			if(s[i] != s[a-1])
			{
				return 0;
			}
			i++;
			a--;
		}
		return 1;
	}
	return 0;
}
char* strrever(char* string)
{
	int i=0, len = strlenb(string)-1;
	char aux;
	while(i<len)
	{
		aux=string[i];
		string[i] = string[len];
		string[len] = aux;
		i++;
		len--;
	}
	return string;
}
char* strpade(char* string)
{
	int a = strlenb(string);
	int b = 0;
	string[a*2]=string[a];
	string[a] = 'n';
	char aux;
	while(string[a])
	{
		
		string[a*2] = string[a];
		string[a*2+1] = ' ';
		a--;
		b++;
		
	}
	string[b*2-2] = '\0';
	
	return string;
	
	
}
char* strdelch(char* string, char ch)
{
	int j=0, k=0;
	while(string[j])
	{
		if(string[j] != ch)
			string[k++] = string[j];
		j++;
	}
	string[k] = '\0';
	return string;
}
int main()
{
	char ola[20], adeus[20];
	scanf("%s %s", ola, adeus);
	
	
	printf("fim %s\n", strdelch(ola, 'l'));
	return 0;
}




