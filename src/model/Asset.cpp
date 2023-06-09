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



#include "CppRestOpenAPIClient/model/Asset.h"

namespace models {



Asset::Asset()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Token_id = 0.0;
    m_Token_idIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Parent_id = utility::conversions::to_string_t("");
    m_Parent_idIsSet = false;
    m_PropertiesIsSet = false;
    m_AttributesIsSet = false;
    m_AchievementsIsSet = false;
    m_RewardsIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Price = 0.0;
    m_PriceIsSet = false;
    m_Supply = 0.0;
    m_SupplyIsSet = false;
    m_Minted_amount = 0.0;
    m_Minted_amountIsSet = false;
    m_Asset_type = utility::conversions::to_string_t("");
    m_Asset_typeIsSet = false;
    m_Asset_url = utility::conversions::to_string_t("");
    m_Asset_urlIsSet = false;
    m_MediasIsSet = false;
    m_Main_media = utility::conversions::to_string_t("");
    m_Main_mediaIsSet = false;
    m_Account_id = utility::conversions::to_string_t("");
    m_Account_idIsSet = false;
    m_Game_id = utility::conversions::to_string_t("");
    m_Game_idIsSet = false;
    m_Collection_id = utility::conversions::to_string_t("");
    m_Collection_idIsSet = false;
    m_Created_on = utility::datetime();
    m_Created_onIsSet = false;
    m_Modified_on = utility::datetime();
    m_Modified_onIsSet = false;
    m_Created_by = utility::conversions::to_string_t("");
    m_Created_byIsSet = false;
    m_Modified_by = utility::conversions::to_string_t("");
    m_Modified_byIsSet = false;
}

Asset::~Asset()
{
}

void Asset::validate()
{
    // TODO: implement validation
}

web::json::value Asset::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Token_idIsSet)
    {
        val[utility::conversions::to_string_t(U("token_id"))] = ModelBase::toJson(m_Token_id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_Parent_idIsSet)
    {
        val[utility::conversions::to_string_t(U("parent_id"))] = ModelBase::toJson(m_Parent_id);
    }
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t(U("properties"))] = ModelBase::toJson(m_Properties);
    }
    if(m_AttributesIsSet)
    {
        val[utility::conversions::to_string_t(U("attributes"))] = ModelBase::toJson(m_Attributes);
    }
    if(m_AchievementsIsSet)
    {
        val[utility::conversions::to_string_t(U("achievements"))] = ModelBase::toJson(m_Achievements);
    }
    if(m_RewardsIsSet)
    {
        val[utility::conversions::to_string_t(U("rewards"))] = ModelBase::toJson(m_Rewards);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_PriceIsSet)
    {
        val[utility::conversions::to_string_t(U("price"))] = ModelBase::toJson(m_Price);
    }
    if(m_SupplyIsSet)
    {
        val[utility::conversions::to_string_t(U("supply"))] = ModelBase::toJson(m_Supply);
    }
    if(m_Minted_amountIsSet)
    {
        val[utility::conversions::to_string_t(U("minted_amount"))] = ModelBase::toJson(m_Minted_amount);
    }
    if(m_Asset_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("asset_type"))] = ModelBase::toJson(m_Asset_type);
    }
    if(m_Asset_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("asset_url"))] = ModelBase::toJson(m_Asset_url);
    }
    if(m_MediasIsSet)
    {
        val[utility::conversions::to_string_t(U("medias"))] = ModelBase::toJson(m_Medias);
    }
    if(m_Main_mediaIsSet)
    {
        val[utility::conversions::to_string_t(U("main_media"))] = ModelBase::toJson(m_Main_media);
    }
    if(m_Account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("account_id"))] = ModelBase::toJson(m_Account_id);
    }
    if(m_Game_idIsSet)
    {
        val[utility::conversions::to_string_t(U("game_id"))] = ModelBase::toJson(m_Game_id);
    }
    if(m_Collection_idIsSet)
    {
        val[utility::conversions::to_string_t(U("collection_id"))] = ModelBase::toJson(m_Collection_id);
    }
    if(m_Created_onIsSet)
    {
        val[utility::conversions::to_string_t(U("created_on"))] = ModelBase::toJson(m_Created_on);
    }
    if(m_Modified_onIsSet)
    {
        val[utility::conversions::to_string_t(U("modified_on"))] = ModelBase::toJson(m_Modified_on);
    }
    if(m_Created_byIsSet)
    {
        val[utility::conversions::to_string_t(U("created_by"))] = ModelBase::toJson(m_Created_by);
    }
    if(m_Modified_byIsSet)
    {
        val[utility::conversions::to_string_t(U("modified_by"))] = ModelBase::toJson(m_Modified_by);
    }

    return val;
}

