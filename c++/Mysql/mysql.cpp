#include<iostream>
#include<vector>
#include<mysql/mysql.h>
#include<thread>
#include<mutex>
const char *user = "zhuwenbo";                                            
const char *key = "Zwb.2528246";
const char *host = "localhost";
const char *db = "practice";

std::mutex mutex_;
MYSQL con;
void worker() 
{
    mutex_.lock();
    if(mysql_init(&con) == NULL)
        std::cout << "mysql_init is failed\n";
    std::cout << &con << "\n";
    std::cout << "mysql_init running\n";
    if(mysql_real_connect(&con, host, user, key, db, 0, NULL, 0) == NULL)
    {
        std::cout << "mysql_real_connect is failed\n";
    }
    std::cout << "mysql real connect runnig\n";
    mutex_.unlock();
}

int main()
{
    if(mysql_init(&con) == NULL)
        std::cout << "mysql_init is failed\n";
    if(mysql_real_connect(&con, "127.0.0.1", user, key, db, 0, NULL, 0) == NULL)
    {
        std::cout << "mysql_real_connect is failed\n";
    }
    std::cout << "运行成功\n";
 //   /*
    std::thread t1 = std::thread(worker);
    std::thread t2 = std::thread(worker);
    std::thread t3 = std::thread(worker);
    t1.join();
    t2.join();
    t3.join();
 //   */
}