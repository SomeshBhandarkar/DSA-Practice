#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
	// Input
	int arSz;
	cin >> arSz;

	int* vote = new int[arSz];
	int* age = new int[arSz];

	for( int i = 0; i < arSz; i++ )
		cin >> vote[i];

	for( int i = 0; i < arSz; i++ )
		cin >> age[i];

	vector<int> candidates;
	vector<int> valids;

	std::vector<int>::iterator it;
	
	for( int i = 0; i < arSz; i++ ) {
		if( (it = find(candidates.begin(), candidates.end(), vote[i])) == candidates.end() ) {
			candidates.push_back(vote[i]);
			valids.push_back(0);
		}
	}

	for( int i = 0; i < arSz; i++ ) {
		if( age[i] > 17 ) {
			auto pos = find(candidates.begin(), candidates.end(), vote[i]);
			int index = pos - candidates.begin();
			valids[index] = valids[index] + 1;
		}
	}

	int max = valids[0];
	int pos = 0;

	for( int i = 1; i < valids.size(); i++ ) {
		if( max < valids[i] ) {
			max = valids[i];
			pos = i;
		}
	}

	cout << candidates[pos];

	return 0;
}