bool Asset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("parent_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("parent_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParentId);
            setParentId(refVal_setParentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("properties"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("properties")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setProperties;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProperties);
            setProperties(refVal_setProperties);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("attributes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("attributes")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setAttributes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAttributes);
            setAttributes(refVal_setAttributes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("achievements"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("achievements")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setAchievements;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAchievements);
            setAchievements(refVal_setAchievements);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("rewards"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rewards")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setRewards;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRewards);
            setRewards(refVal_setRewards);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("price"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("price")));
        if(!fieldValue.is_null())
        {
            double refVal_setPrice;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPrice);
            setPrice(refVal_setPrice);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("supply"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("supply")));
        if(!fieldValue.is_null())
        {
            double refVal_setSupply;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSupply);
            setSupply(refVal_setSupply);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minted_amount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minted_amount")));
        if(!fieldValue.is_null())
        {
            double refVal_setMintedAmount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMintedAmount);
            setMintedAmount(refVal_setMintedAmount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("asset_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("asset_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAssetType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssetType);
            setAssetType(refVal_setAssetType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("asset_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("asset_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAssetUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAssetUrl);
            setAssetUrl(refVal_setAssetUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("medias"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("medias")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setMedias;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMedias);
            setMedias(refVal_setMedias);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("main_media"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("main_media")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMainMedia;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMainMedia);
            setMainMedia(refVal_setMainMedia);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("account_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("account_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAccountId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccountId);
            setAccountId(refVal_setAccountId);
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
    if(val.has_field(utility::conversions::to_string_t(U("created_on"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_on")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedOn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedOn);
            setCreatedOn(refVal_setCreatedOn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("modified_on"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("modified_on")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setModifiedOn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setModifiedOn);
            setModifiedOn(refVal_setModifiedOn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("created_by"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_by")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCreatedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedBy);
            setCreatedBy(refVal_setCreatedBy);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("modified_by"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("modified_by")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setModifiedBy;
            ok &= ModelBase::fromJson(fieldValue, refVal_setModifiedBy);
            setModifiedBy(refVal_setModifiedBy);
        }
    }
    return ok;
}

void Asset::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Token_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("token_id")), m_Token_id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_Parent_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("parent_id")), m_Parent_id));
    }
    if(m_PropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("properties")), m_Properties));
    }
    if(m_AttributesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("attributes")), m_Attributes));
    }
    if(m_AchievementsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("achievements")), m_Achievements));
    }
    if(m_RewardsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rewards")), m_Rewards));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_PriceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("price")), m_Price));
    }
    if(m_SupplyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("supply")), m_Supply));
    }
    if(m_Minted_amountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minted_amount")), m_Minted_amount));
    }
    if(m_Asset_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("asset_type")), m_Asset_type));
    }
    if(m_Asset_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("asset_url")), m_Asset_url));
    }
    if(m_MediasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("medias")), m_Medias));
    }
    if(m_Main_mediaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("main_media")), m_Main_media));
    }
    if(m_Account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("account_id")), m_Account_id));
    }
    if(m_Game_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("game_id")), m_Game_id));
    }
    if(m_Collection_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collection_id")), m_Collection_id));
    }
    if(m_Created_onIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_on")), m_Created_on));
    }
    if(m_Modified_onIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("modified_on")), m_Modified_on));
    }
    if(m_Created_byIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_by")), m_Created_by));
    }
    if(m_Modified_byIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("modified_by")), m_Modified_by));
    }
}

