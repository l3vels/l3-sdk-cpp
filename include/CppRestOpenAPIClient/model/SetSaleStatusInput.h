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
 * SetSaleStatusInput.h
 *
 * 
 */

#ifndef MODELS_SetSaleStatusInput_H_
#define MODELS_SetSaleStatusInput_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"

namespace models {


/// <summary>
/// 
/// </summary>
class  SetSaleStatusInput
    : public ModelBase
{
public:
    SetSaleStatusInput();
    virtual ~SetSaleStatusInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SetSaleStatusInput members

    /// <summary>
    /// Game Id
    /// </summary>
    utility::string_t getGameId() const;
    bool gameIdIsSet() const;
    void unsetGame_id();

    void setGameId(const utility::string_t& value);

    /// <summary>
    /// Collection Id
    /// </summary>
    utility::string_t getCollectionId() const;
    bool collectionIdIsSet() const;
    void unsetCollection_id();

    void setCollectionId(const utility::string_t& value);

    /// <summary>
    /// Sale Status of the contract
    /// </summary>
    std::shared_ptr<Object> getSaleStatus() const;
    bool saleStatusIsSet() const;
    void unsetSale_status();

    void setSaleStatus(const std::shared_ptr<Object>& value);


protected:
    utility::string_t m_Game_id;
    bool m_Game_idIsSet;
    utility::string_t m_Collection_id;
    bool m_Collection_idIsSet;
    std::shared_ptr<Object> m_Sale_status;
    bool m_Sale_statusIsSet;
};


}

#endif /* MODELS_SetSaleStatusInput_H_ */
