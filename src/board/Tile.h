#include "Resource.h"

class Tile{
    public:
        Tile(int _rollsum, Resource::ResourceType resourceType);


    private:
        /// @brief The rollsum for this tile
        int rollSum;

        /// @brief The resource type for this tile.
        Resource::ResourceType resourceType;

        /// @brief Whether this tile has the robber on it
        bool hasRobber;




};