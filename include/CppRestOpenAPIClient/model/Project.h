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
 * Project.h
 *
 * 
 */

#ifndef MODELS_Project_H_
#define MODELS_Project_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace models {


/// <summary>
/// 
/// </summary>
class  Project
    : public ModelBase
{
public:
    Project();
    virtual ~Project();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Project members

    /// <summary>
    /// The unique identifier for the Game entity.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// The name of the Game.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// A brief description of the Game.
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// The category or genre of the Game.
    /// </summary>
    utility::string_t getCategory() const;
    bool categoryIsSet() const;
    void unsetCategory();

    void setCategory(const utility::string_t& value);

    /// <summary>
    /// The logo or icon associated with the Game.
    /// </summary>
    utility::string_t getLogoImage() const;
    bool logoImageIsSet() const;
    void unsetLogo_image();

    void setLogoImage(const utility::string_t& value);

    /// <summary>
    /// Additional images associated with the collection, such as screenshots or promotional images.
    /// </summary>
    std::vector<utility::string_t>& getMedias();
    bool mediasIsSet() const;
    void unsetMedias();

    void setMedias(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Additional social links associated with the collection
    /// </summary>
    std::vector<utility::string_t>& getSocialLinks();
    bool socialLinksIsSet() const;
    void unsetSocial_links();

    void setSocialLinks(const std::vector<utility::string_t>& value);

    /// <summary>
    /// The main or featured image associated with the Game. You can set it from the Dashboard as main image.
    /// </summary>
    utility::string_t getMainMedia() const;
    bool mainMediaIsSet() const;
    void unsetMain_media();

    void setMainMedia(const utility::string_t& value);

    /// <summary>
    /// A unique URL for the game on the L3vels platform.
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

    /// <summary>
    /// The URL for the Game&#39;s website or landing page.
    /// </summary>
    utility::string_t getWebLink() const;
    bool webLinkIsSet() const;
    void unsetWeb_link();

    void setWebLink(const utility::string_t& value);

    /// <summary>
    /// The link to the Game&#39;s Discord server.
    /// </summary>
    utility::string_t getDiscord() const;
    bool discordIsSet() const;
    void unsetDiscord();

    void setDiscord(const utility::string_t& value);

    /// <summary>
    /// The link to the Game&#39;s official Twitter account.
    /// </summary>
    utility::string_t getTwitter() const;
    bool twitterIsSet() const;
    void unsetTwitter();

    void setTwitter(const utility::string_t& value);

    /// <summary>
    /// The link to the Game&#39;s official Instagram account.
    /// </summary>
    utility::string_t getInstagram() const;
    bool instagramIsSet() const;
    void unsetInstagram();

    void setInstagram(const utility::string_t& value);

    /// <summary>
    ///  A phone number for contacting the Game&#39;s developers or support team.
    /// </summary>
    utility::string_t getContactPhone() const;
    bool contactPhoneIsSet() const;
    void unsetContact_phone();

    void setContactPhone(const utility::string_t& value);

    /// <summary>
    /// An email address for contacting the Game&#39;s developers or support team.
    /// </summary>
    utility::string_t getContactEmail() const;
    bool contactEmailIsSet() const;
    void unsetContact_email();

    void setContactEmail(const utility::string_t& value);

    /// <summary>
    /// The current status of the Game, such as \&quot;Draft\&quot;, \&quot;Active\&quot;, or \&quot;Inactive\&quot;.
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    ///  The unique identifier of the account that the Game belongs to. This allows developers to manage multiple Games across multiple accounts.
    /// </summary>
    double getAccountId() const;
    bool accountIdIsSet() const;
    void unsetAccount_id();

    void setAccountId(double value);

    /// <summary>
    /// The date and time that the Game entity was created.
    /// </summary>
    utility::datetime getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetCreated_on();

    void setCreatedOn(const utility::datetime& value);

    /// <summary>
    /// The date and time that the Game entity was last modified.
    /// </summary>
    utility::datetime getModifiedOn() const;
    bool modifiedOnIsSet() const;
    void unsetModified_on();

    void setModifiedOn(const utility::datetime& value);

    /// <summary>
    /// The user or system that created the Game entity.
    /// </summary>
    double getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetCreated_by();

    void setCreatedBy(double value);

    /// <summary>
    /// The user or system that last modified the Game entity.
    /// </summary>
    double getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetModified_by();

    void setModifiedBy(double value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Category;
    bool m_CategoryIsSet;
    utility::string_t m_Logo_image;
    bool m_Logo_imageIsSet;
    std::vector<utility::string_t> m_Medias;
    bool m_MediasIsSet;
    std::vector<utility::string_t> m_Social_links;
    bool m_Social_linksIsSet;
    utility::string_t m_Main_media;
    bool m_Main_mediaIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m_Web_link;
    bool m_Web_linkIsSet;
    utility::string_t m_Discord;
    bool m_DiscordIsSet;
    utility::string_t m_Twitter;
    bool m_TwitterIsSet;
    utility::string_t m_Instagram;
    bool m_InstagramIsSet;
    utility::string_t m_Contact_phone;
    bool m_Contact_phoneIsSet;
    utility::string_t m_Contact_email;
    bool m_Contact_emailIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    double m_Account_id;
    bool m_Account_idIsSet;
    utility::datetime m_Created_on;
    bool m_Created_onIsSet;
    utility::datetime m_Modified_on;
    bool m_Modified_onIsSet;
    double m_Created_by;
    bool m_Created_byIsSet;
    double m_Modified_by;
    bool m_Modified_byIsSet;
};


}

#endif /* MODELS_Project_H_ */