#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

bool isValidVertical(char grid[10][10], int r, int c, string word){
    for(int i=r, j=0;j<word.size();i++, j++){
        if(word.size()>10-r){
            return false;
        }
        if(grid[i][c] != '-' and grid[i][c] != word[j]){
            return false;
        }
    }
    return true;
}

bool isValidHorizontal(char grid[10][10], int r, int c, string word){
    for(int i=c, j=0;j<word.size();i++, j++){
        if(word.size()>10-c){
            return false;
        }
        if(grid[r][i] != '-' and grid[r][i] != word[j]){
            return false;
        }
    }
    return true;
}

void setVertical(char grid[10][10], int r, int c, string word, bool state[]){
    for(int i=r, j=0;j<word.size();i++, j++){
        if(grid[i][c] != '+'){
            if(grid[i][c] == word[j]){
                state[j]=false;
            }
            else{
                state[j]=true;
                grid[i][c]=word[j];
            }
        }
    }
}

void setHorizontal(char grid[10][10], int r, int c, string word, bool state[]){
    for(int i=c, j=0;j<word.size();i++, j++){
        if(grid[r][i] != '+'){
            if(grid[r][i] == word[j]){
                state[j]=false;
            }
            else{
                state[j]=true;
                grid[r][i]=word[j];
            }
        }
    }
}

void resetVertical(char grid[10][10], int r, int c,bool state[], int size){
    for(int i=r, j=0;j<size;i++, j++){
        if(state[j] == true){
            grid[i][c] = '-';
        }
    }
}

void resetHorizontal(char grid[10][10], int r, int c,bool state[], int size){
    for(int i=c, j=0;j<size;i++, j++){
        if(state[j] == true){
            grid[r][i] = '-';
        }
    }
}

bool solveCrossWord(char grid[10][10], string wordList[], int wordListSize, int index){
    if(index==wordListSize){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        return true;
    }
    
	for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            
            if(grid[i][j] == '-' or grid[i][j] == wordList[index][0]){
                if(isValidVertical(grid, i, j, wordList[index])){
                    bool state[wordList[index].size()];
                    setVertical(grid, i, j, wordList[index], state);
                    if(solveCrossWord(grid, wordList, wordListSize, index+1)){
                        return true;
                    }
                    else{
                        resetVertical(grid, i, j, state, wordList[index].size());
                    }
                }
                
                else if(isValidHorizontal(grid, i, j, wordList[index])){
                    bool state[wordList[index].size()];
                    setHorizontal(grid, i, j, wordList[index], state);
                    if(solveCrossWord(grid, wordList, wordListSize, index+1)){
                        return true;
                    }
                    else{
                        resetHorizontal(grid, i, j, state, wordList[index].size());
                    }
                }
            }
        }
    }
    return false;
}

int main(){

    char grid[10][10];
    string ss;
    for (int i = 0; i < 10; i++)
    {
        cin >> ss;
        for (int j = 0; j < ss.size(); j++)
            grid[i][j] = ss[j];
    }
    char s[200];
    cin >> s;
    string wordList[10];
    char ch;
    string word = "";
    int a = 0;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == ';')
        {
            wordList[a++] = word;
            word = "";
        }
        else
            word += s[i];
    }
    wordList[a++] = word;
    int wordListSize = a;
    bool res = solveCrossWord(grid, wordList, wordListSize, 0);
    return 0;
}

int main(){
  
  return 0;
}