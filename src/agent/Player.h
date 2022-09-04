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


        /** Getters **/
        inline constexpr int hasAnyHarbor(){return this->hasAnyHarbor; };
        inline constexpr int hasBrickHarbor(){return this->hasBrickHarbor; };
        inline constexpr int hasLumberHarbor(){return this->hasLumberHarbor; };
        inline constexpr int hasOreHarbor(){return this->hasOreHarbor; };
        inline constexpr int hasGrainHarbor(){return this->hasGrainHarbor; };
        inline constexpr int hasWoolHarbor(){return this->hasWoolHarbor; };

        inline constexpr int getNumBrickCards(){return this->numBrickCards; };
        inline constexpr int getNumLumberCards(){return this->numLumberCards; };
        inline constexpr int getNumOreCards(){return this->numOreCards; };
        inline constexpr int getNumGrainCards(){return this->numGrainCards; };
        inline constexpr int getNumWoolCards(){return this->numWoolCards; };

        inline constexpr int getNumKnightCards(){return this->numKnightCards; };
        inline constexpr int getNumYearOfPlentyCards(){return this->numYearOfPlentyCards; };
        inline constexpr int getNumRoadBuildingCards(){return this->numRoadBuildingCards; };
        inline constexpr int getNumMonopolyCards(){return this->numMonopolyCards; };
        inline constexpr int getNumVictoryPointCards(){return this->numVictoryPointCards; };

        inline constexpr int getNumCardsLeftToTrash(){return this->numCardsLeftToTrash; };
        inline constexpr bool mustPlaceSettlement(){return this->mustPlaceSettlement; };
        inline constexpr bool mustPlaceRoad(){return this->mustPlaceRoad; };
        inline constexpr bool mustRoll(){return this->mustRoll; };
        inline constexpr bool mustMoveRobber(){return this->mustMoveRobber; };
        inline constexpr bool mustRespondToTrade(){return this->mustRespondToTrade; };
        inline constexpr bool mustEndTurn(){return this->mustEndTurn; };


        /** Setters **/
        inline void setHasAnyHarbor(boolean _hasAnyHarbor){this->hasAnyHarbor = _hasAnyHarbor; };
        inline void setHasBrickHarbor(boolean _hasBrickHarbor){this->hasBrickHarbor = _hasBrickHarbor; };
        inline void setHasLumberHarbor(boolean _hasLumberHarbor){this->hasLumberHarbor = _hasLumberHarbor; };
        inline void setHasOreHarbor(boolean _hasOreHarbor){this->hasOreHarbor = _hasOreHarbor; };
        inline void setHasGrainHarbor(boolean _hasGrainHarbor){this->hasGrainHarbor = _hasGrainHarbor; };
        inline void setHasWoolHarbor(boolean _hasWoolHarbor){this->hasWoolHarbor = _hasWoolHarbor; };
        
        inline void setNumBrickCards(int _numBrickCards){this->numBrickCards = _numBrickCards; };
        inline void setNumLumberCards(int _numLumberCards){this->numLumberCards = _numLumberCards; };
        inline void setNumOreCards(int _numOreCards){this->numOreCards = _numOreCards; };
        inline void setNumGrainCards(int _numGrainCards){this->numGrainCards = _numGrainCards; };
        inline void setNumWoolCards(int _numWoolCards){this->numWoolCards = _numWoolCards; };

        inline void setNumKnightCards(int _numKnightCards){this->numKnightCards = _numKnightCards; };
        inline void setNumYearOfPlentyCards(int _numYearOfPlentyCards){this->numYearOfPlentyCards = _numYearOfPlentyCards; };
        inline void setNumRoadBuildingCards(int _numRoadBuildingCards){this->numRoadBuildingCards = _numRoadBuildingCards; };
        inline void setNumMonopolyCards(int _numMonopolyCards){this->numMonopolyCards = _numMonopolyCards; };
        inline void setNumVictoryPointCards(int _numVictoryPointCards){this->numVictoryPointCards = _numVictoryPointCards; };

        inline void setNumCardsLeftToTrash(int _numCardsLeftToTrash){this->numCardsLeftToTrash = __numCardsLeftToTrash; };
        inline void setMustPlaceSettlement(bool _mustPlaceSettlement){this->mustPlaceSettlement = _mustPlaceSettlement; };
        inline void setMustPlaceRoad(bool _mustPlaceRoad){this->mustPlaceRoad = _mustPlaceRoad; };
        inline void setMustRoll(bool _mustRoll){this->mustRoll = _mustRoll; };
        inline void setMustMoveRobber(bool _mustMoveRobber){this->mustMoveRobber = _mustMoveRobber; };
        inline void setMustRespondToTrade(bool _mustRespondToTrade){this->mustRespondToTrade = _mustRespondToTrade; };
        inline void setMustEndTurn(bool _mustEndTurn){this->mustEndTurn = _mustEndTurn; };

};