# My Ngram
This code is an implementation of a technology that counts the number of repetitions of entered characters, called *Ngram*.

The code was written by [Abdussamad Turdixojayev](https://github.com/Abuuu2007).

## Content
* [Description](#description)
* [Usage](#usage)
* [Code component](#code-component)
* [Main function](#main-function)
## Description
I was given the task of creating an Ngram that takes one or more strings as arguments, which then displays each character and the number of repetitions in alphanumeric order.

But with all this, you can use a limited number of functions, namely:

* printf(3)
* write(2)

Here I also used all the functions except `write()`.

## Usage
### Start the game
In order to run my_ngram, you need to enter into the console with the appropriate arguments, for example:
```
$ ./my_ngram "Hello World!"
```
In this case, the following text will be displayed:
```
 :1
!:1
H:1
W:1
d:1
e:1
l:3
o:2
r:1
```
## Code Component
### Function `my_strlen`
To begin with, I created a function similar to `strlen`, because... its use was prohibited:
```c
int my_strlen(char* p1){
  int i = 0;
  while(p1[i] != '\0')
    i++;
  return i;
}
```
---
### Function `bubbleSort`
I’m creating a function that sorts characters incoming from the console in alphabetical order:
```c
char* bubbleSort(char* p1){
  int len = my_strlen(p1);
  char temp;
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len-i-1; j++){
      if(p1[j] > p1[j+1]){
        temp = p1[j];
        p1[j] = p1[j+1];
        p1[j+1] = temp;
      }
    }
  }
   return p1;
}
```
### Function `my_ngram`
And finally, the `my_ngram` function itself, which displays the characters and the number of their repetitions:
```c
void my_ngram(char* p1){
  int len = my_strlen(p1);
  int duplicate = 1;
  
  for(int i = 0; i < len; i++){
    for(int j = i + 1; j <= len; j++){
      if(p1[i] == p1[j]){
        duplicate +=1;
        i++;
      }
      else{
        printf("%c:%d\n", p1[i], duplic);
        duplicate = 1;
        break;
      }
    }
  }
}
```
## `Main` function
By setting the `argc` and `argv` parameters to pass console arguments, I set a condition so that if the number of arguments is incorrect, the game will stop:
```c
int main(int argc, char* argv[]){
  if (argc == 1){
    printf("Error! No characters were entered.");
    return 1;
  }
```
---
I am writing code that creates an array of characters, the length of which is equal to the length of the characters entered through the console:
```c
int len = 0;

for(int i = 1; i < argc; i++)
  len += my_strlen(argv[i]);

char buf1[len];
```
---
I equate the array of characters `buf1` to the characters that are entered through the console:
```c
int k = 0;
  
for(int i = 1; i < argc; i++){
  int lensstr = my_strlen(argv[i]);
  for(int j = 0; j < lensstr; j++){
    buf1[k] = argv[i][j];
    k++;
  }
buf1[k] = '\0';
}
```
---
* First I sort the characters in alphabetical order using `bubbleSort`.
* Next I use `my_ngram` to display the characters and the number of repetitions.
* The program ends.
```c
  char* bufsort = bubbleSort(buf1);
  
  my_ngram(bufsort);
    
  return 0;
}
```
---
### The note! This Readme file was written and translated from Russian, therefore some semantic errors may occur
