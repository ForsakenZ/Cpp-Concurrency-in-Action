//
// Created by noname on 2021/5/24.
//

#include <thread>
#include <iostream>
using namespace std;

class background_task{
    int i=0,j=0;
public:
    void operator()() {
        for(int j=0;j<1000;j++)
        {
            do_something_else();
            do_something();
        }
    }
    void do_something()
    {
        cout<<i<<endl;
        i++;
    }
    void do_something_else()
    {
        cout<<j<<endl;
        j++;
    }
};

int main()
{
    background_task f;
    std::thread my_thread(f);
    my_thread.join();
    return 0;

}