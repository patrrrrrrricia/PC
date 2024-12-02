#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  //pt functia islower

#define MAX_LENGTH 1000 //lungimea maxima

//1
//lungimea unui sir de caractere s
int  strlen0(char* s)
{
    int i = 0; //lungimea e 0
    while(s[i] != 0) //'\0' sau 0 diferit de caracterul NULL
        i++; //cresc lungimea
    return i;
}

//2
//prima aparitie la care se afla caracterul c in sirul s
int strchr0(char* s, char c)
{
    int i = 0;
    while(s[i] != 0)
    {
        if(s[i] == c)
            return i;
        i++;
    }
    return -1;
}

int strchr1(char* s, char c)
{
    char* p = strchr(s, c);
    if(p == NULL)
        return -1;
    return p - s;
}

//3
//ultima aparitie la care se afla caracterul c in sirul s
int strrchr0(char* s, char c)
{
    int i = 0, ultima = -1;
    while(s[i] != 0)
    {
        if(s[i] == c)
            ultima = i;
        i++;
    }
    return ultima;

}

int strrchr1(char* s, char c)
{
    char* p = strchr(s, c);
    if(p == NULL)
        return -1;
    return p - s;
}

//4
//stergerea caracterului de pe pozitia poz din sirul s
int memmove0(char* s, int poz)
{
    int lungime = strlen(s);
    for(int i = poz; i < lungime; i++)
        s[i] = s[i + 1];
    s[lungime-1] = '\0';
}

int memmove1(char* s, int poz)
{
    int lungime = strlen(s);
    memmove(&s[poz], &s[poz+1], lungime-poz);

}

//5
//sterge toate aparitiile ale caracterelului c din sirul s
int sterg_aparitii(char* s, char c)
{
    int lungime = strlen(s);
    int j = 0;
    for (int i = 0; i < lungime; i++)
    {
        if (s[i] != c)
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}

//6
//stergeti toate literele mici din sirul s

//verific daca este litera mica
//int islower0(char c)
//{
//    if(c >= 'a' && c <= 'z')
//    {
//         printf("%c este o litera mica\n", c);
//    }
//    else if(c >= 'A' && c <= 'Z')
//    {
//        printf("%c este o litera mare\n", c);
//    }
//    else
//    {
//        printf("%c nu este litera\n", c);
//    }
//}

void litere_mici(char* s)
{
    char a[MAX_LENGTH] = {0}; //initializat cu 0
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(!s[i]>='a' && !s[i]<='z')
        {
            a[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';

}
void islower0(char* s)
{
    char a[MAX_LENGTH] = {0};
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(!islower(s[i]) || !isalpha(s[i]))
        {
            a[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}

int main()
{
    char s1[100] = "abcX";
    char s2[] = "abc";
    char* s3 = "abc";
    //1
    //printf("%d %d", strlen0(s1), strlen(s1));
    //2
    //printf("%d %d", strchr0(s1, 'x'), strchr1(s1, 'x'));
    //3
    //printf("%d %d", strrchr0(s1, 'b'), strchr1(s1, 'b'));
    //4
    //memmove0(s1, 2);
    //printf("%s", s1);
    //5
    //sterg_aparitii(s1, 'a');
    //printf("%s", s1);
    //6
    char c;
    scanf("%c", &c);
    //islower0(c);
    islower0(s1);
    printf("%s", s1);
    return 0;
}
