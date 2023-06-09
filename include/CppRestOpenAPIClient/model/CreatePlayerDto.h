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
 * CreatePlayerDto.h
 *
 * 
 */

#ifndef MODELS_CreatePlayerDto_H_
#define MODELS_CreatePlayerDto_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace models {


/// <summary>
/// 
/// </summary>
class  CreatePlayerDto
    : public ModelBase
{
public:
    CreatePlayerDto();
    virtual ~CreatePlayerDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreatePlayerDto members

    /// <summary>
    /// You can send your generated unique ID for player if it&#39;s handy for game. If field is empty, we will generate unique ID.
    /// </summary>
    utility::string_t getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetUnique_id();

    void setUniqueId(const utility::string_t& value);

    /// <summary>
    /// The name of the player.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// The username of the player.
    /// </summary>
    utility::string_t getUsername() const;
    bool usernameIsSet() const;
    void unsetUsername();

    void setUsername(const utility::string_t& value);

    /// <summary>
    /// The email of the player.
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();

    void setEmail(const utility::string_t& value);

    /// <summary>
    /// The image URL of the player avatar.
    /// </summary>
    utility::string_t getAvatar() const;
    bool avatarIsSet() const;
    void unsetAvatar();

    void setAvatar(const utility::string_t& value);

    /// <summary>
    /// Game/project ID to create the player for. Example: Create player Jack for game Fortnite.
    /// </summary>
    utility::string_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetProject_id();

    void setProjectId(const utility::string_t& value);

    /// <summary>
    /// Should create wallet for player or not.
    /// </summary>
    bool isIsCreateWallet() const;
    bool isCreateWalletIsSet() const;
    void unsetIs_create_wallet();

    void setIsCreateWallet(bool value);

    /// <summary>
    /// Custom props for player.
    /// </summary>
    std::vector<utility::string_t>& getCustomProps();
    bool customPropsIsSet() const;
    void unsetCustom_props();

    void setCustomProps(const std::vector<utility::string_t>& value);


protected:
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
    utility::string_t m_Project_id;
    bool m_Project_idIsSet;
    bool m_Is_create_wallet;
    bool m_Is_create_walletIsSet;
    std::vector<utility::string_t> m_Custom_props;
    bool m_Custom_propsIsSet;
};


}

#endif /* MODELS_CreatePlayerDto_H_ */
