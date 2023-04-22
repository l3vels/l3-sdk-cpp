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
 * Player.h
 *
 * 
 */

#ifndef MODELS_Player_H_
#define MODELS_Player_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"

namespace models {


/// <summary>
/// 
/// </summary>
class  Player
    : public ModelBase
{
public:
    Player();
    virtual ~Player();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Player members

    /// <summary>
    /// The unique identifier for the Player entity.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Player that can be provided by customers or generated by us.
    /// </summary>
    utility::string_t getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetUnique_id();

    void setUniqueId(const utility::string_t& value);

    /// <summary>
    /// The name of the player
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Username of the player
    /// </summary>
    utility::string_t getUsername() const;
    bool usernameIsSet() const;
    void unsetUsername();

    void setUsername(const utility::string_t& value);

    /// <summary>
    /// Email of the player
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();

    void setEmail(const utility::string_t& value);

    /// <summary>
    /// Avatar URL of the player
    /// </summary>
    utility::string_t getAvatar() const;
    bool avatarIsSet() const;
    void unsetAvatar();

    void setAvatar(const utility::string_t& value);

    /// <summary>
    /// Custom props for player
    /// </summary>
    std::shared_ptr<Object> getCustomProps() const;
    bool customPropsIsSet() const;
    void unsetCustom_props();

    void setCustomProps(const std::shared_ptr<Object>& value);

    /// <summary>
    /// The date when player was active last time
    /// </summary>
    utility::datetime getLastSeen() const;
    bool lastSeenIsSet() const;
    void unsetLast_seen();

    void setLastSeen(const utility::datetime& value);

    /// <summary>
    /// The unique identifier of the account that the Player belongs to.
    /// </summary>
    utility::string_t getAccountId() const;
    bool accountIdIsSet() const;
    void unsetAccount_id();

    void setAccountId(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of the game that the Player is associated with. This allows developers to organize their players by game and helps with tracking and reporting. Example: Player Jack is associated with game Fortnite.
    /// </summary>
    utility::string_t getGameId() const;
    bool gameIdIsSet() const;
    void unsetGame_id();

    void setGameId(const utility::string_t& value);

    /// <summary>
    /// The date when the player was created.
    /// </summary>
    utility::datetime getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetCreated_on();

    void setCreatedOn(const utility::datetime& value);

    /// <summary>
    /// The date when the player was last modified.
    /// </summary>
    utility::datetime getModifiedOn() const;
    bool modifiedOnIsSet() const;
    void unsetModified_on();

    void setModifiedOn(const utility::datetime& value);

    /// <summary>
    /// The Id of the user who created the player.
    /// </summary>
    utility::string_t getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetCreated_by();

    void setCreatedBy(const utility::string_t& value);

    /// <summary>
    /// The Id of the user who last modified the player.
    /// </summary>
    utility::string_t getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetModified_by();

    void setModifiedBy(const utility::string_t& value);

    /// <summary>
    /// Boolean value indicating whether the player has wallet or not
    /// </summary>
    bool isIsCreateWallet() const;
    bool isCreateWalletIsSet() const;
    void unsetIs_create_wallet();

    void setIsCreateWallet(bool value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Unique_id;
    bool m_Unique_idIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Username;
    bool m_UsernameIsSet;
    utility::string_t m_Email;
    bool m_EmailIsSet;
    utility::string_t m_Avatar;
    bool m_AvatarIsSet;
    std::shared_ptr<Object> m_Custom_props;
    bool m_Custom_propsIsSet;
    utility::datetime m_Last_seen;
    bool m_Last_seenIsSet;
    utility::string_t m_Account_id;
    bool m_Account_idIsSet;
    utility::string_t m_Game_id;
    bool m_Game_idIsSet;
    utility::datetime m_Created_on;
    bool m_Created_onIsSet;
    utility::datetime m_Modified_on;
    bool m_Modified_onIsSet;
    utility::string_t m_Created_by;
    bool m_Created_byIsSet;
    utility::string_t m_Modified_by;
    bool m_Modified_byIsSet;
    bool m_Is_create_wallet;
    bool m_Is_create_walletIsSet;
};


}

#endif /* MODELS_Player_H_ */
