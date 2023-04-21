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
 * Asset.h
 *
 * 
 */

#ifndef MODELS_Asset_H_
#define MODELS_Asset_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/Object.h"
#include <vector>

namespace models {


/// <summary>
/// 
/// </summary>
class  Asset
    : public ModelBase
{
public:
    Asset();
    virtual ~Asset();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Asset members

    /// <summary>
    /// The unique identifier for the asset entity.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// The token id of the asset.
    /// </summary>
    double getTokenId() const;
    bool tokenIdIsSet() const;
    void unsetToken_id();

    void setTokenId(double value);

    /// <summary>
    /// The name of the asset.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// ID of the parent asset.
    /// </summary>
    utility::string_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetParent_id();

    void setParentId(const utility::string_t& value);

    /// <summary>
    /// Custom properties of the asset.
    /// </summary>
    std::shared_ptr<Object> getProperties() const;
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Custom attributes of the asset.
    /// </summary>
    std::shared_ptr<Object> getAttributes() const;
    bool attributesIsSet() const;
    void unsetAttributes();

    void setAttributes(const std::shared_ptr<Object>& value);

    /// <summary>
    /// The description of the asset.
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// The status of the asset.
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// The price of the asset.
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();

    void setPrice(double value);

    /// <summary>
    /// The supply of the asset.
    /// </summary>
    double getSupply() const;
    bool supplyIsSet() const;
    void unsetSupply();

    void setSupply(double value);

    /// <summary>
    /// The minted amount of the asset.
    /// </summary>
    double getMintedAmount() const;
    bool mintedAmountIsSet() const;
    void unsetMinted_amount();

    void setMintedAmount(double value);

    /// <summary>
    /// The asset type. Can be main or nested.
    /// </summary>
    utility::string_t getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetAsset_type();

    void setAssetType(const utility::string_t& value);

    /// <summary>
    /// The asset URL.
    /// </summary>
    utility::string_t getAssetUrl() const;
    bool assetUrlIsSet() const;
    void unsetAsset_url();

    void setAssetUrl(const utility::string_t& value);

    /// <summary>
    /// Additional images associated with the asset, such as screenshots or promotional images.
    /// </summary>
    std::vector<utility::string_t>& getMedias();
    bool mediasIsSet() const;
    void unsetMedias();

    void setMedias(const std::vector<utility::string_t>& value);

    /// <summary>
    /// The main or featured image associated with the asset. You can set it from the Dashboard as main image.
    /// </summary>
    utility::string_t getMainMedia() const;
    bool mainMediaIsSet() const;
    void unsetMain_media();

    void setMainMedia(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of the account that the Collection belongs to.
    /// </summary>
    double getAccountId() const;
    bool accountIdIsSet() const;
    void unsetAccount_id();

    void setAccountId(double value);

    /// <summary>
    /// The unique identifier of the project that the asset is associated with. This allows developers to organize their assets by project and helps with tracking and reporting.
    /// </summary>
    utility::string_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetProject_id();

    void setProjectId(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of the collection that the asset is associated with. This allows developers to organize their collections by project and helps with tracking and reporting.
    /// </summary>
    utility::string_t getCollectionId() const;
    bool collectionIdIsSet() const;
    void unsetCollection_id();

    void setCollectionId(const utility::string_t& value);

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
    double getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetCreated_by();

    void setCreatedBy(double value);

    /// <summary>
    /// The Id of the user who last modified the collection.
    /// </summary>
    double getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetModified_by();

    void setModifiedBy(double value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    double m_Token_id;
    bool m_Token_idIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Parent_id;
    bool m_Parent_idIsSet;
    std::shared_ptr<Object> m_Properties;
    bool m_PropertiesIsSet;
    std::shared_ptr<Object> m_Attributes;
    bool m_AttributesIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    double m_Price;
    bool m_PriceIsSet;
    double m_Supply;
    bool m_SupplyIsSet;
    double m_Minted_amount;
    bool m_Minted_amountIsSet;
    utility::string_t m_Asset_type;
    bool m_Asset_typeIsSet;
    utility::string_t m_Asset_url;
    bool m_Asset_urlIsSet;
    std::vector<utility::string_t> m_Medias;
    bool m_MediasIsSet;
    utility::string_t m_Main_media;
    bool m_Main_mediaIsSet;
    double m_Account_id;
    bool m_Account_idIsSet;
    utility::string_t m_Project_id;
    bool m_Project_idIsSet;
    utility::string_t m_Collection_id;
    bool m_Collection_idIsSet;
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

#endif /* MODELS_Asset_H_ */