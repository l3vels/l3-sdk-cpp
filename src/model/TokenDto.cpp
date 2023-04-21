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



#include "CppRestOpenAPIClient/model/TokenDto.h"

namespace models {



TokenDto::TokenDto()
{
    m_Token_id = 0.0;
    m_Token_idIsSet = false;
    m_Asset_id = utility::conversions::to_string_t("");
    m_Asset_idIsSet = false;
    m_Amount = 0.0;
    m_AmountIsSet = false;
}

TokenDto::~TokenDto()
{
}

void TokenDto::validate()
{
    // TODO: implement validation
}

web::json::value TokenDto::toJson() const
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

bool TokenDto::fromJson(const web::json::value& val)
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

void TokenDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool TokenDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

double TokenDto::getTokenId() const
{
    return m_Token_id;
}

void TokenDto::setTokenId(double value)
{
    m_Token_id = value;
    m_Token_idIsSet = true;
}

bool TokenDto::tokenIdIsSet() const
{
    return m_Token_idIsSet;
}

void TokenDto::unsetToken_id()
{
    m_Token_idIsSet = false;
}
utility::string_t TokenDto::getAssetId() const
{
    return m_Asset_id;
}

void TokenDto::setAssetId(const utility::string_t& value)
{
    m_Asset_id = value;
    m_Asset_idIsSet = true;
}

bool TokenDto::assetIdIsSet() const
{
    return m_Asset_idIsSet;
}

void TokenDto::unsetAsset_id()
{
    m_Asset_idIsSet = false;
}
double TokenDto::getAmount() const
{
    return m_Amount;
}

void TokenDto::setAmount(double value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}

bool TokenDto::amountIsSet() const
{
    return m_AmountIsSet;
}

void TokenDto::unsetAmount()
{
    m_AmountIsSet = false;
}
}


