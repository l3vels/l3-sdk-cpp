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



#include "CppRestOpenAPIClient/model/MintDto.h"

namespace models {



MintDto::MintDto()
{
    m_Contract_id = utility::conversions::to_string_t("");
    m_Contract_idIsSet = false;
    m_Project_id = utility::conversions::to_string_t("");
    m_Project_idIsSet = false;
    m_Collection_id = utility::conversions::to_string_t("");
    m_Collection_idIsSet = false;
    m_Player_address = utility::conversions::to_string_t("");
    m_Player_addressIsSet = false;
    m_Player_id = utility::conversions::to_string_t("");
    m_Player_idIsSet = false;
    m_AssetIsSet = false;
}

MintDto::~MintDto()
{
}

void MintDto::validate()
{
    // TODO: implement validation
}

web::json::value MintDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Contract_idIsSet)
    {
        val[utility::conversions::to_string_t(U("contract_id"))] = ModelBase::toJson(m_Contract_id);
    }
    if(m_Project_idIsSet)
    {
        val[utility::conversions::to_string_t(U("project_id"))] = ModelBase::toJson(m_Project_id);
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

bool MintDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("project_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("project_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setProjectId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProjectId);
            setProjectId(refVal_setProjectId);
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
            std::shared_ptr<MintDto_asset> refVal_setAsset;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAsset);
            setAsset(refVal_setAsset);
        }
    }
    return ok;
}

void MintDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Project_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("project_id")), m_Project_id));
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

bool MintDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("project_id"))))
    {
        utility::string_t refVal_setProjectId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("project_id"))), refVal_setProjectId );
        setProjectId(refVal_setProjectId);
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
        std::shared_ptr<MintDto_asset> refVal_setAsset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("asset"))), refVal_setAsset );
        setAsset(refVal_setAsset);
    }
    return ok;
}

utility::string_t MintDto::getContractId() const
{
    return m_Contract_id;
}

void MintDto::setContractId(const utility::string_t& value)
{
    m_Contract_id = value;
    m_Contract_idIsSet = true;
}

bool MintDto::contractIdIsSet() const
{
    return m_Contract_idIsSet;
}

void MintDto::unsetContract_id()
{
    m_Contract_idIsSet = false;
}
utility::string_t MintDto::getProjectId() const
{
    return m_Project_id;
}

void MintDto::setProjectId(const utility::string_t& value)
{
    m_Project_id = value;
    m_Project_idIsSet = true;
}

bool MintDto::projectIdIsSet() const
{
    return m_Project_idIsSet;
}

void MintDto::unsetProject_id()
{
    m_Project_idIsSet = false;
}
utility::string_t MintDto::getCollectionId() const
{
    return m_Collection_id;
}

void MintDto::setCollectionId(const utility::string_t& value)
{
    m_Collection_id = value;
    m_Collection_idIsSet = true;
}

bool MintDto::collectionIdIsSet() const
{
    return m_Collection_idIsSet;
}

void MintDto::unsetCollection_id()
{
    m_Collection_idIsSet = false;
}
utility::string_t MintDto::getPlayerAddress() const
{
    return m_Player_address;
}

void MintDto::setPlayerAddress(const utility::string_t& value)
{
    m_Player_address = value;
    m_Player_addressIsSet = true;
}

bool MintDto::playerAddressIsSet() const
{
    return m_Player_addressIsSet;
}

void MintDto::unsetPlayer_address()
{
    m_Player_addressIsSet = false;
}
utility::string_t MintDto::getPlayerId() const
{
    return m_Player_id;
}

void MintDto::setPlayerId(const utility::string_t& value)
{
    m_Player_id = value;
    m_Player_idIsSet = true;
}

bool MintDto::playerIdIsSet() const
{
    return m_Player_idIsSet;
}

void MintDto::unsetPlayer_id()
{
    m_Player_idIsSet = false;
}
std::shared_ptr<MintDto_asset> MintDto::getAsset() const
{
    return m_Asset;
}

void MintDto::setAsset(const std::shared_ptr<MintDto_asset>& value)
{
    m_Asset = value;
    m_AssetIsSet = true;
}

bool MintDto::assetIsSet() const
{
    return m_AssetIsSet;
}

void MintDto::unsetAsset()
{
    m_AssetIsSet = false;
}
}

