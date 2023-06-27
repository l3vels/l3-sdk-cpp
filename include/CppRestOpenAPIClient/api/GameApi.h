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
 * GameApi.h
 *
 * 
 */

#ifndef API_GameApi_H_
#define API_GameApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/Game.h"
#include "CppRestOpenAPIClient/Object.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace api {

using namespace models;



class  GameApi 
{
public:

    explicit GameApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~GameApi();

    /// <summary>
    /// Create Game
    /// </summary>
    /// <remarks>
    /// Create game on platform.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="body"></param>
    pplx::task<std::shared_ptr<Game>> createGame(
        utility::string_t authorization,
        std::shared_ptr<Object> body
    ) const;
    /// <summary>
    /// Retrieve all games
    /// </summary>
    /// <remarks>
    /// Retrieve all your games/games created on the platform. You can filter games by name, description. You can sort games by field
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="gameId">Game ID</param>
    /// <param name="sort">In which order to sort the results. Can be ASC for ascending or DESC for descending order (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="searchText">Filter by game name or description (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit">Number of players to return per page (optional, default to 0.0)</param>
    /// <param name="page">Page number (optional, default to 0.0)</param>
    pplx::task<std::shared_ptr<Game>> gameControllerGetGames(
        utility::string_t authorization,
        utility::string_t gameId,
        boost::optional<utility::string_t> sort,
        boost::optional<utility::string_t> searchText,
        boost::optional<double> limit,
        boost::optional<double> page
    ) const;
    /// <summary>
    /// Retrieve Game
    /// </summary>
    /// <remarks>
    /// Get Game by ID created on the platform.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="gameId">Game ID</param>
    pplx::task<std::shared_ptr<Game>> getGameById(
        utility::string_t authorization,
        utility::string_t gameId
    ) const;
    /// <summary>
    /// Retrieve Game By Name
    /// </summary>
    /// <remarks>
    /// Get Game by Name created on the platform.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="name"></param>
    pplx::task<std::shared_ptr<Game>> getGameByName(
        utility::string_t authorization,
        utility::string_t name
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}

#endif /* API_GameApi_H_ */

