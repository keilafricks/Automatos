#include <stdio.h>
#include <string.h>
#define TAM 100

void qInicio ( char palavra[TAM],int size);
void q0( int contador, char palavra[TAM],int size);
void q1( int contador, char palavra[TAM],int size);
void q2( int contador, char palavra[TAM],int size);
void q3( int contador, char palavra[TAM],int size);
void q4( int contador, char palavra[TAM],int size);
void q5( int contador, char palavra[TAM],int size);
void q6( int contador, char palavra[TAM],int size);
void q7( int contador, char palavra[TAM],int size);
void q8( int contador, char palavra[TAM],int size);
void q9( int contador, char palavra[TAM],int size);
void q10( int contador, char palavra[TAM],int size);
void q11( int contador, char palavra[TAM],int size);
void q12( int contador, char palavra[TAM],int size);
void q13( int contador, char palavra[TAM],int size);
void q14( int contador, char palavra[TAM],int size);
void q15( int contador, char palavra[TAM],int size);
void q16( int contador, char palavra[TAM],int size);
void q17( int contador, char palavra[TAM],int size);
void qFim(int contador, char palavra[TAM],int size);
void qErro();

int main(){
    printf("Digite a sequencia de letras que desejar !!!\n");
    
	int size = 0;
    char palavra[TAM];
    fflush(stdin);
    gets(palavra);
    
    while(palavra[size] != '\0')
    {
    	size++;    	
	}
    
    qInicio(palavra,size);
    
    return 0;
}

void qInicio ( char palavra[TAM],int size  )
{
    int contador = 0;
    q0( contador, palavra, size );
}

void q0( int contador, char palavra[TAM],int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'f')
        {
           q1( ++contador, palavra, size ); 

        }

        else if( palavra[contador] == 's')
        {
           q2( ++contador, palavra, size ); 

        }
    }
        else
        {
            qErro();
        }
}

void q1( int contador, char palavra[TAM],int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 't')
        {
           q3( ++contador, palavra, size ); 

        }
    }    
        else
        {
            qErro();
        }
}

void q2( int contador, char palavra[TAM], int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 's')
        {
           q4( ++contador, palavra, size ); 

        }
    }

        else
        {
            qErro();
        }
}

void q3( int contador, char palavra[TAM], int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'p')
        {
           q5( ++contador, palavra, size ); 

        }
    }   

        else
        {
            qErro();
        }
}

void q4( int contador, char palavra[TAM], int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'h')
        {
           q5( ++contador, palavra, size ); 

        }
    }
        else
        {
            qErro();
        }
}

void q5( int contador, char palavra[TAM], int size  )
{
    
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'm')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'r')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 's')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        }

        else if ( palavra[contador] == 'b')
        {
          q6( ++contador, palavra, size );   
        }
        else if ( palavra[contador] == 'c')
        {
          q6( ++contador, palavra, size );   
        }else if ( palavra[contador] == 'g')
        {
          q6( ++contador, palavra, size );   
        }
    }

    else 
    {
        qErro();
    }
}

void q6 (int contador, char palavra[TAM], int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'b')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'm')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'r')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 's')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        }

        else if ( palavra[contador] == 'a')
        {
          q7( ++contador, palavra, size ); 
        }  

        else if ( palavra[contador] == 'e')
        {
          q10( ++contador, palavra, size );  
        }
    }
     else 
    {
        qErro();
    }
}

void q7( int contador, char palavra[TAM], int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q5( ++contador, palavra, size ); 
        }  

        else if ( palavra[contador] == 'b')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q5( ++contador, palavra, size );  
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        }

        else if ( palavra[contador] == 'r')
        {
          q8( ++contador, palavra, size );   
        }
        else if ( palavra[contador] == 'm')
        {
          q12( ++contador, palavra, size );  
        }
    }
    else 
    {
        qErro();
    }
}

