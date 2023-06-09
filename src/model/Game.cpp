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



#include "CppRestOpenAPIClient/model/Game.h"

namespace models {



Game::Game()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Category = utility::conversions::to_string_t("");
    m_CategoryIsSet = false;
    m_Logo_image = utility::conversions::to_string_t("");
    m_Logo_imageIsSet = false;
    m_MediasIsSet = false;
    m_Social_linksIsSet = false;
    m_Main_media = utility::conversions::to_string_t("");
    m_Main_mediaIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Web_link = utility::conversions::to_string_t("");
    m_Web_linkIsSet = false;
    m_Discord = utility::conversions::to_string_t("");
    m_DiscordIsSet = false;
    m_Twitter = utility::conversions::to_string_t("");
    m_TwitterIsSet = false;
    m_Instagram = utility::conversions::to_string_t("");
    m_InstagramIsSet = false;
    m_Contact_phone = utility::conversions::to_string_t("");
    m_Contact_phoneIsSet = false;
    m_Contact_email = utility::conversions::to_string_t("");
    m_Contact_emailIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Account_id = utility::conversions::to_string_t("");
    m_Account_idIsSet = false;
    m_Created_on = utility::datetime();
    m_Created_onIsSet = false;
    m_Modified_on = utility::datetime();
    m_Modified_onIsSet = false;
    m_Created_by = utility::conversions::to_string_t("");
    m_Created_byIsSet = false;
    m_Modified_by = utility::conversions::to_string_t("");
    m_Modified_byIsSet = false;
}

Game::~Game()
{
}

void Game::validate()
{
    // TODO: implement validation
}

web::json::value Game::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_CategoryIsSet)
    {
        val[utility::conversions::to_string_t(U("category"))] = ModelBase::toJson(m_Category);
    }
    if(m_Logo_imageIsSet)
    {
        val[utility::conversions::to_string_t(U("logo_image"))] = ModelBase::toJson(m_Logo_image);
    }
    if(m_MediasIsSet)
    {
        val[utility::conversions::to_string_t(U("medias"))] = ModelBase::toJson(m_Medias);
    }
    if(m_Social_linksIsSet)
    {
        val[utility::conversions::to_string_t(U("social_links"))] = ModelBase::toJson(m_Social_links);
    }
    if(m_Main_mediaIsSet)
    {
        val[utility::conversions::to_string_t(U("main_media"))] = ModelBase::toJson(m_Main_media);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_Web_linkIsSet)
    {
        val[utility::conversions::to_string_t(U("web_link"))] = ModelBase::toJson(m_Web_link);
    }
    if(m_DiscordIsSet)
    {
        val[utility::conversions::to_string_t(U("discord"))] = ModelBase::toJson(m_Discord);
    }
    if(m_TwitterIsSet)
    {
        val[utility::conversions::to_string_t(U("twitter"))] = ModelBase::toJson(m_Twitter);
    }
    if(m_InstagramIsSet)
    {
        val[utility::conversions::to_string_t(U("instagram"))] = ModelBase::toJson(m_Instagram);
    }
    if(m_Contact_phoneIsSet)
    {
        val[utility::conversions::to_string_t(U("contact_phone"))] = ModelBase::toJson(m_Contact_phone);
    }
    if(m_Contact_emailIsSet)
    {
        val[utility::conversions::to_string_t(U("contact_email"))] = ModelBase::toJson(m_Contact_email);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("account_id"))] = ModelBase::toJson(m_Account_id);
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

