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
 * ContractApi.h
 *
 * 
 */

#ifndef API_ContractApi_H_
#define API_ContractApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/SetContractUriInput.h"
#include "CppRestOpenAPIClient/model/SetSaleStatusInput.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace api {

using namespace models;



class  ContractApi 
{
public:

    explicit ContractApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ContractApi();

    /// <summary>
    /// Collection size
    /// </summary>
    /// <remarks>
    /// Count total contract in game.
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="collectionId"></param>
    /// <param name="gameId"></param>
    pplx::task<void> countContractsByGameId(
        utility::string_t authorization,
        utility::string_t collectionId,
        utility::string_t gameId
    ) const;
    /// <summary>
    /// Get Contract URI
    /// </summary>
    /// <remarks>
    /// Gets contract uri of contract
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="collectionId"></param>
    /// <param name="gameId"></param>
    pplx::task<void> getContractURI(
        utility::string_t authorization,
        utility::string_t collectionId,
        utility::string_t gameId
    ) const;
    /// <summary>
    /// Update Contract URI
    /// </summary>
    /// <remarks>
    /// Update Contract URI
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="setContractUriInput"></param>
    pplx::task<void> setContractURI(
        utility::string_t authorization,
        std::shared_ptr<SetContractUriInput> setContractUriInput
    ) const;
    /// <summary>
    /// Update Sale status
    /// </summary>
    /// <remarks>
    /// Update Sale status to PAUSED, PRE_SALE or PUBLIC
    /// </remarks>
    /// <param name="authorization">API key is associated with multiple games. Please include it in to use developers API.</param>
    /// <param name="setSaleStatusInput"></param>
    pplx::task<void> updateSaleStatus(
        utility::string_t authorization,
        std::shared_ptr<SetSaleStatusInput> setSaleStatusInput
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}

#endif /* API_ContractApi_H_ */

