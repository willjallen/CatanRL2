#include "Harbor.h"

class Point{
    private:
        /// @brief Index of the point, from [0, 53]
        int index;

        /// @brief Indexes of the neighbors of the point
        int neighboringPoints[3] = {-1, -1, -1};

        /// @brief Indexes of connected tiles
        int connectedTiles[3] = {-1, -1, -1};

        /// @brief The type of harbor this point connects to
        HarborType harborType;

        /// @brief Does this point have a settlement
        bool hasSettlement;

        /// @brief Does this point have a city
        bool hasCity;

        /// @brief Does this point have a road
        bool hasRoad;

    public:

        Point(int _index, int _neighboringPoints[3], int _connectedTiles[3]);


};