void q8( int contador, char palavra[TAM],int size  )
{
   if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q5( ++contador, palavra, size ); 
        }  

        else if ( palavra[contador] == 'b')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q5( ++contador, palavra, size );  
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        } 

        else if ( palavra[contador] == 's')
        {
          q9( ++contador, palavra,size );   
        }

    }
    else 
    {
        qErro();
    }
}

void q9( int contador, char palavra[TAM], int size )
{
     if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q9( ++contador, palavra, size ); 
        }  

        else if ( palavra[contador] == 'b')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q9( ++contador, palavra, size );  
        }
        else if ( palavra[contador] == 'f')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q9( ++contador, palavra, size ); 
        } 
        else if ( palavra[contador] == 'c')
        {
          q14( ++contador, palavra, size );   
        }

        else if ( palavra[contador] == 'n')
        {
          q16( ++contador, palavra, size );   
        }

    }
    else 
    {
        qErro();
    }
}

void q10( int contador, char palavra[TAM], int size  )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q5( ++contador, palavra, size ); 
        }  

        else if ( palavra[contador] == 'b')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        } 
        else if ( palavra[contador] == 'e')
        {
          q11( ++contador, palavra, size );   
        }
    }
    else 
    {
        qErro();
    }
}

void q11( int contador, char palavra[TAM],int size )
{
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q5( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        } 
    }
    else 
    {
        qErro();
    }
}

void q12( int contador, char palavra[TAM], int size  ){
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q5( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q13( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        } 

    }
    else 
    {
        qErro();
    }
}

void q13( int contador, char palavra[TAM], int size  ){
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q5( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q5( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q5( ++contador, palavra, size ); 
        }  
    }
    else 
    {
        qErro();
    }
}

void q14( int contador, char palavra[TAM], int size  ){
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q9( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q15( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q9( ++contador, palavra, size ); 
        } 
    }
    else 
    {
        qErro();
    }
}

void q15( int contador, char palavra[TAM], int size  ){
    if ( contador < TAM )
    {
       if ( palavra[contador] == 'a')
        {
          q9( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          qFim( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q5( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q9( ++contador, palavra, size ); 
        } 
    }
    else 
    {
        qErro();
    }
}

void q16( int contador, char palavra[TAM], int size  ){
    if ( contador < TAM )
    {
       if ( palavra[contador] == 'a')
        {
          q9( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q17( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q9( ++contador, palavra, size ); 
        } 
    }
    else 
    {
        qErro();
    }
}

void q17( int contador, char palavra[TAM], int size  ){
    if ( contador < TAM )
    {
        if ( palavra[contador] == 'a')
        {
          q9( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          q9( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          qFim( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          q9( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          q9( ++contador, palavra, size ); 
        }  
    }
    else 
    {
        qErro();
    }
}


void qErro()
{
    printf("Palavra regeitada pelo automato !!!\n");
}

void qFim(int contador, char palavra[TAM], int size)
{
    if ( contador < TAM )
    {   if ( palavra[contador] == NULL)
        {
          printf("Palavra aceita com sucesso pelo automato !!!\n");
        }
    }
     if ( contador < TAM )
    {   
        if ( palavra[contador] == 'a')
        {
          qErro( ++contador, palavra, size ); 
        }  
        else if ( palavra[contador] == 'b')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'c')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'd')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'e')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'f')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'g')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'h')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'i')
        {
          qErro( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'j')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'k')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'l')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'm')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'n')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'o')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'p')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'q')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'r')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 's')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 't')
        {
          qErro( ++contador, palavra, size ); 
        }
        else if ( palavra[contador] == 'u')
        {
          qErro( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'v')
        {
          qErro( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'w')
        {
          qErro( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'x')
        {
          qErro( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'y')
        {
          qErro( ++contador, palavra, size ); 
        }else if ( palavra[contador] == 'z')
        {
          qErro( ++contador, palavra, size ); 
        }  
    }
    else 
    {
        qErro();
    }
}
