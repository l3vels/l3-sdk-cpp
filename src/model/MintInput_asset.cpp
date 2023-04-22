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



#include "CppRestOpenAPIClient/model/MintInput_asset.h"

namespace models {



MintInput_asset::MintInput_asset()
{
    m_Token_id = 0.0;
    m_Token_idIsSet = false;
    m_Asset_id = utility::conversions::to_string_t("");
    m_Asset_idIsSet = false;
    m_Amount = 0.0;
    m_AmountIsSet = false;
}

MintInput_asset::~MintInput_asset()
{
}

void MintInput_asset::validate()
{
    // TODO: implement validation
}

web::json::value MintInput_asset::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Token_idIsSet)
    {
        val[utility::conversions::to_string_t(U("token_id"))] = ModelBase::toJson(m_Token_id);
    }
    if(m_Asset_idIsSet)
    {
        val[utility::conversions::to_string_t(U("asset_id"))] = ModelBase::toJson(m_Asset_id);
    }
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t(U("amount"))] = ModelBase::toJson(m_Amount);
    }

    return val;
}

bool MintInput_asset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("token_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("token_id")));
        if(!fieldValue.is_null())
        {
            double refVal_setTokenId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTokenId);
            setTokenId(refVal_setTokenId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("asset_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("asset_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAssetId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssetId);
            setAssetId(refVal_setAssetId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("amount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("amount")));
        if(!fieldValue.is_null())
        {
            double refVal_setAmount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAmount);
            setAmount(refVal_setAmount);
        }
    }
    return ok;
}

void MintInput_asset::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Token_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("token_id")), m_Token_id));
    }
    if(m_Asset_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("asset_id")), m_Asset_id));
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("amount")), m_Amount));
    }
}

bool MintInput_asset::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("token_id"))))
    {
        double refVal_setTokenId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("token_id"))), refVal_setTokenId );
        setTokenId(refVal_setTokenId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("asset_id"))))
    {
        utility::string_t refVal_setAssetId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("asset_id"))), refVal_setAssetId );
        setAssetId(refVal_setAssetId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("amount"))))
    {
        double refVal_setAmount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("amount"))), refVal_setAmount );
        setAmount(refVal_setAmount);
    }
    return ok;
}

double MintInput_asset::getTokenId() const
{
    return m_Token_id;
}

void MintInput_asset::setTokenId(double value)
{
    m_Token_id = value;
    m_Token_idIsSet = true;
}

bool MintInput_asset::tokenIdIsSet() const
{
    return m_Token_idIsSet;
}

void MintInput_asset::unsetToken_id()
{
    m_Token_idIsSet = false;
}
utility::string_t MintInput_asset::getAssetId() const
{
    return m_Asset_id;
}

void MintInput_asset::setAssetId(const utility::string_t& value)
{
    m_Asset_id = value;
    m_Asset_idIsSet = true;
}

bool MintInput_asset::assetIdIsSet() const
{
    return m_Asset_idIsSet;
}

void MintInput_asset::unsetAsset_id()
{
    m_Asset_idIsSet = false;
}
double MintInput_asset::getAmount() const
{
    return m_Amount;
}

void MintInput_asset::setAmount(double value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}

bool MintInput_asset::amountIsSet() const
{
    return m_AmountIsSet;
}

void MintInput_asset::unsetAmount()
{
    m_AmountIsSet = false;
}
}


