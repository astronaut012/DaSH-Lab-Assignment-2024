/* This is the outline of a program that prints a prompt, along with it's answer from an API, using an object for each prompt's details
*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class JSON
{
private:
char Prompt[1000000]; //creates a character array or string for storing the prompt
char Message[1000000]; //creates a character array or string for storing the response
long TimeSent;
long TimeRecvd;
char Source[30];

public:

void OpenFile()
{
ifstream fin1; //object creation
ofstream fout1; //object creation
fin1.open("input.txt"); //opens the file to get the input
fout1.open("output.json"); //opens the file to write the output in
}

int Task()
{

Prompt=fin1.getline(); //store prompt
/*
Get timesent 
Call the API and pass string Prompt to it
Store answer in string Message
Get source 
---CODE---
*/

print();

//to return if end of file

if(fin1==true)
return 1;
else
return 0;
}

void print()
{
fout1<<"{";<<endl;
fout1<<"\"Prompt\":"+Prompt<<endl;
fout1<<"\"Message\":"+Message<<endl;
fout1<<"\"TimeSent\":"+TimeSent<<endl;
//get time received
fout1<<"\"TimeRecvd\":"+TimeRecvd<<endl;
fout1<<"\"Source\":"+Source+"}\n\n";
}

void CloseFile()
{
fin1.close();
fout1.close(); //closes both the files
}

};

void main()
{
JSON obj[];//array of objects with dynamic allocation of memory, for as many prompts as there are
int i=1; //a flag to mark the end of file
int j=0; //index for object array
while(i!=0)
{
i=obj[j].Task();
j++;
}
}