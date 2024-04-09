#include <iostream>
#include <vector>

using std::string;

int getSizeTitan(char titan, int *heightTitans)
{
    switch (titan)
    {
    case 'P':
        return heightTitans[0];
    case 'M':
        return heightTitans[1];
    default:
        return heightTitans[2];
    }
}

int main()
{
    int numTitans, sizeWall;
    string titans;
    int heightTitans[3];

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

    for (int i = 0; i < 3; i++)
    {
        std::cin >> heightTitans[i];
        if (heightTitans[i] < 1) { return 1; }
    }

    // A maior quantidade de muralhas é igual ao número de titãs,
    //  logo um vetor de tamanho numTitans é criado
    std::vector<int> heightWalls(numTitans, sizeWall);

    int lastWall = 1;
    for (int i = 0; i < numTitans; i++)
    {
        char titan = titans[i];
        int heightTitan = getSizeTitan(titan, heightTitans);
        
        int numWall = 0;
        while (heightWalls[numWall] < heightTitan)
        {
            numWall++;
        }
        if (numWall + 1 > lastWall) 
            { lastWall = numWall + 1; }
            
        heightWalls[numWall] -= heightTitan;
    }

    std::cout << lastWall << std::endl;
    return 0;
}