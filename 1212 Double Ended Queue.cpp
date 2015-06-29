#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    string st;
    for(int j=1; j<=T; j++)
    {
        int n, m, mk;
        deque <int> q;
        cin >> n >> m;
        printf("Case %d:\n",j);
        for(int i=1; i<=m; i++)
        {
            cin >> st;
            if( st == "pushLeft")
            {
                cin >> mk;
                if(q.size() != n)
                {
                    q.push_front(mk);
                    cout << "Pushed in left: " << mk << endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(st == "pushRight")
            {
                cin >> mk;
                if(q.size() != n)
                {
                    q.push_back(mk);
                    cout << "Pushed in right: " << mk << endl;
                }
                else
                    cout << "The queue is full" << endl;
            }
            else if(st == "popLeft")
            {
                if(q.size() != 0)
                {
                    mk = q.front();
                    cout << "Popped from left: " << mk << endl;
                    q.pop_front();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
            else
            {
                if(q.size() != 0)
                {
                    mk = q.back();
                    cout << "Popped from right: " << mk << endl;
                    q.pop_back();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
        }
    }
    return 0;
}
