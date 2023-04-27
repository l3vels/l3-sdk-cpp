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
 * MintInput.h
 *
 * 
 */

#ifndef MODELS_MintInput_H_
#define MODELS_MintInput_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/MintInput_asset.h"

namespace models {

class MintInput_asset;

/// <summary>
/// 
/// </summary>
class  MintInput
    : public ModelBase
{
public:
    MintInput();
    virtual ~MintInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MintInput members

    /// <summary>
    /// Game ID. Example: Call of Duty
    /// </summary>
    utility::string_t getGameId() const;
    bool gameIdIsSet() const;
    void unsetGame_id();

    void setGameId(const utility::string_t& value);

    /// <summary>
    /// Collection ID to use. Example: Characters, Weapons, etc.
    /// </summary>
    utility::string_t getCollectionId() const;
    bool collectionIdIsSet() const;
    void unsetCollection_id();

    void setCollectionId(const utility::string_t& value);

    /// <summary>
    /// Player address to mint token to. You can provide player ID or player address
    /// </summary>
    utility::string_t getPlayerAddress() const;
    bool playerAddressIsSet() const;
    void unsetPlayer_address();

    void setPlayerAddress(const utility::string_t& value);

    /// <summary>
    /// Player ID to mint to. You can provide player ID or player address
    /// </summary>
    utility::string_t getPlayerId() const;
    bool playerIdIsSet() const;
    void unsetPlayer_id();

    void setPlayerId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MintInput_asset> getAsset() const;
    bool assetIsSet() const;
    void unsetAsset();

    void setAsset(const std::shared_ptr<MintInput_asset>& value);


protected:
    utility::string_t m_Game_id;
    bool m_Game_idIsSet;
    utility::string_t m_Collection_id;
    bool m_Collection_idIsSet;
    utility::string_t m_Player_address;
    bool m_Player_addressIsSet;
    utility::string_t m_Player_id;
    bool m_Player_idIsSet;
    std::shared_ptr<MintInput_asset> m_Asset;
    bool m_AssetIsSet;
};


}

#endif /* MODELS_MintInput_H_ */
