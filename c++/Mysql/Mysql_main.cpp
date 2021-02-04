#include"Mysql_pool.h"
#include<sys/types.h>
#include<unistd.h>

using namespace Summer;

std::shared_ptr<Mysql_pool> pool = Mysql_pool::GetInstance();

int main(int argc, char* argv[])
{
    pool->init("127.0.0.1", "zhuwenbo", "Zwb.2528246", "practice", 0, 10);
    MYSQL* con = pool->GetConnection();
    sleep(30);
}