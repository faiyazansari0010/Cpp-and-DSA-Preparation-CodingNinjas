#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

bool vertical(int arr[][9], int row, int col, int value)
{
    for (int i = 0; i < 9; i++)
        if (arr[i][col] == value)
            return false;
    return true;
}
bool horizontal(int arr[][9], int row, int col, int value)
{
    for (int i = 0; i < 9; i++)
        if (arr[row][i] == value)
            return false;
    return true;
}
bool box(int arr[][9], int row, int col, int value)
{
    int row_factor = row - (row % 3);
    int col_factor = col - (col % 3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i + row_factor][j + col_factor] == value)
                return false;
    return true;
}
bool checker(int arr[][9], int value, int row, int col)
{
    if (vertical(arr, row, col, value) && horizontal(arr, row, col, value) && box(arr, row, col, value))
        return true;
    return false;
}

bool find_empty_location(int arr[][9], int &row, int &col)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] == 0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}
bool solve(int arr[][9])
{
    int row = 0, col = 0;
    if (!find_empty_location(arr, row, col))
        return true;
    for (int i = 1; i <= 9; i++)
    {
        if (checker(arr, i, row, col))
        {
            arr[row][col] = i;
            if (solve(arr))
                return true;
            else
                arr[row][col] = 0;
        }
    }
    return false;
}

int main()
{
    // write your code here
    int board[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];
    if(solve(board)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}