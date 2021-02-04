#include<iostream>

class transaction
{
public:  
    transaction();
    virtual void log();

private:  
    int date;    
};

transaction::transaction() : date(0)
{
    log();
}

void transaction::log()
{
    printf("base virtual function running\n");
}

class buytran : public transaction
{
public:  
    buytran();
    virtual void log() override;
};

buytran::buytran()
{
    log();
}

void buytran::log()
{
    printf("derrived virtual function running\n");
}

int main()
{
    buytran a;
}