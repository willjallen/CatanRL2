
/**
 * @brief All possible action types a player may execute. (Priority action) indicates this action must be executed if the player has the ability; the rest are ignored. Actions are listed in order of priority.
 * INITIAL_PLACE_BUILDING: (Priority action) Start of the game only, place a building.
 * INITIAL_PLACE_ROAD: (Priority action) Start of the game only, place a road.
 * TRASH_CARD: (Priority action). Trash a card.
 * PLACE_SETTLEMENT: (Priority action) Place a purchased settlement
 * PLACE_ROAD: (Priority action) Place a purchased road.
 * ROLL: (Prority action) Roll the dice.
 * MOVE_ROBBER (Priority action) Move the robber to a new location
 * ACCEPT_TRADE/DENY_TRADE: (Priority action) 
 * PURCHASE_RESOURCE: Purchase a resource from the bank (4:1), or use a discounted port if available
 * PURCHASE_SETTLEMENT: Purchase a settlement
 * UPGRADE_SETTLEMENT: Upgrade a settlement to a city
 * PURCHASE_DEV_CARD: Purchase a development card
 * PLAY_DEV_CARD: Play a development card, only 1 per turn.
 * TRADE_WITH_PLAYER: Initial a trade with another player.
 * END_TURN. End the turn.
 * NO_OPERATION: Do nothing
 */
static enum ActionType{
                    INITIAL_PLACE_BUILDING,
                    INITIAL_PLACE_ROAD,
                    TRASH_CARD,
                    PLACE_SETTLEMENT,
                    PLACE_ROAD,
                    ROLL,
                    MOVE_ROBBER,
                    ACCEPT_TRADE,
                    DENY_TRADE,
                    PURHCASE_RESOURCE,
                    PURCHASE_SETTLEMENT,
                    UPGRADE_SETTLEMENT,
                    PURCHASE_DEV_CARD,
                    PLAY_DEV_CARD,
                    TRADE_WITH_PLAYER,
                    END_TURN,
                    NO_OPERATION
                };
