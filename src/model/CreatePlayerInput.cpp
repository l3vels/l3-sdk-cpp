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



#include "CppRestOpenAPIClient/model/CreatePlayerInput.h"

namespace models {



CreatePlayerInput::CreatePlayerInput()
{
    m_Unique_id = utility::conversions::to_string_t("");
    m_Unique_idIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_Avatar = utility::conversions::to_string_t("");
    m_AvatarIsSet = false;
    m_Game_id = utility::conversions::to_string_t("");
    m_Game_idIsSet = false;
    m_Is_create_wallet = false;
    m_Is_create_walletIsSet = false;
    m_Custom_propsIsSet = false;
}

CreatePlayerInput::~CreatePlayerInput()
{
}

void CreatePlayerInput::validate()
{
    // TODO: implement validation
}

web::json::value CreatePlayerInput::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Unique_idIsSet)
    {
        val[utility::conversions::to_string_t(U("unique_id"))] = ModelBase::toJson(m_Unique_id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_Username);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t(U("email"))] = ModelBase::toJson(m_Email);
    }
    if(m_AvatarIsSet)
    {
        val[utility::conversions::to_string_t(U("avatar"))] = ModelBase::toJson(m_Avatar);
    }
    if(m_Game_idIsSet)
    {
        val[utility::conversions::to_string_t(U("game_id"))] = ModelBase::toJson(m_Game_id);
    }
    if(m_Is_create_walletIsSet)
    {
        val[utility::conversions::to_string_t(U("is_create_wallet"))] = ModelBase::toJson(m_Is_create_wallet);
    }
    if(m_Custom_propsIsSet)
    {
        val[utility::conversions::to_string_t(U("custom_props"))] = ModelBase::toJson(m_Custom_props);
    }

    return val;
}

bool CreatePlayerInput::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("unique_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("unique_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUniqueId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUniqueId);
            setUniqueId(refVal_setUniqueId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("username"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("username")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsername);
            setUsername(refVal_setUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("email"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("email")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmail);
            setEmail(refVal_setEmail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("avatar"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("avatar")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAvatar;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAvatar);
            setAvatar(refVal_setAvatar);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("game_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("game_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGameId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGameId);
            setGameId(refVal_setGameId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_create_wallet"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_create_wallet")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsCreateWallet;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsCreateWallet);
            setIsCreateWallet(refVal_setIsCreateWallet);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("custom_props"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("custom_props")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCustomProps;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCustomProps);
            setCustomProps(refVal_setCustomProps);
        }
    }
    return ok;
}

void CreatePlayerInput::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Unique_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("unique_id")), m_Unique_id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_Username));
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("email")), m_Email));
    }
    if(m_AvatarIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("avatar")), m_Avatar));
    }
    if(m_Game_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("game_id")), m_Game_id));
    }
    if(m_Is_create_walletIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_create_wallet")), m_Is_create_wallet));
    }
    if(m_Custom_propsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("custom_props")), m_Custom_props));
    }
}

bool CreatePlayerInput::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("unique_id"))))
    {
        utility::string_t refVal_setUniqueId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("unique_id"))), refVal_setUniqueId );
        setUniqueId(refVal_setUniqueId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("username"))))
    {
        utility::string_t refVal_setUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("username"))), refVal_setUsername );
        setUsername(refVal_setUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("email"))))
    {
        utility::string_t refVal_setEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("email"))), refVal_setEmail );
        setEmail(refVal_setEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("avatar"))))
    {
        utility::string_t refVal_setAvatar;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("avatar"))), refVal_setAvatar );
        setAvatar(refVal_setAvatar);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("game_id"))))
    {
        utility::string_t refVal_setGameId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("game_id"))), refVal_setGameId );
        setGameId(refVal_setGameId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_create_wallet"))))
    {
        bool refVal_setIsCreateWallet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_create_wallet"))), refVal_setIsCreateWallet );
        setIsCreateWallet(refVal_setIsCreateWallet);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("custom_props"))))
    {
        std::vector<utility::string_t> refVal_setCustomProps;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("custom_props"))), refVal_setCustomProps );
        setCustomProps(refVal_setCustomProps);
    }
    return ok;
}

utility::string_t CreatePlayerInput::getUniqueId() const
{
    return m_Unique_id;
}

void CreatePlayerInput::setUniqueId(const utility::string_t& value)
{
    m_Unique_id = value;
    m_Unique_idIsSet = true;
}

bool CreatePlayerInput::uniqueIdIsSet() const
{
    return m_Unique_idIsSet;
}

void CreatePlayerInput::unsetUnique_id()
{
    m_Unique_idIsSet = false;
}
utility::string_t CreatePlayerInput::getName() const
{
    return m_Name;
}

void CreatePlayerInput::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CreatePlayerInput::nameIsSet() const
{
    return m_NameIsSet;
}

void CreatePlayerInput::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t CreatePlayerInput::getUsername() const
{
    return m_Username;
}

void CreatePlayerInput::setUsername(const utility::string_t& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}

bool CreatePlayerInput::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void CreatePlayerInput::unsetUsername()
{
    m_UsernameIsSet = false;
}
utility::string_t CreatePlayerInput::getEmail() const
{
    return m_Email;
}

void CreatePlayerInput::setEmail(const utility::string_t& value)
{
    m_Email = value;
    m_EmailIsSet = true;
}

bool CreatePlayerInput::emailIsSet() const
{
    return m_EmailIsSet;
}

void CreatePlayerInput::unsetEmail()
{
    m_EmailIsSet = false;
}
utility::string_t CreatePlayerInput::getAvatar() const
{
    return m_Avatar;
}

void CreatePlayerInput::setAvatar(const utility::string_t& value)
{
    m_Avatar = value;
    m_AvatarIsSet = true;
}

bool CreatePlayerInput::avatarIsSet() const
{
    return m_AvatarIsSet;
}

void CreatePlayerInput::unsetAvatar()
{
    m_AvatarIsSet = false;
}
utility::string_t CreatePlayerInput::getGameId() const
{
    return m_Game_id;
}

void CreatePlayerInput::setGameId(const utility::string_t& value)
{
    m_Game_id = value;
    m_Game_idIsSet = true;
}

bool CreatePlayerInput::gameIdIsSet() const
{
    return m_Game_idIsSet;
}

void CreatePlayerInput::unsetGame_id()
{
    m_Game_idIsSet = false;
}
bool CreatePlayerInput::isIsCreateWallet() const
{
    return m_Is_create_wallet;
}

void CreatePlayerInput::setIsCreateWallet(bool value)
{
    m_Is_create_wallet = value;
    m_Is_create_walletIsSet = true;
}

bool CreatePlayerInput::isCreateWalletIsSet() const
{
    return m_Is_create_walletIsSet;
}

void CreatePlayerInput::unsetIs_create_wallet()
{
    m_Is_create_walletIsSet = false;
}
std::vector<utility::string_t>& CreatePlayerInput::getCustomProps()
{
    return m_Custom_props;
}

void CreatePlayerInput::setCustomProps(const std::vector<utility::string_t>& value)
{
    m_Custom_props = value;
    m_Custom_propsIsSet = true;
}

bool CreatePlayerInput::customPropsIsSet() const
{
    return m_Custom_propsIsSet;
}

void CreatePlayerInput::unsetCustom_props()
{
    m_Custom_propsIsSet = false;
}
}


