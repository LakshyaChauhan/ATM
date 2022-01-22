extern int pin;
extern int bal;
int PIN()
{
    srand(time(0));
    pin= rand()%1000;
    int a;
    a= rand()%10;
    if(a==0)
        a=a+4;    
    
    // ? To make it 4 digit
    pin= pin+1000*a;
    
    
    return pin;    
}

int BAL()
{
    srand(time(0)); 
    int a,b;
    a=(rand()/10);
    bal= (rand()%1000)*a;
    bal=bal/10;
    
    b=bal%1000;

    bal=bal-b;
    
    return bal;
}