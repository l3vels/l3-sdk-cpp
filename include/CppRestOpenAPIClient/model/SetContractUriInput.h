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
 * SetContractUriInput.h
 *
 * 
 */

#ifndef MODELS_SetContractUriInput_H_
#define MODELS_SetContractUriInput_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace models {


/// <summary>
/// 
/// </summary>
class  SetContractUriInput
    : public ModelBase
{
public:
    SetContractUriInput();
    virtual ~SetContractUriInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SetContractUriInput members

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
    /// Contract URI
    /// </summary>
    utility::string_t getContractUri() const;
    bool contractUriIsSet() const;
    void unsetContract_uri();

    void setContractUri(const utility::string_t& value);


protected:
    utility::string_t m_Game_id;
    bool m_Game_idIsSet;
    utility::string_t m_Collection_id;
    bool m_Collection_idIsSet;
    utility::string_t m_Contract_uri;
    bool m_Contract_uriIsSet;
};


}

#endif /* MODELS_SetContractUriInput_H_ */
