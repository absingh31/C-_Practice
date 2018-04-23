#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream article, preposition, input;

	article.open("article.txt");
	preposition.open("preposition.txt");

	string file_name;
	cin>>file_name;

	string text;
	int score;

	map<string, int> art, prep;

	while(article>>text>>score)
		art.insert(pair<string, int>(text, score));

	while(preposition>>text>>score)
		prep.insert(pair<string, int>(text, score));
	
	input.open(file_name);

	ifstream line_file;
	line_file.open(file_name);
	ifstream word_file;
	word_file.open(file_name);
	string line;
	int line_count=0, word_count=0;
	while(getline(line_file,line))
		line_count++;
	
	while(word_file>>text)
		word_count++;

	word_count = word_count/line_count;

	int mat[line_count][word_count];


	int output_flag = 0;
	for(int i = 0; i<line_count ; i++)
		for (int j = 0; j < word_count; ++j)
		{
			int flag = 0;
			input>>text;
			if (i == 0 && j == 0 && art.count(text)>0)
				output_flag = 1;			
			if (art.count(text)>0)
			{
				mat[i][j] = art.find(text)->second;
				flag = 1;
			}
			if (prep.count(text)>0)
			{
				mat[i][j] = prep.find(text)->second;
				flag = 1;
			}
			if (flag == 0)
				mat[i][j] = 0;
		}


	if(output_flag == 0)
	{
		for (int i = 0; i < line_count; ++i)
		{	
			for (int j = 0; j< word_count; ++j)
			{
				if (i == 0 || j == word_count-1 || j == 0 || i == line_count-1)
					cout<<mat[i][j]<<" ";				
			}
		}		
	}

	else
	{
		while(mat[0][0]!=0)
		{
			int first_ele = mat[0][0];

			for (int i = 0; i < word_count-1; ++i)
				mat[0][i] = mat[0][i+1];

			for (int i = 0; i < line_count-1; ++i)
				mat[i][word_count-1] = mat[i+1][word_count-1];

			for (int i = word_count-1; i > 0; --i)
				mat[line_count-1][i] = mat[line_count-1][i-1];

			for (int i = line_count-1; i > 0; --i)
				mat[i][0] = mat[i-1][0];

			mat[1][0] = first_ele;
		}
		for (int i = 0; i < line_count; ++i)
		{	
			for (int j = 0; j< word_count; ++j)
				cout<<mat[i][j]<<" ";
			cout<<endl;
		}
	}
	article.close();
	preposition.close();
	line_file.close();
	word_file.close();
	input.close();
	return 0;
}