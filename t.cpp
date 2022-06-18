#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    map<int, int> buy;
    buy[100] = 10;
    buy[99] = 4;
    buy[87] = 2;

    map<int, int> sell;
    sell[100] = 10;
    sell[99] = 5;
    sell[87] = 1;
    cout << "buy" << endl;
    for (auto ss : buy)
    {
        cout << ss.first << ":" << ss.second << endl;
    }
    cout << "sell" << endl;
    for (auto ss : sell)
    {
        cout << ss.first << ":" << ss.second << endl;
    }
    cout << "........" << endl;
    // for (int i = 0; i < buy.size(); i++)
    // {
    //     for (int j = 0; j < sell.size(); j++)
    //     {
    //         if (buy[i] == sell[j] && buy[i] < sell[i])
    //         {
    //             sell[i] -= buy[i];
    //             // cout << sell[i] << endl;
    //         }
    //     }
    // }
    for (auto bb : buy)
    {
        for (auto ss : sell)
        {
            if (bb.first == ss.first && bb.second <= ss.second)
            {
                int q = ss.second - bb.second;

                sell[ss.first] = q;
                if (ss.second == 0)
                {
                    sell.erase(ss.first);
                }
                // cout << "sssss" << ss.second << endl;

                // if(sell.find(ss.first)){

                // }
                // sell.emplace(ss.first, 9999);
                // ss.second = 100;
                // cout << "qqqqq" << q << endl;
                // sell.emplace(ss.first, q);
                // sell.insert(ss.first, q);
            }
        }
    }
    // for (int j = 0; j < sell.size(); j++)
    // {
    //     // if (buy[i] == sell[j] && buy[i] < sell[i])
    //     // {
    //     //     sell[i] -= buy[i];
    // cout << sell[0] << endl;
    // cout << sell[1] << endl;
    // cout << sell[0] << endl;
    // cout << sell[0] << endl;
    //     // }
    // }

    cout << "buy" << endl;
    for (auto ss : buy)
    {
        cout << ss.first << ":" << ss.second << endl;
    }
    cout << "sell" << endl;
    for (auto ss : sell)
    {
        cout << ss.first << ":" << ss.second << endl;
    }

    // cout << sell.size();

    return 0;
}