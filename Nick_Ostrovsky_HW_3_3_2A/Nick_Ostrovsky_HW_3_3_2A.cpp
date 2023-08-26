

#include <iostream>
class Counter 
{
private:
    int ctr;
public:
    Counter() : ctr(1)
    {};
    Counter(int ctr)
    {};
    void set_ctr(int c) { ctr = c;}
    int get_ctr() { return (ctr); }
    void inc() { ctr++; }
    void dec() { ctr--; }

};
int main()
{
    Counter count;
    std::string line = " ";
    std::cout << "Need to set counter initial value Y/N?\n";
    std::cin >> line;
    int i = 0;
    while ( i == 0)
    {
        if (line == "Y")
        {
            int n = 0;
            std::cout << "Please, set counter initial value:\n";
            std::cin >> n;
            count.set_ctr(n);
            i = 1;
        }
        else if (line != "Y" || line != "N")
        {
            std::cout << "Need to set counter initial value Y/N?\n";
        }
        else if (line == "N")
        {
            i = 1;
        }
    }

    line = " ";
    while (1)
    {
        std::cout << "Increase (+), Decrease (-), Check (=), Quit (x) : \n" << std::endl;
        std::cin >> line;
        if (line == "+")
        {
            count.inc();
           
        }
        else if (line == "-")
        {
            count.dec();
        }
        else if (line == "=")
        {
            std::cout << "\t \n" << count.get_ctr() << std::endl;
        }
        else if (line == "x")
        {
            break;
        }
    }
    return (0);
}

