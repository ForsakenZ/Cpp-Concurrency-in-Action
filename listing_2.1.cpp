#include <thread>
#include <iostream>
using  namespace std;
void do_something(int& i)
{
    cout<<i<<endl;
    ++i;
}

struct func
{
    int& i;

    func(int& i_):i(i_){}

    void operator()()
    {
        for(unsigned j=0;j<100;++j)
        {
            do_something(i);
        }
    }
};


void oops()
{
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);

    cout<<my_thread.joinable()<<endl;

//    my_thread.detach();
//    detach()表示进程分离
    my_thread.join();
    /* 这意味着， 只能对一个线程使用一次join();一旦已经使用过
        join()， std::thread 对象就不能再次加入了， 当对其使
     用joinable()时， 将返回否（ false） */
    cout<<my_thread.joinable()<<endl;
}

int main()
{
    oops();
}
