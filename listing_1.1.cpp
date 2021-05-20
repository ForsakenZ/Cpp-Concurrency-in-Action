#include <iostream>
#include <thread>




/*每个线程都必须有一个初始函数，新线程的执行从这里开始
 * 对于应用程序，初试线程是main，但是对于线程t，开始于hello();
 * */


void hello()
{
    std::cout<<"Hello Concurrent World\n";
}

int main()
{
    std::thread t(hello);
    t.join();
//    调用join（）函数，表示线程main会等待域线程相关的线程。
    return 0;

}
