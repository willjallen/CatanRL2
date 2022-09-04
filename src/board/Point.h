#include "Harbor.h"

class Point{

    public:
        Point(int _index, int _neighboringPoints[3], int _connectedTiles[3], Harbor::HarborType _harborType);

    private:
        /// @brief Index of the point, from [0, 53]
        int index;

        /// @brief Indexes of the neighbors of the point
        int neighboringPoints[3] = {-1, -1, -1};

        /// @brief Indexes of connected tiles
        int connectedTiles[3] = {-1, -1, -1};

        /// @brief The type of harbor this point connects to
        Harbor::HarborType harborType;

        /// @brief Index of the player who owns either a settlement or city on this point (-1 is empty)
        int buildingOwner;

        /// @brief Index of the player who owns a road on this point (-1 is empty)
        int roadOwner;

        /// @brief Does this point have a settlement
        bool hasSettlement;

        /// @brief Does this point have a city
        bool hasCity;

        /// @brief Does this point have a road
        bool hasRoad;


};

