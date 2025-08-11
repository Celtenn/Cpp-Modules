#include <iostream>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    for (int i = 1; argv[i]; i++)
    {
        for (int a = 0; argv[i][a]; a++)
        {
            if (argv[i][a] <= 'z' && argv[i][a] >= 'a')
                argv[i][a] = toupper(argv[i][a]);
        }
    }
    
    for (int i = 1; argv[i]; i++)
    {
        for (int a = 0; argv[i][a]; a++)
            std::cout << argv[i][a];
    }
    std::cout << "\n";
}