bool Asset::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("token_id"))))
    {
        double refVal_setTokenId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("token_id"))), refVal_setTokenId );
        setTokenId(refVal_setTokenId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("parent_id"))))
    {
        utility::string_t refVal_setParentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("parent_id"))), refVal_setParentId );
        setParentId(refVal_setParentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("properties"))))
    {
        std::vector<utility::string_t> refVal_setProperties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("properties"))), refVal_setProperties );
        setProperties(refVal_setProperties);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("attributes"))))
    {
        std::shared_ptr<Object> refVal_setAttributes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("attributes"))), refVal_setAttributes );
        setAttributes(refVal_setAttributes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("achievements"))))
    {
        std::vector<utility::string_t> refVal_setAchievements;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("achievements"))), refVal_setAchievements );
        setAchievements(refVal_setAchievements);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rewards"))))
    {
        std::vector<utility::string_t> refVal_setRewards;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rewards"))), refVal_setRewards );
        setRewards(refVal_setRewards);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("price"))))
    {
        double refVal_setPrice;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("price"))), refVal_setPrice );
        setPrice(refVal_setPrice);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("supply"))))
    {
        double refVal_setSupply;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("supply"))), refVal_setSupply );
        setSupply(refVal_setSupply);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minted_amount"))))
    {
        double refVal_setMintedAmount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minted_amount"))), refVal_setMintedAmount );
        setMintedAmount(refVal_setMintedAmount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("asset_type"))))
    {
        utility::string_t refVal_setAssetType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("asset_type"))), refVal_setAssetType );
        setAssetType(refVal_setAssetType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("asset_url"))))
    {
        utility::string_t refVal_setAssetUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("asset_url"))), refVal_setAssetUrl );
        setAssetUrl(refVal_setAssetUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("medias"))))
    {
        std::vector<utility::string_t> refVal_setMedias;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("medias"))), refVal_setMedias );
        setMedias(refVal_setMedias);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("main_media"))))
    {
        utility::string_t refVal_setMainMedia;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("main_media"))), refVal_setMainMedia );
        setMainMedia(refVal_setMainMedia);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("account_id"))))
    {
        utility::string_t refVal_setAccountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account_id"))), refVal_setAccountId );
        setAccountId(refVal_setAccountId);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_on"))))
    {
        utility::datetime refVal_setCreatedOn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_on"))), refVal_setCreatedOn );
        setCreatedOn(refVal_setCreatedOn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("modified_on"))))
    {
        utility::datetime refVal_setModifiedOn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("modified_on"))), refVal_setModifiedOn );
        setModifiedOn(refVal_setModifiedOn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_by"))))
    {
        utility::string_t refVal_setCreatedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_by"))), refVal_setCreatedBy );
        setCreatedBy(refVal_setCreatedBy);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("modified_by"))))
    {
        utility::string_t refVal_setModifiedBy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("modified_by"))), refVal_setModifiedBy );
        setModifiedBy(refVal_setModifiedBy);
    }
    return ok;
}

utility::string_t Asset::getId() const
{
    return m_Id;
}

void Asset::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Asset::idIsSet() const
{
    return m_IdIsSet;
}

void Asset::unsetId()
{
    m_IdIsSet = false;
}
double Asset::getTokenId() const
{
    return m_Token_id;
}

void Asset::setTokenId(double value)
{
    m_Token_id = value;
    m_Token_idIsSet = true;
}

bool Asset::tokenIdIsSet() const
{
    return m_Token_idIsSet;
}

