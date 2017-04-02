#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <utility>

// 64 bits
#define MASK unsigned long long int

std::vector<std::vector<int>> distMatrix;
int n;

std::pair<int,std::vector<int>> pcv(int orig, MASK mask, std::vector<int> path) {
    
	// all nodes visited
	if( mask == (1<<n)-1 ) {
        return std::make_pair(distMatrix[orig][1], path);
    }


    int min = INT_MAX;
    std::vector<int> minPath;
    std::pair<int, std::vector<int>> aux;
    int k, newMask;
    std::vector<int> newPath;
    for (int i=1;i<=n;i++)
    {
        // make sure the node has not been visited
        if (! (mask & (1 << i-1)) )
        {
            // g(j,S - {j})
            newMask = mask | (1 << (i-1));
            newPath = path;
            newPath.push_back(i);
            
            // g(j,S - {j}) + dij
            aux = pcv(i, newMask, newPath);
            k = aux.first + distMatrix[orig][i];

            if(k < min) {
                min = k;
                minPath = aux.second;
            }
        }
	}

    return std::make_pair(min, minPath);
}

int main() {
    std::cin >> n;

    distMatrix.resize(n+1);
    for (int i = 1; i <= n; i++)
    {
        distMatrix[i].resize(n+1);
        for (int j = 1; j <= n; j++)
        {
            std::cin >> distMatrix[i][j];
        }
    }

    std::vector<int> path;
    auto result = pcv(1, 1, path);

    std::cout << "Cost: " << result.first << std::endl;

    std::cout << "1 -> ";
    for (auto v : result.second)
    {
        std::cout << v << " -> ";
    }

    std::cout << "1" << std::endl;
}