bool Game::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("category"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("category")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCategory;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCategory);
            setCategory(refVal_setCategory);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("logo_image"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("logo_image")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLogoImage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLogoImage);
            setLogoImage(refVal_setLogoImage);
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
    if(val.has_field(utility::conversions::to_string_t(U("social_links"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("social_links")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setSocialLinks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSocialLinks);
            setSocialLinks(refVal_setSocialLinks);
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
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("web_link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("web_link")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebLink);
            setWebLink(refVal_setWebLink);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("discord"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("discord")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDiscord;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDiscord);
            setDiscord(refVal_setDiscord);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("twitter"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("twitter")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTwitter;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTwitter);
            setTwitter(refVal_setTwitter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("instagram"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("instagram")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setInstagram;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInstagram);
            setInstagram(refVal_setInstagram);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contact_phone"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contact_phone")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContactPhone;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContactPhone);
            setContactPhone(refVal_setContactPhone);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contact_email"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contact_email")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContactEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContactEmail);
            setContactEmail(refVal_setContactEmail);
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

void Game::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_CategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("category")), m_Category));
    }
    if(m_Logo_imageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("logo_image")), m_Logo_image));
    }
    if(m_MediasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("medias")), m_Medias));
    }
    if(m_Social_linksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("social_links")), m_Social_links));
    }
    if(m_Main_mediaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("main_media")), m_Main_media));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
    if(m_Web_linkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("web_link")), m_Web_link));
    }
    if(m_DiscordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("discord")), m_Discord));
    }
    if(m_TwitterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("twitter")), m_Twitter));
    }
    if(m_InstagramIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("instagram")), m_Instagram));
    }
    if(m_Contact_phoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contact_phone")), m_Contact_phone));
    }
    if(m_Contact_emailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contact_email")), m_Contact_email));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("account_id")), m_Account_id));
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

bool Game::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("category"))))
    {
        utility::string_t refVal_setCategory;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("category"))), refVal_setCategory );
        setCategory(refVal_setCategory);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("logo_image"))))
    {
        utility::string_t refVal_setLogoImage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("logo_image"))), refVal_setLogoImage );
        setLogoImage(refVal_setLogoImage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("medias"))))
    {
        std::vector<utility::string_t> refVal_setMedias;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("medias"))), refVal_setMedias );
        setMedias(refVal_setMedias);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("social_links"))))
    {
        std::vector<utility::string_t> refVal_setSocialLinks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("social_links"))), refVal_setSocialLinks );
        setSocialLinks(refVal_setSocialLinks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("main_media"))))
    {
        utility::string_t refVal_setMainMedia;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("main_media"))), refVal_setMainMedia );
        setMainMedia(refVal_setMainMedia);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("web_link"))))
    {
        utility::string_t refVal_setWebLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("web_link"))), refVal_setWebLink );
        setWebLink(refVal_setWebLink);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("discord"))))
    {
        utility::string_t refVal_setDiscord;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("discord"))), refVal_setDiscord );
        setDiscord(refVal_setDiscord);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("twitter"))))
    {
        utility::string_t refVal_setTwitter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("twitter"))), refVal_setTwitter );
        setTwitter(refVal_setTwitter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("instagram"))))
    {
        utility::string_t refVal_setInstagram;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("instagram"))), refVal_setInstagram );
        setInstagram(refVal_setInstagram);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contact_phone"))))
    {
        utility::string_t refVal_setContactPhone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contact_phone"))), refVal_setContactPhone );
        setContactPhone(refVal_setContactPhone);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contact_email"))))
    {
        utility::string_t refVal_setContactEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contact_email"))), refVal_setContactEmail );
        setContactEmail(refVal_setContactEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("account_id"))))
    {
        utility::string_t refVal_setAccountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("account_id"))), refVal_setAccountId );
        setAccountId(refVal_setAccountId);
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

utility::string_t Game::getId() const
{
    return m_Id;
}

void Game::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Game::idIsSet() const
{
    return m_IdIsSet;
}

void Game::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Game::getName() const
{
    return m_Name;
}

void Game::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Game::nameIsSet() const
{
    return m_NameIsSet;
}

void Game::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Game::getDescription() const
{
    return m_Description;
}

void Game::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Game::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Game::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Game::getCategory() const
{
    return m_Category;
}

void Game::setCategory(const utility::string_t& value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}

bool Game::categoryIsSet() const
{
    return m_CategoryIsSet;
}

void Game::unsetCategory()
{
    m_CategoryIsSet = false;
}
utility::string_t Game::getLogoImage() const
{
    return m_Logo_image;
}

void Game::setLogoImage(const utility::string_t& value)
{
    m_Logo_image = value;
    m_Logo_imageIsSet = true;
}

bool Game::logoImageIsSet() const
{
    return m_Logo_imageIsSet;
}

void Game::unsetLogo_image()
{
    m_Logo_imageIsSet = false;
}
std::vector<utility::string_t>& Game::getMedias()
{
    return m_Medias;
}

void Game::setMedias(const std::vector<utility::string_t>& value)
{
    m_Medias = value;
    m_MediasIsSet = true;
}

bool Game::mediasIsSet() const
{
    return m_MediasIsSet;
}

void Game::unsetMedias()
{
    m_MediasIsSet = false;
}
std::vector<utility::string_t>& Game::getSocialLinks()
{
    return m_Social_links;
}

void Game::setSocialLinks(const std::vector<utility::string_t>& value)
{
    m_Social_links = value;
    m_Social_linksIsSet = true;
}

bool Game::socialLinksIsSet() const
{
    return m_Social_linksIsSet;
}

void Game::unsetSocial_links()
{
    m_Social_linksIsSet = false;
}
utility::string_t Game::getMainMedia() const
{
    return m_Main_media;
}

void Game::setMainMedia(const utility::string_t& value)
{
    m_Main_media = value;
    m_Main_mediaIsSet = true;
}

