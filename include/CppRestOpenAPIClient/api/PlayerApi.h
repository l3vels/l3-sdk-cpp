/**
 * L3vels Api
 * L3vels API for Game developers
 *
 * The version of the OpenAPI document: 0.3
 * Contact: support@l3vels.xyz
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PlayerApi.h
 *
 * 
 */

#ifndef API_PlayerApi_H_
#define API_PlayerApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/CreatePlayerInput.h"
#include "CppRestOpenAPIClient/model/Player.h"
#include "CppRestOpenAPIClient/model/PlayerAsset.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace api {

using namespace models;



class  PlayerApi 
{
public:

    explicit PlayerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~PlayerApi();

    /// <summary>
    /// Count players
    /// </summary>
    /// <remarks>
    /// Count players in game. Example: count players in game Call of Duty.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="gameId">Game Id</param>
    pplx::task<double> countPlayersByGameId(
        utility::string_t authorization,
        utility::string_t gameId
    ) const;
    /// <summary>
    /// Create new player
    /// </summary>
    /// <remarks>
    /// Create new player for Game. Example: Create new player Jack in game Call of Duty.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="createPlayerInput"></param>
    pplx::task<std::shared_ptr<Player>> createPlayer(
        utility::string_t authorization,
        std::shared_ptr<CreatePlayerInput> createPlayerInput
    ) const;
    /// <summary>
    /// Retrieve player asset by ID
    /// </summary>
    /// <remarks>
    /// Retrieve player asset by ID. Player asset represents a single asset that a player owns. It has amount field that represents how many of this asset player owns.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="id"></param>
    /// <param name="gameId"></param>
    pplx::task<std::shared_ptr<PlayerAsset>> getPlayerAssetById(
        utility::string_t authorization,
        utility::string_t id,
        utility::string_t gameId
    ) const;
    /// <summary>
    /// Retrieve player by ID
    /// </summary>
    /// <remarks>
    /// Retrieves a specific player by ID associated with Game. Example: retrieve player Jack from game Call of Duty.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="id">Player ID that you created in your Game. Example: Jack, George, etc.</param>
    /// <param name="gameId">Game ID to find asset in. Example: Call of Duty, Fortnite, etc.</param>
    pplx::task<std::shared_ptr<Player>> getPlayerById(
        utility::string_t authorization,
        utility::string_t id,
        utility::string_t gameId
    ) const;
    /// <summary>
    /// Retrieve players
    /// </summary>
    /// <remarks>
    /// Retrieve a list of players that match the specified filter criteria. Developers can use this method to retrieve players by name, category, status, or other properties. Example: Retrieve players from game Call of Duty.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="gameId">Game ID to find player in your game. Example: Fortnite, Minecraft, etc.</param>
    /// <param name="sort">Player field to sort by. You can sort by name, created_on and etc. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="order">Sort order (ASC for ascending or DESC for descending) (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchText">Search player by name (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit">Number of players to return per page (optional, default to 0.0)</param>
    /// <param name="page">Page number (optional, default to 0.0)</param>
    pplx::task<std::vector<std::shared_ptr<Player>>> getPlayers(
        utility::string_t authorization,
        utility::string_t gameId,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> order,
        boost::optional<utility::string_t> searchText,
        boost::optional<double> limit,
        boost::optional<double> page
    ) const;
    /// <summary>
    /// Retrieve player assets
    /// </summary>
    /// <remarks>
    /// This API method retrieves a list of Player assets that match the specified filter criteria. Developers can use this method to retrieve Player assets by player, Game or other properties.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="gameId">Game ID to find player assets in your game. Example: Fortnite, Minecraft, etc.</param>
    /// <param name="assetId">Game ID to find player assets in your game. Example: Fortnite, Minecraft, etc. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="playerId">Game ID to find player assets in your game. Example: Fortnite, Minecraft, etc. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="sort">Player asset field to sort by. You can sort by name, created_on and etc. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="order">Sort order (ASC for ascending or DESC for descending) (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit">Number of player assets to return per page (optional, default to 0.0)</param>
    /// <param name="page">Page number (optional, default to 0.0)</param>
    pplx::task<std::vector<std::shared_ptr<PlayerAsset>>> playerAssets(
        utility::string_t authorization,
        utility::string_t gameId,
        boost::optional<utility::string_t> assetId,
        boost::optional<utility::string_t> playerId,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> order,
        boost::optional<double> limit,
        boost::optional<double> page
    ) const;
    /// <summary>
    /// Update an existing Player
    /// </summary>
    /// <remarks>
    /// This API method allows developers to update an existing Player by providing the ID of the Player and the updated properties and associated assets.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    pplx::task<std::shared_ptr<Player>> updatePlayer(
        utility::string_t authorization
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}

#endif /* API_PlayerApi_H_ */

