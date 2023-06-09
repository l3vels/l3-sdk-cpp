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



#include "CppRestOpenAPIClient/model/SetSaleStatusDto.h"

namespace models {



SetSaleStatusDto::SetSaleStatusDto()
{
    m_Project_id = utility::conversions::to_string_t("");
    m_Project_idIsSet = false;
    m_Collection_id = utility::conversions::to_string_t("");
    m_Collection_idIsSet = false;
    m_Sale_statusIsSet = false;
}

SetSaleStatusDto::~SetSaleStatusDto()
{
}

void SetSaleStatusDto::validate()
{
    // TODO: implement validation
}

web::json::value SetSaleStatusDto::toJson() const
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
    if(m_Sale_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("sale_status"))] = ModelBase::toJson(m_Sale_status);
    }

    return val;
}

bool SetSaleStatusDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("sale_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sale_status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setSaleStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSaleStatus);
            setSaleStatus(refVal_setSaleStatus);
        }
    }
    return ok;
}

void SetSaleStatusDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Sale_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sale_status")), m_Sale_status));
    }
}

bool SetSaleStatusDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("sale_status"))))
    {
        std::shared_ptr<Object> refVal_setSaleStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sale_status"))), refVal_setSaleStatus );
        setSaleStatus(refVal_setSaleStatus);
    }
    return ok;
}

utility::string_t SetSaleStatusDto::getProjectId() const
{
    return m_Project_id;
}

void SetSaleStatusDto::setProjectId(const utility::string_t& value)
{
    m_Project_id = value;
    m_Project_idIsSet = true;
}

bool SetSaleStatusDto::projectIdIsSet() const
{
    return m_Project_idIsSet;
}

void SetSaleStatusDto::unsetProject_id()
{
    m_Project_idIsSet = false;
}
utility::string_t SetSaleStatusDto::getCollectionId() const
{
    return m_Collection_id;
}

void SetSaleStatusDto::setCollectionId(const utility::string_t& value)
{
    m_Collection_id = value;
    m_Collection_idIsSet = true;
}

bool SetSaleStatusDto::collectionIdIsSet() const
{
    return m_Collection_idIsSet;
}

void SetSaleStatusDto::unsetCollection_id()
{
    m_Collection_idIsSet = false;
}
std::shared_ptr<Object> SetSaleStatusDto::getSaleStatus() const
{
    return m_Sale_status;
}

void SetSaleStatusDto::setSaleStatus(const std::shared_ptr<Object>& value)
{
    m_Sale_status = value;
    m_Sale_statusIsSet = true;
}

bool SetSaleStatusDto::saleStatusIsSet() const
{
    return m_Sale_statusIsSet;
}

void SetSaleStatusDto::unsetSale_status()
{
    m_Sale_statusIsSet = false;
}
}


