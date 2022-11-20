#include<iostream>
#include<utility>
#include<queue>
#include<vector>
using namespace std;

pair<int, int> Position(vector<vector<int>> input)
{
    for(int i = 0; i < input.size(); i++)
    {
        for(int j = 0; j < input[i].size(); j++)
        {
            if(input[i][j] == 0)
            {
                return make_pair(i, j);
                break;
            }
        }
    }
}

void move(vector<vector<int>> &input, vector<vector<int>> &output, pair<int, int> position)
{
    queue<vector<vector<int>>> que;
    pair<int, int> ipos;
    que.push(input);
    vector<vector<int>> temp;
    while(!que.empty())
    {
        temp = que.front();
        que.pop();
        for(int i = 0; i < temp.size(); i++)
        {
            for(int j = 0; j < temp[i].size(); j++)
            {
                cout<<temp[i][j]<<"\t";
            }   
            cout<<"\n";
        }
        
        cout<<"\n";

        if(temp == output)
        {
            return;
        }

        ipos = Position(temp);

        int i = ipos.first;
        int j = ipos.second;

        if((j-1) >= 0)
        {
            int store = 0;
            store = temp[i][j];
            temp[i][j] = temp[i][j-1];
            temp[i][j-1] = store;
            que.push(temp);
            store = temp[i][j];
            temp[i][j] = temp[i][j-1];
            temp[i][j-1] = store;
        }
        
        if((j+1) < 3)
        {
            int store = 0;
            store = temp[i][j];
            temp[i][j] = temp[i][j+1];
            temp[i][j+1] = store;
            que.push(temp);
            store = temp[i][j];
            temp[i][j] = temp[i][j+1];
            temp[i][j+1] = store;
        }

        if((i+1) < 3)
        {
            int store = 0;
            store = temp[i][j];
            temp[i][j] = temp[i+1][j];
            temp[i+1][j] = store;
            que.push(temp);
            store = temp[i][j];
            temp[i][j] = temp[i+1][j];
            temp[i+1][j] = store;
        }

        if((i-1) >= 0)
        {
            int store = 0;
            store = temp[i][j];
            temp[i][j] = temp[i-1][j];
            temp[i-1][j] = store;
            que.push(temp);
            store = temp[i][j];
            temp[i][j] = temp[i-1][j];
            temp[i-1][j] = store;
        }
    }
}

int main()
{
    vector<vector<int>> input = {{1, 2, 3},{0, 4, 6},{7, 5, 8}};
    vector<vector<int>> output = {{1, 2, 3},{4, 5, 6},{7, 8, 0}};

    pair<int, int> position = Position(input);
    
    move(input, output, position);

    return 0;
}