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
        Constants::HarborType harborType;

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

    public:
        Point(int _index, int _neighboringPoints[3], int _connectedTiles[3], Constants::HarborType _harborType);


        /** Getters **/
        constexpr inline int getIndex(){return this->index; };
        constexpr inline int* getNeighbors(){return this->neighboringPoints; };
        constexpr inline int* getConnectedTiles(){return this->connectedTiles; };
        constexpr inline Constants::HarborType getHarborType(){return this->harborType; };
        constexpr inline int getBuildingOwner(){return this->buildingOwner; }; 
        constexpr inline int getRoadOwner(){return this->roadOwner; };
        constexpr inline bool hasSettlement(){return this->hasSettlement; };
        constexpr inline bool hasCity(){return this->hasCity; };
        constexpr inline bool hasRoad(){return this->hasRoad; }

        /** Setters **/
        inline void setBuildingOwner(int _buildingOwner){this->buildingOwner = _buildingOwner; };
        inline void setRoadOwner(int _roadOwner){this->roadOwner = _roadOwner; };
        inline void setHasSettlement(bool _hasSettlement){this->hasSettlement = _hasSettlement; };
        inline void setHasCity(bool _hasCity){this->hasCity = _hasCity; };
        inline void setHasRoad(bool _hasRoad){this->hasRoad = _hasRoad; };


};