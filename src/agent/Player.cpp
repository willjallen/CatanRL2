#include "Player.h"

Player::Player(int _playerNum) : playerNum(_playerNum) {

    // Player attributes
    this->hasAnyHarbor = false;
    this->hasBrickHarbor = false;
    this->hasLumberHarbor = false;
    this->hasOreHarbor = false;
    this->hasGrainHarbor = false;
    this->hasWoolHarbor = false;

    // Init resource card values
    this->numBrickCards = 0;
    this->numLumberCards = 0;
    this->numOreCards = 0;
    this->numGrainCards = 0;
    this->numWoolCards = 0;

    // Init dev card values
    this->numKnightCards = 0;
    this->numYearOfPlentyCards = 0;
    this->numRoadBuildingCards = 0;
    this->numMonopolyCards = 0;
    this->numVictoryPointCards = 0;

    // Init initial game actions
    this->initialBuildingsLeft = 2;
    this->initialRoadsLeft = 2;
    
    // Initial game actions
    this->cardsLeftToTrash = 0;
    this->mustPlaceSettlement = false;
    this->mustPlaceRoad = false;
    this->mustRoll = false;
    this->mustMoveRobber = false;
    this->mustRespondToTrade = false;
    this->mustEndTurn = false;

}