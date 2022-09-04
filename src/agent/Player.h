class Player{
    public:
        
        /// @brief Player constructor, set values to default
        Player();

        virtual void doTurn();

    private:
        /** Player attributes **/
        
        /// @brief Player index
        int playerNum;

        /// @brief Player has access to (3 same:1 any) type harbor
        bool hasAnyHarbor;

        /// @brief Player has access to (2 brick:1 any) type harbor
        bool hasBrickHarbor;

        /// @brief Player has access to (2 lumber:1 any) type harbor
        bool hasLumberHarbor;

        /// @brief Player has access to (2 ore:1 any) type harbor
        bool hasOreHarbor;

        /// @brief Player has access to (2 grain:1 any) type harbor
        bool hasGrainHarbor;

        /// @brief Player has access to (2 wool:1 any) type harbor
        bool hasWoolHarbor;


        /** Player cards **/
        // Resources
        /// @brief Number of Brick cards the player owns
        int numBrickCards;

        /// @brief Number of Lumber cards the player owns
        int numLumberCards;

        /// @brief Number of Ore cards the player owns
        int numOreCards;

        /// @brief Number of Grain cards the player owns
        int numGrainCards;

        /// @brief Number of Wool cards the player owns
        int numWoolCards;

        // Dev cards

        /// @brief Number of Knight cards the player owns
        int numKnightCards;

        /// @brief Number of Year Of Plenty cards the player owns
        int numYearOfPlentyCards;

        /// @brief Number of Road Building cards the player owns
        int numRoadBuildingCards;

        /// @brief Number of Monopoly cards the player owns
        int numMonopolyCards;

        /// @brief Number of Victory Point cards the player owns
        int numVictoryPointCards;

        /** Initial Game Action Related **/

        /// @brief How many initial buildings left to place (start with 2)
        int initialBuildingsLeft;

        /// @brief How many initial roads left to place (start with 2)
        int initialRoadsLeft;

        /** Action Related **/

        /// @brief How many cards need to be trashed
        int numCardsLeftToTrash;

        /// @brief Does the player need to place a settlement  
        bool mustPlaceSettlement;

        /// @brief Does the player need to place a road
        bool mustPlaceRoad;

        /// @brief Does the player need to roll the dice
        bool mustRoll;

        /// @brief Does the player need to move the robber
        bool mustMoveRobber;

        /// @brief Does the player need to respond to trade
        bool mustRespondToTrade;

        /// @brief Does the player need to end their turn
        bool mustEndTurn;

};