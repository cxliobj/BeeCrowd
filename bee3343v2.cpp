#include <iostream>
#include <vector>
#include <algorithm>

using std::string;

int main()
{
    int numTitans, sizeWall, heightTitanSmall, heightTitanMedium, heightTitanGiant;
    string titans;

    std::cin >> numTitans;
    if (numTitans < 1 || numTitans > 300000)
    {
        return 1;
    }

    std::cin >> sizeWall;
    if (sizeWall < 1 || sizeWall > 100000)
    {
        return 1;
    }

    std::cin >> titans;

    std::cin >> heightTitanSmall;
    if (heightTitanSmall < 1) { return 1; }
    
    std::cin >> heightTitanMedium;
    if (heightTitanMedium < 1) { return 1; }
    
    std::cin >> heightTitanGiant;
    if (heightTitanGiant < 1) { return 1; }
    
    /*
    A maior quantidade de muralhas é igual ao número de titãs,
    logo um vetor de tamanho numTitans é criado.
    */

    std::vector<int> heightWalls(numTitans, sizeWall);

    int s = 1, m = 1, g = 1;
    for (char titan: titans)
    {
        switch (titan)
        {
        case 's':
            while (heightWalls[s] < heightTitanSmall)
            {
                s++;
            }
            heightWalls[s] -= heightTitanSmall; 
            break;
        case 'M':
            while (heightWalls[m] < heightTitanMedium)
            {
                m++;
            }
            heightWalls[m] -= heightTitanMedium;
            break;
        default:
            while (heightWalls[g] < heightTitanGiant)
            {
                g++;
            }
            heightWalls[g] -= heightTitanGiant;
            break;
        }
    }

    std::cout << std::max({s, m, g}) << std::endl;
    return 0;
}