bool Game::mainMediaIsSet() const
{
    return m_Main_mediaIsSet;
}

void Game::unsetMain_media()
{
    m_Main_mediaIsSet = false;
}
utility::string_t Game::getUrl() const
{
    return m_Url;
}

void Game::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool Game::urlIsSet() const
{
    return m_UrlIsSet;
}

void Game::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t Game::getWebLink() const
{
    return m_Web_link;
}

void Game::setWebLink(const utility::string_t& value)
{
    m_Web_link = value;
    m_Web_linkIsSet = true;
}

bool Game::webLinkIsSet() const
{
    return m_Web_linkIsSet;
}

void Game::unsetWeb_link()
{
    m_Web_linkIsSet = false;
}
utility::string_t Game::getDiscord() const
{
    return m_Discord;
}

void Game::setDiscord(const utility::string_t& value)
{
    m_Discord = value;
    m_DiscordIsSet = true;
}

bool Game::discordIsSet() const
{
    return m_DiscordIsSet;
}

void Game::unsetDiscord()
{
    m_DiscordIsSet = false;
}
utility::string_t Game::getTwitter() const
{
    return m_Twitter;
}

void Game::setTwitter(const utility::string_t& value)
{
    m_Twitter = value;
    m_TwitterIsSet = true;
}

bool Game::twitterIsSet() const
{
    return m_TwitterIsSet;
}

void Game::unsetTwitter()
{
    m_TwitterIsSet = false;
}
utility::string_t Game::getInstagram() const
{
    return m_Instagram;
}

void Game::setInstagram(const utility::string_t& value)
{
    m_Instagram = value;
    m_InstagramIsSet = true;
}

bool Game::instagramIsSet() const
{
    return m_InstagramIsSet;
}

void Game::unsetInstagram()
{
    m_InstagramIsSet = false;
}
utility::string_t Game::getContactPhone() const
{
    return m_Contact_phone;
}

void Game::setContactPhone(const utility::string_t& value)
{
    m_Contact_phone = value;
    m_Contact_phoneIsSet = true;
}

bool Game::contactPhoneIsSet() const
{
    return m_Contact_phoneIsSet;
}

void Game::unsetContact_phone()
{
    m_Contact_phoneIsSet = false;
}
utility::string_t Game::getContactEmail() const
{
    return m_Contact_email;
}

void Game::setContactEmail(const utility::string_t& value)
{
    m_Contact_email = value;
    m_Contact_emailIsSet = true;
}

bool Game::contactEmailIsSet() const
{
    return m_Contact_emailIsSet;
}

void Game::unsetContact_email()
{
    m_Contact_emailIsSet = false;
}
utility::string_t Game::getStatus() const
{
    return m_Status;
}

void Game::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Game::statusIsSet() const
{
    return m_StatusIsSet;
}

void Game::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Game::getAccountId() const
{
    return m_Account_id;
}

void Game::setAccountId(const utility::string_t& value)
{
    m_Account_id = value;
    m_Account_idIsSet = true;
}

bool Game::accountIdIsSet() const
{
    return m_Account_idIsSet;
}

void Game::unsetAccount_id()
{
    m_Account_idIsSet = false;
}
utility::datetime Game::getCreatedOn() const
{
    return m_Created_on;
}

void Game::setCreatedOn(const utility::datetime& value)
{
    m_Created_on = value;
    m_Created_onIsSet = true;
}

bool Game::createdOnIsSet() const
{
    return m_Created_onIsSet;
}

void Game::unsetCreated_on()
{
    m_Created_onIsSet = false;
}
utility::datetime Game::getModifiedOn() const
{
    return m_Modified_on;
}

void Game::setModifiedOn(const utility::datetime& value)
{
    m_Modified_on = value;
    m_Modified_onIsSet = true;
}

bool Game::modifiedOnIsSet() const
{
    return m_Modified_onIsSet;
}

void Game::unsetModified_on()
{
    m_Modified_onIsSet = false;
}
utility::string_t Game::getCreatedBy() const
{
    return m_Created_by;
}

void Game::setCreatedBy(const utility::string_t& value)
{
    m_Created_by = value;
    m_Created_byIsSet = true;
}

bool Game::createdByIsSet() const
{
    return m_Created_byIsSet;
}

void Game::unsetCreated_by()
{
    m_Created_byIsSet = false;
}
utility::string_t Game::getModifiedBy() const
{
    return m_Modified_by;
}

void Game::setModifiedBy(const utility::string_t& value)
{
    m_Modified_by = value;
    m_Modified_byIsSet = true;
}

bool Game::modifiedByIsSet() const
{
    return m_Modified_byIsSet;
}

void Game::unsetModified_by()
{
    m_Modified_byIsSet = false;
}
}


