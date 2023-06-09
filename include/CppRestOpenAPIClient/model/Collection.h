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
 * Collection.h
 *
 * 
 */

#ifndef MODELS_Collection_H_
#define MODELS_Collection_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"
#include <vector>

namespace models {


/// <summary>
/// 
/// </summary>
class  Collection
    : public ModelBase
{
public:
    Collection();
    virtual ~Collection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Collection members

    /// <summary>
    /// The unique identifier for the collection entity.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// The unique identifier that can be provided by game studio.
    /// </summary>
    utility::string_t getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetUnique_id();

    void setUniqueId(const utility::string_t& value);

    /// <summary>
    /// The name of the collection.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// A brief description of the collection.
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// An image representing the collection&#39;s logo.
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
    /// The main or featured image associated with the game. You can set it from the dashboard as main image.
    /// </summary>
    utility::string_t getMainMedia() const;
    bool mainMediaIsSet() const;
    void unsetMain_media();

    void setMainMedia(const utility::string_t& value);

    /// <summary>
    /// A unique URL for the collection on the L3vels platform.
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);

    /// <summary>
    /// A URL link to the collection&#39;s webpage.
    /// </summary>
    utility::string_t getWebLink() const;
    bool webLinkIsSet() const;
    void unsetWeb_link();

    void setWebLink(const utility::string_t& value);

    /// <summary>
    /// The supply represents the number of assets that are available within the Collection.
    /// </summary>
    double getSupply() const;
    bool supplyIsSet() const;
    void unsetSupply();

    void setSupply(double value);

    /// <summary>
    /// Custom properties that are unique to the collection and defined by the developer to categorize and filter them.
    /// </summary>
    std::shared_ptr<Object> getCustomPropertyProps() const;
    bool customPropertyPropsIsSet() const;
    void unsetCustom_property_props();

    void setCustomPropertyProps(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Additional social links associated with the collection
    /// </summary>
    std::vector<utility::string_t>& getSocialLinks();
    bool socialLinksIsSet() const;
    void unsetSocial_links();

    void setSocialLinks(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Custom assets fields associated with the collection.
    /// </summary>
    std::shared_ptr<Object> getCustomAssetProps() const;
    bool customAssetPropsIsSet() const;
    void unsetCustom_asset_props();

    void setCustomAssetProps(const std::shared_ptr<Object>& value);

    /// <summary>
    /// The category or categories that the collection belongs to.
    /// </summary>
    std::shared_ptr<Object> getCategories() const;
    bool categoriesIsSet() const;
    void unsetCategories();

    void setCategories(const std::shared_ptr<Object>& value);

    /// <summary>
    /// The current status of the collection. Possible values are: Draft, Active
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of the account that the Collection belongs to.
    /// </summary>
    utility::string_t getAccountId() const;
    bool accountIdIsSet() const;
    void unsetAccount_id();

    void setAccountId(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of the game that the collection is associated with. This allows developers to organize their collections by game and helps with tracking and reporting.
    /// </summary>
    utility::string_t getGameId() const;
    bool gameIdIsSet() const;
    void unsetGame_id();

    void setGameId(const utility::string_t& value);

    /// <summary>
    /// The date when the collection was created.
    /// </summary>
    utility::datetime getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetCreated_on();

    void setCreatedOn(const utility::datetime& value);

    /// <summary>
    /// The date when the collection was last modified.
    /// </summary>
    utility::datetime getModifiedOn() const;
    bool modifiedOnIsSet() const;
    void unsetModified_on();

    void setModifiedOn(const utility::datetime& value);

    /// <summary>
    /// The Id of the user who created the collection.
    /// </summary>
    utility::string_t getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetCreated_by();

    void setCreatedBy(const utility::string_t& value);

    /// <summary>
    /// The Id of the user who last modified the collection.
    /// </summary>
    utility::string_t getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetModified_by();

    void setModifiedBy(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Unique_id;
    bool m_Unique_idIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Logo_image;
    bool m_Logo_imageIsSet;
    std::vector<utility::string_t> m_Medias;
    bool m_MediasIsSet;
    utility::string_t m_Main_media;
    bool m_Main_mediaIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m_Web_link;
    bool m_Web_linkIsSet;
    double m_Supply;
    bool m_SupplyIsSet;
    std::shared_ptr<Object> m_Custom_property_props;
    bool m_Custom_property_propsIsSet;
    std::vector<utility::string_t> m_Social_links;
    bool m_Social_linksIsSet;
    std::shared_ptr<Object> m_Custom_asset_props;
    bool m_Custom_asset_propsIsSet;
    std::shared_ptr<Object> m_Categories;
    bool m_CategoriesIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Account_id;
    bool m_Account_idIsSet;
    utility::string_t m_Game_id;
    bool m_Game_idIsSet;
    utility::datetime m_Created_on;
    bool m_Created_onIsSet;
    utility::datetime m_Modified_on;
    bool m_Modified_onIsSet;
    utility::string_t m_Created_by;
    bool m_Created_byIsSet;
    utility::string_t m_Modified_by;
    bool m_Modified_byIsSet;
};


}

#endif /* MODELS_Collection_H_ */
