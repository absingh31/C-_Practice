#include <bits/stdc++.h>
#include "iostream"
#include "fstream"
#include "string"
#include <string>

using namespace std;

#define N 5
#define M 4

void printBoundary(int a[N][M], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0)
                cout << a[i][j] << endl;
            else if (i == m-1)
                cout << a[i][j] << endl;
            else if (j == 0)
                cout << a[i][j] << endl;
            else if (j == n-1)
                cout << a[i][j]<< endl;
        }
    }
}

// A function to rotate a matrix mat[][] of size N x M.
// Initially, m = N and n = M
int** rotatematrix(int m, int n, int mat[N][M])
{
    int row = 0, col = 0;
    int prev, curr;
 	/*
       row - Staring row index
       m - ending row index
       col - starting column index
       n - ending column index
       i - iterator
    */
    while (row < m && col < n)
    {
 
        if (row + 1 == m || col + 1 == n)
            break;
 
        // Store the first element of next row, this
        // element will replace first element of current
        // row
        prev = mat[row + 1][col];
 
         /* Move elements of first row from the remaining rows */
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
 
        /* Move elements of last column from the remaining columns */
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
 
         /* Move elements of last row from the remaining rows */
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
 
        /* Move elements of first column from the remaining rows */
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
    return mat;
}

int main()
{
	ifstream art, pre, words;

	string art_file = "Articles.txt";
	art.open(art_file);
	pre.open("Preposition.txt");

	map<string, int> art_map, pre_map;

	string text;
	int weight;
	while(art>>text>>weight)
	{
		art_map.insert(pair<string, int>(text, weight));
	}

	while(pre>>text>>weight)
	{
		pre_map.insert(pair<string, int>(text, weight));
	}
	art.close();
	pre.close();
	
	string file_name;
	cin >> file_name;
	ifstream in(file_name.c_str());
	int word_matrix[N][M];
	
	int n, m;
	bool ispre = false;
	bool isart = false;
	string word;
	for (n = 0; n < N; n++) {
		for (m = 0; m < M; m++) {
			in >> word;
			int score;

			if (n == 0 && m == 0)
			{
				if (art_map.find(word) != art_map.end())
				{
					isart = true;
				}
				else if (pre_map.find(word) != pre_map.end())
				{
					ispre = true;
				}
			} 

			if (art_map.find(word) != art_map.end())
			{
				score = art_map.at(word);  
			}
			else if (pre_map.find(word) != pre_map.end())
			{
				score = pre_map.at(word);  				
			}
			else
			{
				score = 0;  				
			}
			cout << word << " " << score << endl;
			word_matrix[n][m] = score;
		}
	}
	in.close();

	if (ispre)
	{
		printBoundary(word_matrix, M, N);
	}
	
	while (word_matrix[0][0] != 0 && isart)
	{
		word_matrix = rotatematrix(M, N, word_matrix);
	}


	int x,y;
	for (y = 0; y < N; y++) {
		for (x = 0; x < M; x++) {
			cout << word_matrix[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
