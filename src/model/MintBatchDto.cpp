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



#include "CppRestOpenAPIClient/model/MintBatchDto.h"

namespace models {



MintBatchDto::MintBatchDto()
{
    m_Project_id = utility::conversions::to_string_t("");
    m_Project_idIsSet = false;
    m_Collection_id = utility::conversions::to_string_t("");
    m_Collection_idIsSet = false;
    m_Player_address = utility::conversions::to_string_t("");
    m_Player_addressIsSet = false;
    m_Player_id = utility::conversions::to_string_t("");
    m_Player_idIsSet = false;
    m_AssetsIsSet = false;
}

MintBatchDto::~MintBatchDto()
{
}

void MintBatchDto::validate()
{
    // TODO: implement validation
}

web::json::value MintBatchDto::toJson() const
{

    web::json::value val = web::json::value::object();
    
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
    if(m_AssetsIsSet)
    {
        val[utility::conversions::to_string_t(U("assets"))] = ModelBase::toJson(m_Assets);
    }

    return val;
}

bool MintBatchDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("assets"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("assets")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAssets;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssets);
            setAssets(refVal_setAssets);
        }
    }
    return ok;
}

void MintBatchDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    if(m_AssetsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("assets")), m_Assets));
    }
}

bool MintBatchDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("assets"))))
    {
        std::vector<utility::string_t> refVal_setAssets;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("assets"))), refVal_setAssets );
        setAssets(refVal_setAssets);
    }
    return ok;
}

utility::string_t MintBatchDto::getProjectId() const
{
    return m_Project_id;
}

void MintBatchDto::setProjectId(const utility::string_t& value)
{
    m_Project_id = value;
    m_Project_idIsSet = true;
}

bool MintBatchDto::projectIdIsSet() const
{
    return m_Project_idIsSet;
}

void MintBatchDto::unsetProject_id()
{
    m_Project_idIsSet = false;
}
utility::string_t MintBatchDto::getCollectionId() const
{
    return m_Collection_id;
}

void MintBatchDto::setCollectionId(const utility::string_t& value)
{
    m_Collection_id = value;
    m_Collection_idIsSet = true;
}

bool MintBatchDto::collectionIdIsSet() const
{
    return m_Collection_idIsSet;
}

void MintBatchDto::unsetCollection_id()
{
    m_Collection_idIsSet = false;
}
utility::string_t MintBatchDto::getPlayerAddress() const
{
    return m_Player_address;
}

void MintBatchDto::setPlayerAddress(const utility::string_t& value)
{
    m_Player_address = value;
    m_Player_addressIsSet = true;
}

bool MintBatchDto::playerAddressIsSet() const
{
    return m_Player_addressIsSet;
}

void MintBatchDto::unsetPlayer_address()
{
    m_Player_addressIsSet = false;
}
utility::string_t MintBatchDto::getPlayerId() const
{
    return m_Player_id;
}

void MintBatchDto::setPlayerId(const utility::string_t& value)
{
    m_Player_id = value;
    m_Player_idIsSet = true;
}

bool MintBatchDto::playerIdIsSet() const
{
    return m_Player_idIsSet;
}

void MintBatchDto::unsetPlayer_id()
{
    m_Player_idIsSet = false;
}
std::vector<utility::string_t>& MintBatchDto::getAssets()
{
    return m_Assets;
}

void MintBatchDto::setAssets(const std::vector<utility::string_t>& value)
{
    m_Assets = value;
    m_AssetsIsSet = true;
}

bool MintBatchDto::assetsIsSet() const
{
    return m_AssetsIsSet;
}

void MintBatchDto::unsetAssets()
{
    m_AssetsIsSet = false;
}
}

