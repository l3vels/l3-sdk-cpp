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



#include "CppRestOpenAPIClient/model/MintInput.h"

namespace models {



MintInput::MintInput()
{
    m_Contract_id = utility::conversions::to_string_t("");
    m_Contract_idIsSet = false;
    m_Game_id = utility::conversions::to_string_t("");
    m_Game_idIsSet = false;
    m_Collection_id = utility::conversions::to_string_t("");
    m_Collection_idIsSet = false;
    m_Player_address = utility::conversions::to_string_t("");
    m_Player_addressIsSet = false;
    m_Player_id = utility::conversions::to_string_t("");
    m_Player_idIsSet = false;
    m_AssetIsSet = false;
}

MintInput::~MintInput()
{
}

void MintInput::validate()
{
    // TODO: implement validation
}

web::json::value MintInput::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Contract_idIsSet)
    {
        val[utility::conversions::to_string_t(U("contract_id"))] = ModelBase::toJson(m_Contract_id);
    }
    if(m_Game_idIsSet)
    {
        val[utility::conversions::to_string_t(U("game_id"))] = ModelBase::toJson(m_Game_id);
    }
    if(m_Collection_idIsSet)
    {
        val[utility::conversions::to_string_t(U("collection_id"))] = ModelBase::toJson(m_Collection_id);
    }
    if(m_Player_addressIsSet)
    {
        val[utility::conversions::to_string_t(U("player_address"))] = ModelBase::toJson(m_Player_address);
    }
    if(m_Player_idIsSet)
    {
        val[utility::conversions::to_string_t(U("player_id"))] = ModelBase::toJson(m_Player_id);
    }
    if(m_AssetIsSet)
    {
        val[utility::conversions::to_string_t(U("asset"))] = ModelBase::toJson(m_Asset);
    }

    return val;
}

bool MintInput::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("contract_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contract_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContractId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContractId);
            setContractId(refVal_setContractId);
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
    if(val.has_field(utility::conversions::to_string_t(U("collection_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("collection_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCollectionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCollectionId);
            setCollectionId(refVal_setCollectionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("player_address"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("player_address")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlayerAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayerAddress);
            setPlayerAddress(refVal_setPlayerAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("player_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("player_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlayerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayerId);
            setPlayerId(refVal_setPlayerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("asset"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("asset")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MintInput_asset> refVal_setAsset;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAsset);
            setAsset(refVal_setAsset);
        }
    }
    return ok;
}

void MintInput::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Contract_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contract_id")), m_Contract_id));
    }
    if(m_Game_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("game_id")), m_Game_id));
    }
    if(m_Collection_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collection_id")), m_Collection_id));
    }
    if(m_Player_addressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("player_address")), m_Player_address));
    }
    if(m_Player_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("player_id")), m_Player_id));
    }
    if(m_AssetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("asset")), m_Asset));
    }
}

bool MintInput::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("contract_id"))))
    {
        utility::string_t refVal_setContractId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contract_id"))), refVal_setContractId );
        setContractId(refVal_setContractId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("game_id"))))
    {
        utility::string_t refVal_setGameId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("game_id"))), refVal_setGameId );
        setGameId(refVal_setGameId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collection_id"))))
    {
        utility::string_t refVal_setCollectionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collection_id"))), refVal_setCollectionId );
        setCollectionId(refVal_setCollectionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("player_address"))))
    {
        utility::string_t refVal_setPlayerAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("player_address"))), refVal_setPlayerAddress );
        setPlayerAddress(refVal_setPlayerAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("player_id"))))
    {
        utility::string_t refVal_setPlayerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("player_id"))), refVal_setPlayerId );
        setPlayerId(refVal_setPlayerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("asset"))))
    {
        std::shared_ptr<MintInput_asset> refVal_setAsset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("asset"))), refVal_setAsset );
        setAsset(refVal_setAsset);
    }
    return ok;
}

utility::string_t MintInput::getContractId() const
{
    return m_Contract_id;
}

void MintInput::setContractId(const utility::string_t& value)
{
    m_Contract_id = value;
    m_Contract_idIsSet = true;
}

bool MintInput::contractIdIsSet() const
{
    return m_Contract_idIsSet;
}

void MintInput::unsetContract_id()
{
    m_Contract_idIsSet = false;
}
utility::string_t MintInput::getGameId() const
{
    return m_Game_id;
}

void MintInput::setGameId(const utility::string_t& value)
{
    m_Game_id = value;
    m_Game_idIsSet = true;
}

bool MintInput::gameIdIsSet() const
{
    return m_Game_idIsSet;
}

void MintInput::unsetGame_id()
{
    m_Game_idIsSet = false;
}
utility::string_t MintInput::getCollectionId() const
{
    return m_Collection_id;
}

void MintInput::setCollectionId(const utility::string_t& value)
{
    m_Collection_id = value;
    m_Collection_idIsSet = true;
}

bool MintInput::collectionIdIsSet() const
{
    return m_Collection_idIsSet;
}

void MintInput::unsetCollection_id()
{
    m_Collection_idIsSet = false;
}
utility::string_t MintInput::getPlayerAddress() const
{
    return m_Player_address;
}

void MintInput::setPlayerAddress(const utility::string_t& value)
{
    m_Player_address = value;
    m_Player_addressIsSet = true;
}

bool MintInput::playerAddressIsSet() const
{
    return m_Player_addressIsSet;
}

void MintInput::unsetPlayer_address()
{
    m_Player_addressIsSet = false;
}
utility::string_t MintInput::getPlayerId() const
{
    return m_Player_id;
}

void MintInput::setPlayerId(const utility::string_t& value)
{
    m_Player_id = value;
    m_Player_idIsSet = true;
}

bool MintInput::playerIdIsSet() const
{
    return m_Player_idIsSet;
}

void MintInput::unsetPlayer_id()
{
    m_Player_idIsSet = false;
}
std::shared_ptr<MintInput_asset> MintInput::getAsset() const
{
    return m_Asset;
}

void MintInput::setAsset(const std::shared_ptr<MintInput_asset>& value)
{
    m_Asset = value;
    m_AssetIsSet = true;
}

bool MintInput::assetIsSet() const
{
    return m_AssetIsSet;
}

void MintInput::unsetAsset()
{
    m_AssetIsSet = false;
}
}


