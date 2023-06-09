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
 * TokenDto.h
 *
 * 
 */

#ifndef MODELS_TokenDto_H_
#define MODELS_TokenDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace models {


/// <summary>
/// 
/// </summary>
class  TokenDto
    : public ModelBase
{
public:
    TokenDto();
    virtual ~TokenDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TokenDto members

    /// <summary>
    /// Token ID to mint. You can provide this or asset_id
    /// </summary>
    double getTokenId() const;
    bool tokenIdIsSet() const;
    void unsetToken_id();

    void setTokenId(double value);

    /// <summary>
    /// Asset ID to mint. You can provide this or token_id
    /// </summary>
    utility::string_t getAssetId() const;
    bool assetIdIsSet() const;
    void unsetAsset_id();

    void setAssetId(const utility::string_t& value);

    /// <summary>
    /// Amount to mint
    /// </summary>
    double getAmount() const;
    bool amountIsSet() const;
    void unsetAmount();

    void setAmount(double value);


protected:
    double m_Token_id;
    bool m_Token_idIsSet;
    utility::string_t m_Asset_id;
    bool m_Asset_idIsSet;
    double m_Amount;
    bool m_AmountIsSet;
};


}

#endif /* MODELS_TokenDto_H_ */
