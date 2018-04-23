/////////////////////////////////////////////////////////////////////
////////			AUTHOR : ABHISHEK SINGH            /////////////
///////////////////////////////////////////////////////////////////

/*
In English, a single word is called an unigram and two words together are called bigrams. 
Some words give positive meaning and some give negative meaning. Weightage is also given for unigrams and bigrams. 
Given a file 'unigrams.txt' with single positive and negative words with weights and a file 'bigrams.txt' with double positive and negative words with their weights, 
determine if a passage in the input file is positive or negative. 
Both unigrams and bigrams in 'unigrams.txt' and 'bigrams.txt' begin with either positive or negative sign to indicate whether it is a positive or negative term. 
A passage is said to be positive when the sum of weight of positive unigrams and bigrams in it is greater than sum of weight of negative unigrams and bigrams in it. 
If a passage is negative then replace all the negative unigrams with positive unigrams. Passage in the input file ends with the keyword “END”. 
Weightage of all positive unigrams are unique and similarly weightage of all negative unigrams are also unique.

For example, if the content of unigrams.txt is as follows:

-bad 5

-worse 3

-worst 6

+great 6

+good 5

+nice 3

bad, worse and worst are negative words and great, good and nice are positive words and their weightage is give that is separated by a tab. 
If content of 'bigrams.txt' is as follows:

+very good 5

+very great 7

-very bad 5

-bad luck 7

-bad mood 6

+good mood 6

If the input passage is “the movie was very good that we enjoyed it though the theatre was bad It was a great experience Last movie was very bad and we came out with a bad mood good END ” 
then weightage of positive terms is 21 and weightage of negative terms is 26. So negative unigrams have to be replaced by positive unigrams of same weightage and output passage will

the movie was very good that we enjoyed it though the theatre was good It was a great experience Last movie was very good and we came out with a good mood good

Input Format

Name of the file with input passage

Output Format

Total weight of positive terms

Total weight of negative terms

Print manipulated text if negative terms > positive terms and print original text otherwise


Input:
passage.txt

Expected Output:
21
26
the movie was very good that we enjoyed it though the theatre was good It was a great experience Last movie was very good and we came out with a good mood good 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ifstream uni, bi, pass;

	uni.open("unigrams.txt");
	bi.open("bigrams.txt");

	string file_name;

	cin>>file_name;

	pass.open(file_name);

	map<string, int> uni_map, bi_map;

	string text, text2;
	int score;
	while(uni>>text>>score)
	{
		char sign = text.at(0);
		if(sign == '-')
		{
			score = -1*score;
		}
		string::iterator it = text.begin();
		text.erase(it);
		uni_map.insert(pair<string, int>(text, score));
	}


	while(bi>>text>>text2>>score)
	{
		char sign = text.at(0);
		if(sign == '-')
		{
			score = -1*score;
		}
		string::iterator it = text.begin();
		text.erase(it);
		text = text + " "  + text2;
		bi_map.insert(pair<string, int>(text, score));
	}

	int total_pos = 0;
	int total_neg = 0;
	string conct;
	pass>>text2;
	while(pass>>text)
	{
		if(text == "END")
			break;
		conct = text2 + " " + text;
		text2 = text;
		if(bi_map.count(conct)>0)
		{
			int value = bi_map.find(conct)->second;
			if(value>=0)
				total_pos+=value;
			else
				total_neg+=value;	
		}
		
	}

	ifstream pass2;
	pass2.open(file_name);
	while(pass2>>text)
	{
		if(text == "END")
			break;
		if(uni_map.count(text)>0)
		{
			int value = uni_map.find(text)->second;
			if(value>=0)
				total_pos+=value;
			else
				total_neg+=value;	
		}
		
	}

	int diff = -1*total_neg - total_pos;
	if(diff>0)
	{
		ifstream pass3;
		pass3.open(file_name);
		while(pass3>>text)
		{
			if(text == "END")
				break;

				int value = uni_map.find(text)->second;
				if(value<0)
				{
					for(map<string, int>::iterator it=uni_map.begin(); it!=uni_map.end(); ++it)
						{
							if(it->second == -1*value)
							{
								cout<<it->first<<" ";
							}
						}
				}
				else
				{
					cout<<text<<" ";
				}	
		}
	}
	else
	{
		ifstream pass3;
		pass3.open(file_name);
		while(pass3>>text)
		{
			if(text == "END")
				break;
			cout<<text<<" ";
		}
	}

	uni.close();
	bi.close();
	pass.close();
	pass2.close();
	//pass3.close();
	return 0;
}