void Asset::unsetToken_id()
{
    m_Token_idIsSet = false;
}
utility::string_t Asset::getName() const
{
    return m_Name;
}

void Asset::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Asset::nameIsSet() const
{
    return m_NameIsSet;
}

void Asset::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Asset::getParentId() const
{
    return m_Parent_id;
}

void Asset::setParentId(const utility::string_t& value)
{
    m_Parent_id = value;
    m_Parent_idIsSet = true;
}

bool Asset::parentIdIsSet() const
{
    return m_Parent_idIsSet;
}

void Asset::unsetParent_id()
{
    m_Parent_idIsSet = false;
}
std::vector<utility::string_t>& Asset::getProperties()
{
    return m_Properties;
}

void Asset::setProperties(const std::vector<utility::string_t>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool Asset::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void Asset::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::shared_ptr<Object> Asset::getAttributes() const
{
    return m_Attributes;
}

void Asset::setAttributes(const std::shared_ptr<Object>& value)
{
    m_Attributes = value;
    m_AttributesIsSet = true;
}

bool Asset::attributesIsSet() const
{
    return m_AttributesIsSet;
}

void Asset::unsetAttributes()
{
    m_AttributesIsSet = false;
}
std::vector<utility::string_t>& Asset::getAchievements()
{
    return m_Achievements;
}

void Asset::setAchievements(const std::vector<utility::string_t>& value)
{
    m_Achievements = value;
    m_AchievementsIsSet = true;
}

bool Asset::achievementsIsSet() const
{
    return m_AchievementsIsSet;
}

void Asset::unsetAchievements()
{
    m_AchievementsIsSet = false;
}
std::vector<utility::string_t>& Asset::getRewards()
{
    return m_Rewards;
}

void Asset::setRewards(const std::vector<utility::string_t>& value)
{
    m_Rewards = value;
    m_RewardsIsSet = true;
}

bool Asset::rewardsIsSet() const
{
    return m_RewardsIsSet;
}

void Asset::unsetRewards()
{
    m_RewardsIsSet = false;
}
utility::string_t Asset::getDescription() const
{
    return m_Description;
}

void Asset::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Asset::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Asset::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Asset::getStatus() const
{
    return m_Status;
}

void Asset::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Asset::statusIsSet() const
{
    return m_StatusIsSet;
}

void Asset::unsetStatus()
{
    m_StatusIsSet = false;
}
double Asset::getPrice() const
{
    return m_Price;
}

void Asset::setPrice(double value)
{
    m_Price = value;
    m_PriceIsSet = true;
}

bool Asset::priceIsSet() const
{
    return m_PriceIsSet;
}

void Asset::unsetPrice()
{
    m_PriceIsSet = false;
}
double Asset::getSupply() const
{
    return m_Supply;
}

void Asset::setSupply(double value)
{
    m_Supply = value;
    m_SupplyIsSet = true;
}

bool Asset::supplyIsSet() const
{
    return m_SupplyIsSet;
}

void Asset::unsetSupply()
{
    m_SupplyIsSet = false;
}
double Asset::getMintedAmount() const
{
    return m_Minted_amount;
}

void Asset::setMintedAmount(double value)
{
    m_Minted_amount = value;
    m_Minted_amountIsSet = true;
}

bool Asset::mintedAmountIsSet() const
{
    return m_Minted_amountIsSet;
}

void Asset::unsetMinted_amount()
{
    m_Minted_amountIsSet = false;
}
utility::string_t Asset::getAssetType() const
{
    return m_Asset_type;
}

void Asset::setAssetType(const utility::string_t& value)
{
    m_Asset_type = value;
    m_Asset_typeIsSet = true;
}

bool Asset::assetTypeIsSet() const
{
    return m_Asset_typeIsSet;
}

void Asset::unsetAsset_type()
{
    m_Asset_typeIsSet = false;
}
utility::string_t Asset::getAssetUrl() const
{
    return m_Asset_url;
}

void Asset::setAssetUrl(const utility::string_t& value)
{
    m_Asset_url = value;
    m_Asset_urlIsSet = true;
}

bool Asset::assetUrlIsSet() const
{
    return m_Asset_urlIsSet;
}

void Asset::unsetAsset_url()
{
    m_Asset_urlIsSet = false;
}
std::vector<utility::string_t>& Asset::getMedias()
{
    return m_Medias;
}

void Asset::setMedias(const std::vector<utility::string_t>& value)
{
    m_Medias = value;
    m_MediasIsSet = true;
}

bool Asset::mediasIsSet() const
{
    return m_MediasIsSet;
}

void Asset::unsetMedias()
{
    m_MediasIsSet = false;
}
utility::string_t Asset::getMainMedia() const
{
    return m_Main_media;
}

void Asset::setMainMedia(const utility::string_t& value)
{
    m_Main_media = value;
    m_Main_mediaIsSet = true;
}

bool Asset::mainMediaIsSet() const
{
    return m_Main_mediaIsSet;
}

void Asset::unsetMain_media()
{
    m_Main_mediaIsSet = false;
}
utility::string_t Asset::getAccountId() const
{
    return m_Account_id;
}

void Asset::setAccountId(const utility::string_t& value)
{
    m_Account_id = value;
    m_Account_idIsSet = true;
}

bool Asset::accountIdIsSet() const
{
    return m_Account_idIsSet;
}

void Asset::unsetAccount_id()
{
    m_Account_idIsSet = false;
}
utility::string_t Asset::getGameId() const
{
    return m_Game_id;
}

void Asset::setGameId(const utility::string_t& value)
{
    m_Game_id = value;
    m_Game_idIsSet = true;
}

bool Asset::gameIdIsSet() const
{
    return m_Game_idIsSet;
}

void Asset::unsetGame_id()
{
    m_Game_idIsSet = false;
}
utility::string_t Asset::getCollectionId() const
{
    return m_Collection_id;
}

void Asset::setCollectionId(const utility::string_t& value)
{
    m_Collection_id = value;
    m_Collection_idIsSet = true;
}

bool Asset::collectionIdIsSet() const
{
    return m_Collection_idIsSet;
}

void Asset::unsetCollection_id()
{
    m_Collection_idIsSet = false;
}
utility::datetime Asset::getCreatedOn() const
{
    return m_Created_on;
}

void Asset::setCreatedOn(const utility::datetime& value)
{
    m_Created_on = value;
    m_Created_onIsSet = true;
}

bool Asset::createdOnIsSet() const
{
    return m_Created_onIsSet;
}

void Asset::unsetCreated_on()
{
    m_Created_onIsSet = false;
}
utility::datetime Asset::getModifiedOn() const
{
    return m_Modified_on;
}

void Asset::setModifiedOn(const utility::datetime& value)
{
    m_Modified_on = value;
    m_Modified_onIsSet = true;
}

bool Asset::modifiedOnIsSet() const
{
    return m_Modified_onIsSet;
}

void Asset::unsetModified_on()
{
    m_Modified_onIsSet = false;
}
utility::string_t Asset::getCreatedBy() const
{
    return m_Created_by;
}

void Asset::setCreatedBy(const utility::string_t& value)
{
    m_Created_by = value;
    m_Created_byIsSet = true;
}

bool Asset::createdByIsSet() const
{
    return m_Created_byIsSet;
}

void Asset::unsetCreated_by()
{
    m_Created_byIsSet = false;
}
utility::string_t Asset::getModifiedBy() const
{
    return m_Modified_by;
}

void Asset::setModifiedBy(const utility::string_t& value)
{
    m_Modified_by = value;
    m_Modified_byIsSet = true;
}

bool Asset::modifiedByIsSet() const
{
    return m_Modified_byIsSet;
}

void Asset::unsetModified_by()
{
    m_Modified_byIsSet = false;
}
}


