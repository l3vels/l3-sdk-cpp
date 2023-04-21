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

#include "CppRestOpenAPIClient/model/Project.h"
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
    /// Retrieve Game
    /// </summary>
    /// <remarks>
    /// Get game/project by ID created on the platform.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple projects. Please include it in to use developers API.</param>
    /// <param name="id">Game or Project Id</param>
    pplx::task<std::shared_ptr<Project>> getGameById(
        utility::string_t authorization,
        utility::string_t id
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}

#endif /* API_GameApi_H_ */

